#include "application.h"

Application::Application(int &argc, char *argv[]): QApplication(argc, argv)
{
	setApplicationName("Near");
	setOrganizationName("Manti");

	w = new MainWindow();
	w->show();
}

Application::~Application()
{
	delete w;
}
