#pragma once
#include <QtWidgets/QMainWindow>
#include "qtheaders.h"
#include "qtstyles.h"
#include "singleton.h"
class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    enum window_state_e {
        NORMAL = 0,
        MINIMIZED,
        MAXIMIZED,
        FULLSCREEN,
    } window_state;

protected:
    void initUI();


public slots:
    void mv_fullscreen();

};