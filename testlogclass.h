<<<<<<< HEAD
#ifndef TESTLOGCLASS_H
#define TESTLOGCLASS_H

#include <QtGui/QMainWindow>
#include "ui_testlogclass.h"

class testlogclass : public QMainWindow
{
	Q_OBJECT

public:
	testlogclass(QWidget *parent = 0, Qt::WFlags flags = 0);
	~testlogclass();

public slots:
	void StartOrStop();
private:
	Ui::testlogclassClass ui;
	bool m_run;
	int  m_nNo;
};

#endif // TESTLOGCLASS_H
=======
#ifndef TESTLOGCLASS_H
#define TESTLOGCLASS_H

#include <QtGui/QMainWindow>
#include "ui_testlogclass.h"

class testlogclass : public QMainWindow
{
	Q_OBJECT

public:
	testlogclass(QWidget *parent = 0, Qt::WFlags flags = 0);
	~testlogclass();

public slots:
	void StartOrStop();
private:
	Ui::testlogclassClass ui;
	bool m_run;
	int  m_nNo;
};

#endif // TESTLOGCLASS_H
>>>>>>> 5ef3cb03e52ada26243983be502cd5530165f195
