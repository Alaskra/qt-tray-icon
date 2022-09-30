#include <QApplication>
#include <QIcon>
#include <QSystemTrayIcon>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QSystemTrayIcon *trayIcon = new QSystemTrayIcon(QIcon(":/icons/systray"));
    // seems qt's bug, if add use .svg extension，systray shows an empty icon(can reproduced in manjaro kde)
    // and .png extension can work correctly
    // QSystemTrayIcon *trayIcon = new QSystemTrayIcon(QIcon(":/icons/systray.svg"));
    // QSystemTrayIcon *trayIcon = new QSystemTrayIcon(QIcon(":/icons/systemTrayIcon.png"));
    trayIcon->setVisible(true);

    return app.exec();
}

