#ifndef STARTPRESSED_H
#define STARTPRESSED_H

#include <QDialog>

namespace Ui {
class startPressed;
}

class startPressed : public QDialog
{
    Q_OBJECT

public:
    explicit startPressed(QWidget *parent = nullptr);
    ~startPressed();


private slots:

private:
    Ui::startPressed *ui;
};

#endif // STARTPRESSED_H
