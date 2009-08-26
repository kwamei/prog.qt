#ifndef	WINDOW_H
#define WINDOW_H

#include <QWidget>

class QLineEdit;

class Window : public QWidget 
{
    Q_OBJECT

    public:
	Window(QWidget *parent=0);

    private:
	QLineEdit *lineEdit;

    public slots:
	void text();
};

#endif // WINDOW_H
