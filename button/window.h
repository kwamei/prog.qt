#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;

class Window : public QWidget 
{
    Q_OBJECT

    public:
	Window(QWidget *parent=0);

    private:
	QPushButton *button;

    public slots:
	void message();
};

#endif // WINDOW_H
