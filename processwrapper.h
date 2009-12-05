#ifndef PROCESSWRAPPER_H
#define PROCESSWRAPPER_H

#include <QProcess>

class ProcessWrapper : public QObject
{
	Q_OBJECT

private:
	QProcess process;
	QString shell;

private slots:
	void readOutput();
	void finalizeExecution(int exitCode, QProcess::ExitStatus exitStatus);

public:
	ProcessWrapper();
	void execute(QString &command);

signals:
	void outputRead(QString &output);
	void finished(int exitcode, bool crashed);
};

#endif // PROCESSWRAPPER_H
