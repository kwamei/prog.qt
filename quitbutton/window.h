#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;

class Window : public QWidget
{
    public:
	Window(QWidget *parent=0);

    private:
	QPushButton *quit;
};

#endif // WINDOW_H
