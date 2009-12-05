#include "shelllineedit.h"

ShellLineEdit::ShellLineEdit(QWidget *parent): QLineEdit(parent)
{
	connect(this, SIGNAL(returnPressed()), SLOT(sendCommand()));
}

void ShellLineEdit::prepareForNextCommand()
{
	setEnabled(true);
}

void ShellLineEdit::sendCommand()
{
	QString temp = text();
	setEnabled(false);
	emit commandRequested(temp);
}
