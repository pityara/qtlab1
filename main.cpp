#include <QtGui>
#include "mainwindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainWindow window;
    window.setWindowTitle("QT OpenGL - Lesson 1");
    window.show();

    return app.exec();
}
