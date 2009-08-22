#include <iostream>
#include <QPushButton>
#include <QVBoxLayout>
#include "window.h"
#include "clickhandler.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Qt4 Button Demo");

    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    button = new QPushButton(QString("Click me!"));
    QObject::connect(button, SIGNAL(clicked()), this, SLOT(message()));
    layout->addWidget(button);
}

void Window::message()
{
    std::cout << "Button was clicked!" << std::endl;
}
