#pragma once
#include "qtheaders.h"

class WinTitlebar : public QFrame
{
    Q_OBJECT
public:
    explicit WinTitlebar(QWidget *parent = nullptr);

protected:
    void initUI();
    void initConnect();

private:
    QLabel *mlblTitle;
    QPushButton *mbtnClose;
};
