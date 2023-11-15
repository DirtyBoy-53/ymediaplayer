#pragma once
#include "qtheaders.h"
class WinToolbar : public QFrame
{
    Q_OBJECT
public:
    explicit WinToolbar(QWidget *parent = nullptr);

signals:
    void sigStart();
    void sigStop();
    void sigPause();

public slots:

protected:
    void initUI();
    void initConnect();

public:
    QPushButton* mbtnStart;
    QPushButton* mbtnPause;

    QPushButton* mbtnStop;
    QPushButton* mbtnPrev;
    QPushButton* mbtnNext;

    QSlider* msldProgress;
    QLabel* mlblDuration;
};