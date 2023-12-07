#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_p1input_returnPressed();

    void on_p2input_returnPressed();

    void on_startButt_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
