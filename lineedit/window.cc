#include <QtDebug>
#include <QLineEdit>
#include <QVBoxLayout>
#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("QLineEdit Demo");
    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    lineEdit = new QLineEdit;
    connect(lineEdit, SIGNAL(returnPressed()), this, SLOT(text()));
    layout->addWidget(lineEdit);
}

void Window::text()
{
    qDebug() << lineEdit->text();
}

