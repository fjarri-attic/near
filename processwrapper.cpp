#include <processwrapper.h>

ProcessWrapper::ProcessWrapper()
{
	shell = "bash";
	connect(&this->process, SIGNAL(readyReadStandardOutput()), SLOT(readOutput()));
	connect(&this->process, SIGNAL(finished(int, QProcess::ExitStatus)),
		SLOT(finalizeExecution(int, QProcess::ExitStatus)));
	process.setProcessChannelMode(QProcess::MergedChannels);
}

void ProcessWrapper::execute(QString &command)
{
	QStringList arguments;
	arguments << "-c" << command;

	process.start(shell, arguments);
}

void ProcessWrapper::readOutput()
{
	QString temp(process.readAllStandardOutput());
	emit outputRead(temp);
}

void ProcessWrapper::finalizeExecution(int exitCode, QProcess::ExitStatus exitStatus)
{
	emit finished(exitCode, exitStatus == QProcess::CrashExit);
}
