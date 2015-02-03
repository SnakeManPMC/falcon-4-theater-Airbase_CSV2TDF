#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::WidgetClass)
{
    ui->setupUi(this);
	connect( ui->Create, SIGNAL( clicked() ), this, SLOT( Create() ) );
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Create()
{
	QString fileName = QFileDialog::getOpenFileName(this,
	tr("CSV"), "",
	tr("CSV files (*.csv);;All Files (*)"));
	QFile file(fileName);
	file.open(QIODevice::ReadOnly);
	QTextStream in(&file);

	// header
	QString line;
	line = in.readLine();
	line = in.readLine();

	while (!in.atEnd())
	{
		line = in.readLine();
		QStringList list;
		list = line.split(",");
		//ui->textEdit->append("1: " + list[0] + " 2: " + list[1] + " 3: " + list[2] + " 4: " + list[3] + " 5: " + list[4] + " 6: " + list[5]);
		ui->textEdit->append("AIRPORT 1 " + list[5] + "," + list[6] + " 1 " + list[0]);
	}
}

/*
	CSV file:

1.0 Objective Export Sat Aug 03 15:11:15 2002
Name, Type, Subtype, ID, Objective, X, Y, Z, STime, SFlag, BFlags, Owner, XID, LastRep, OFlags, Supply, Fuel, Losses, FCount, Priority, Parent, FOwner, LCount, Features, Links, Radar, More-Field27, Field-Field28, Header-Field29, Names-Field30, To-Field31, Keep-Field32, Access-Field33, And-Field34, Others-Field35, Happy-Field36, Field37, Field38, Field39, Field40, Field41, Field42, Field43, Field44, Field45, Field46, Field47, Field48, Field49, Field50, Field51, Field52, Field53, Field54, Field55, Field56, Field57, Field58, Field59, Field60, Field61, Field62, Field63, Field64, Field65, Field66, Field67, Field68, Field69, Field70, Field71, Field72, Field73, Field74, Field75, Field76, Field77, Field78, Field79, Field80, Field81, Field82, Field83, Field84, Field85, Field86, Field87, Field88, Field89, Field90, Field91, Field92, Field93, Field94, Field95, Field96, Field97, Field98, Field99, Field100,
PAGE MUNI, Airbase, 23_05 Airbase 2, 4, 1779, 827, 392, 0, 0, 0, 0, 2, 4, 0, 82944, 0, 0, 0, 27, 40, 0, 2, 0, 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0,
MARBLE CANYON, Airbase, 23_05 Airbase 2, 5, 1779, 810, 379, 0, 0, 0, 0, 2, 5, 0, 82944, 0, 0, 0, 27, 40, 0, 2, 0, 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0,
KAYENTA, Airbase, 23_05 Airbase 2, 6, 1779, 936, 368, 0, 0, 0, 0, 2, 6, 0, 82944, 0, 0, 0, 27, 40, 0, 2, 0, 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0,
BEDARD FIELD, Airbase, 23_05 Airbase 2, 7, 1779, 921, 342, 0, 0, 0, 0, 2, 7, 0, 82944, 0, 0, 0, 27, 40, 0, 2, 0, 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0,

	TDF file:

AIRPORT 1 827,392 4 PAGE MUNI
AIRPORT 1 810,379 1 MARBLE CANYON
AIRPORT 1 936,368 1 KAYENTA
AIRPORT 1 921,342 1 BEDARD FIELD
AIRPORT 1 850,304 3 TUBA CITY

*/
