#include "mainwindow.h"
#include "appdef.h"
#include "confile.h"
#include "qtstyles.h"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
{
    initUI();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initUI()
{
    setWindowIcon(QIcon(":/image/icon.png"));

    int w = g_confile->Get<int>("main_window_width", "ui", MAIN_WINDOW_WIDTH);
    int h = g_confile->Get<int>("main_window_height", "ui", MAIN_WINDOW_HEIGHT);
    setBaseSize(w, h);
}
