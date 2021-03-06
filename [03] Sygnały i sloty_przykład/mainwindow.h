#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSignalMapper>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_dial_valueChanged(int value);
    void universal_slot();

private:
    Ui::MainWindow *ui;
    QSignalMapper sm;
};

#endif // MAINWINDOW_H
