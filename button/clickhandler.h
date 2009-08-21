#ifndef CLICKHANDLER_H
#define CLICKHANDLER_H	

#include <QObject>

class ClickHandler : public QObject
{
    Q_OBJECT

    public:
	ClickHandler(QObject *parent=0);

    public slots:
	void message();
};
#endif // CLICKHANDLER_H
