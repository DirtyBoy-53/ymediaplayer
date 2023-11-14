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

protected:
    void initUI();

};