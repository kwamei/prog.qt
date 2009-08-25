#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QLabel;

class Window : public QWidget
{
    Q_OBJECT

    public:
	Window(int count=5, QWidget *parent=0);

    private:
	QLabel *label;

    public slots:
	void message();
};

#endif // WINDOW_H
