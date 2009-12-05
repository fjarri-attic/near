#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QLineEdit>

#include <processwrapper.h>

namespace Ui
{
	class MainWindow;
}

class MainWindow: public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	Ui::MainWindow *ui;
	ProcessWrapper *executor;

private slots:
	void displayResults(int exitCode, bool crashed);
};

#endif // MAINWINDOW_H
