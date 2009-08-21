#include <QApplication>
#include <QObject>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include "clickhandler.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget win;
    win.setWindowTitle("Qt4 Button Demo");
    
    QVBoxLayout layout;

    QPushButton button("Click me!");
    layout.addWidget(&button);
    ClickHandler handler;

    QObject::connect(&button, SIGNAL(clicked()), &handler, SLOT(message()));

    win.setLayout(&layout);
    win.show();
    return app.exec();
}
