#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //estilos globales
    a.setStyleSheet(R"(
        QMainWindow {
            background-color: #2b2b2b;
            color: white;
        }
        QPushButton {
            background-color: #444;
            color: white;
            border: none;
            padding: 8px;
            border-radius: 4px;
        }
        QPushButton:hover {
            background-color: #555;
        }
        QTableWidget {
            background-color: #333;
            color: white;
            gridline-color: #555;
        }
    )");
    w.show();
    return a.exec();
}
