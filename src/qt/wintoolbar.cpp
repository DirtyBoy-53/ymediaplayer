#include "wintoolbar.h"

WinToolbar::WinToolbar(QWidget *parent)
{
    initUI();
    initConnect();
}

void WinToolbar::initUI()
{
    setFixedHeight(VIDEO_TOOLBAR_HEIGHT);

    QSize sz(VIDEO_TOOLBAR_WIDTH, VIDEO_TOOLBAR_HEIGHT);
    mbtnStart = genPushButton(QPixmap("image_start"), tr("start"));
    mbtnPause = genPushButton(QPixmap("image_pause"), tr("pause"));
    
#if !WITH_MV_STYLE
    btnStart->setShortcut(Qt::Key_Space);
    btnPause->setShortcut(Qt::Key_Space);
#endif
    
    mbtnStop = genPushButton(QPixmap("image_stop"), tr("stop"));

}

void WinToolbar::initConnect()
{
}
