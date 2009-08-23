#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Quit Button");

    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    quit = new QPushButton("Quit");
    layout->addWidget(quit);

    connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
}
