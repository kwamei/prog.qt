#include <iostream>
#include "clickhandler.h"

ClickHandler::ClickHandler(QObject *parent) : QObject(parent)
{}

void ClickHandler::message()
{
    std::cout << "Button clicked!" << std::endl;
}
