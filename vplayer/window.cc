#include <QtDebug>

#include <Phonon>
using namespace Phonon;

#include "window.h"

Window::Window(QStringList list, QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle("Qt Media Player");
   
    current = 0;
    playlist = list;

    player = new VideoPlayer(VideoCategory, this);
    setCentralWidget(player);
    connect(player, SIGNAL(finished()), this, SLOT(nextMedia()));
    nextMedia();
}

void Window::nextMedia()
{
    if (++current < playlist.size()) {
	qDebug() << playlist.at(current);
	MediaSource source(playlist.at(current));
	player->play(source);
    } else {
	player->deleteLater();
    }
}
