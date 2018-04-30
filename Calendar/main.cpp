
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
#ifdef Q_OS_WIN
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QApplication a(argc, argv);
    QFont font("Courier New");
    font.setStyleHint(QFont::Monospace);
    QApplication::setFont(font);
    login w;
    w.show();

    return a.exec();
}
