#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	setCentralWidget(ui->consoleWidget);
	connect(ui->consoleWidget, SIGNAL(commandFinished(int, bool)), this, SLOT(displayResults(int, bool)));
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::displayResults(int exitCode, bool crashed)
{
	if(crashed)
		statusBar()->showMessage("Crashed");
	else
		statusBar()->showMessage(QString::number(exitCode));
}
