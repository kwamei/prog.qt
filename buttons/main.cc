#include <iostream>
#include <string>
using namespace std;

#include <QApplication>
#include "window.h"

int main(int argc, char **argv)
{
    int optind = 1;
    int bcount = 5;

    while (optind < argc) {
	string arg = argv[optind];

	if (arg == "-c") {
	    ++optind;
	    bcount = atoi(argv[optind]);
	} else {
	    cerr << "Unknown option: " << argv[optind] << endl;
	    exit(1);
	}

	++optind;
    }

    QApplication app(argc, argv);
    Window win(bcount);
    win.show();

    return app.exec();
}
