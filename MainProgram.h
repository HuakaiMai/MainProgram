#pragma once

#include <QtWidgets/QWidget>
#include "ui_MainProgram.h"

class MainProgram : public QWidget
{
	Q_OBJECT

public:
	MainProgram(QWidget *parent = Q_NULLPTR);

private:
	Ui::MainProgramClass ui;
};
