#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QStatusBar>
#include <QMessageBox>
#include <QLabel>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void CRCCalc(std::vector<unsigned char>, int);
    void readValuesFromLineEdit();

private:
    QLineEdit *inputLineEdit, *outputLineEdit;
    QPushButton *confirmPushButton;
    QHBoxLayout *overallLayout;
    QWidget *centralWidget;
};
#endif // MAINWINDOW_H
