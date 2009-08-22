#include <QPushButton>
#include <QVBoxLayout>
#include "window.h"
#include "clickhandler.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Qt4 Button Demo");

    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    ClickHandler *handler = new ClickHandler;
    button = new QPushButton(QString("Click me!"));
    QObject::connect(button, SIGNAL(clicked()), handler, SLOT(message()));
    layout->addWidget(button);
}
