#include <QApplication>
#include <QObject>
#include <QPushButton>
#include "clickhandler.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QPushButton button("Click me!");
    ClickHandler handler;

    QObject::connect(&button, SIGNAL(clicked()), &handler, SLOT(message()));

    button.show();
    return app.exec();
}
