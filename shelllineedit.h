#ifndef SHELLLINEEDIT_H
#define SHELLLINEEDIT_H

#include <QtGui/QLineEdit>

class ShellLineEdit: public QLineEdit
{
	Q_OBJECT

private slots:
	void sendCommand();

public:
	ShellLineEdit(QWidget *parent = 0);

public slots:
	void prepareForNextCommand();

signals:
	void commandRequested(QString &command);
};

#endif // SHELLLINEEDIT_H
