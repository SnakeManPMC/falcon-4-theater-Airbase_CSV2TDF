#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>

namespace Ui
{
    class WidgetClass;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
	void Create();

private:
    Ui::WidgetClass *ui;
};

#endif // WIDGET_H
