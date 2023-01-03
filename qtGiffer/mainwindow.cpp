#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "sunset.h"
#include <QDebug>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SunSet test(30,40,5); //long lat date

   qDebug() << test.calcSunset();
   //Qt::UTC
 //  setTimeSpec(Qt::OffsetFromUTC);
  //  QDateTime(date, time, Qt::UTC).toLocalTime();
//offsetFromUtc(test.calcSunset());

}

#include <Windows.h>
int setwallpaper (QString filePath ) {
  bool ret = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)filePath.utf16(), SPIF_SENDWININICHANGE | SPIF_UPDATEINIFILE);
  return ret;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    setwallpaper("C:/Users/one_e/Desktop/mojave_dynamic/mojave_dynamic_2.jpeg"); // adjust
}

