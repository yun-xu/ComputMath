#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QLineEdit>
#include <QLabel>
#include <QString>
#include <QDebug>
#include <iostream>
#include <vector>



using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    vector<double> cal_gauss_order(vector<vector<double>> a);
    vector<double> cal_gauss_cols(vector<vector<double>> a);
    QString display_label(vector<double> result);
//    void

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();


private:
    Ui::MainWindow *ui;

    QLabel *Label_x[6];
    QLineEdit *LineEdit_2[4];
    QLineEdit *LineEdit_3[9];
    QLineEdit *LineEdit_4[16];
    QLineEdit *LineEdit_5[25];
    QLineEdit *LineEdit_y[5];
    QButtonGroup getRadio;
    int num;

    vector<vector<double>> input;
    vector<double> result;
    QString output;

    double EPS = 0.0000001;

};

#endif // MAINWINDOW_H
