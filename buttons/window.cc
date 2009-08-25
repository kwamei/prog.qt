#include <iostream>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Buttons");

    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    for (int i = 0; i < 5; ++i) {
	QPushButton *button = new QPushButton("Button " + 
		QString::number(i+1));
	QObject::connect(button, SIGNAL(clicked()), this, SLOT(message()));
	layout->addWidget(button);
    }

    label = new QLabel("Nothing clicked.");
    layout->addWidget(label);
}

void Window::message()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    label->setText(button->text() + " clicked");
}
