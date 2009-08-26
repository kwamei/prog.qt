#include <QLabel>
#include <QVBoxLayout>
#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Hello");
    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    QLabel *label = new QLabel("Hello world!");
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);
}
