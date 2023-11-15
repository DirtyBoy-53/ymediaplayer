#include "wintitlebar.h"
#include "qtstyles.h"
WinTitlebar::WinTitlebar(QWidget *parent) : QFrame(parent)
{
    initUI();
    initConnect();
}

void WinTitlebar::initUI()
{
    setFixedHeight(VIDEO_TITLEBAR_HEIGHT);

    mlblTitle = new QLabel();
    mbtnClose = genPushButton(QPixmap(":image_close"), tr("close"));

    QHBoxLayout* hLayout = genHBoxLayout();
    hLayout->addWidget(mlblTitle);
    hLayout->addStretch();
    hLayout->addWidget(mbtnClose);

    setLayout(hLayout);
}

void WinTitlebar::initConnect(){}
