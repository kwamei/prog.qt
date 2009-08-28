#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <Phonon>
#include <QWidget>

class Window : public QMainWindow
{
    Q_OBJECT

    private:
	Phonon::VideoPlayer *player;	
	QStringList playlist;
	int current;

    public:
	Window(QStringList playlist, QWidget *parent=0);

    public slots:
	void nextMedia();
};

#endif // WINDOW_H
