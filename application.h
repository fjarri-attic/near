#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

#include "mainwindow.h"

class Application : public QApplication
{
	Q_OBJECT

private:
	MainWindow *w;

public:
	Application(int &argc, char *argv[]);
	~Application();
};

#endif // APPLICATION_H
