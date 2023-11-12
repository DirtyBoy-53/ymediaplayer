#include "qtheaders.h"
#include <QApplication>
#include "qtstyles.h"
#include "appdef.h"
#include "confile.h"
#include "ylog.h"
#include <format>
#include "mainwindow.h"
IniParser* g_config = nullptr;
char g_exec_path[256]{0};
char g_exec_dir[256]{0};
char g_run_dir[256]{0};
char g_conf_file[256]{0};
char g_log_file[256]{0};

static int load_config(){
    get_executable_path(g_exec_path, sizeof(g_exec_path));
#if 1
    get_executable_dir(g_exec_dir,sizeof(g_exec_dir));
    get_run_dir(g_run_dir,sizeof(g_run_dir));

    g_config = new IniParser;
    snprintf(g_conf_file,sizeof(g_conf_file), "%s/conf/%s.conf",g_exec_dir,APP_NAME);
    if(access(g_conf_file, 0) != 0){
        QFile::copy(QString(g_exec_dir) + "/conf/" APP_NAME ".conf.default", g_conf_file);
    }
    g_config->LoadFromFile(g_conf_file);
    // logfile
    std::string str = g_config->GetValue("logfile");
    if(str.empty()){
        datetime_t time = datetime_now();
        std::format_to(std::back_inserter(str),"logs/{}-{}-{}.log",time.year,time.month,time.day);
    }
    snprintf(g_log_file, sizeof(g_log_file), "%s", str.c_str());
    YLog::initLog(g_log_file);
    
    // first log here
    YLog::Logger->info("{} version: {}",g_exec_path, hv_compile_version());
#endif
    return 1;

}


int main(int argc,char** argv)
{
    QApplication a(argc,argv);
    load_config();
    MainWindow w;
    w.show();

    return a.exec();
}