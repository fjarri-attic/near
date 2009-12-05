#include "consolewidget.h"
#include "ui_consolewidget.h"

ConsoleOutputView::ConsoleOutputView(QWidget *parent): QPlainTextEdit(parent)
{
	setReadOnly(true);
}

ConsoleWidget::ConsoleWidget(QWidget *parent): QWidget(parent), ui(new Ui::ConsoleWidget)
{
	ui->setupUi(this);
	executor = new ProcessWrapper();
	connect(ui->commandEdit, SIGNAL(commandRequested(QString&)), SLOT(startProcess(QString&)));
	connect(executor, SIGNAL(outputRead(QString&)), SLOT(appendOutput(QString&)));
	connect(executor, SIGNAL(finished(int, bool)), SLOT(processFinished(int, bool)));
	executing = false;
}

ConsoleWidget::~ConsoleWidget()
{
	delete ui;
}

void ConsoleWidget::startProcess(QString &command)
{
	executing = true;
	executor->execute(command);
}

void ConsoleWidget::appendOutput(QString &output)
{
	ui->commandOutput->appendPlainText(output);
}

void ConsoleWidget::processFinished(int exitCode, bool crashed)
{
	ui->commandEdit->prepareForNextCommand();
	emit commandFinished(exitCode, crashed);
	executing = false;
}
