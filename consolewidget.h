#ifndef CONSOLEWIDGET_H
#define CONSOLEWIDGET_H

#include <QtGui/QWidget>
#include <QtGui/QPlainTextEdit>
#include <processwrapper.h>

namespace Ui
{
	class ConsoleWidget;
}

class ConsoleOutputView: public QPlainTextEdit
{
	Q_OBJECT

public:
	ConsoleOutputView(QWidget *parent = 0);
};

class ConsoleWidget: public QWidget
{
	Q_OBJECT

private:
	Ui::ConsoleWidget *ui;
	ProcessWrapper *executor;
	bool executing;

private slots:
	void startProcess(QString &command);
	void appendOutput(QString &output);
	void processFinished(int exitCode, bool crashed);

public:
	ConsoleWidget(QWidget *parent = 0);
	~ConsoleWidget();

signals:
	void commandFinished(int exitCode, bool crashed);
};

#endif // CONSOLEWIDGET_H
