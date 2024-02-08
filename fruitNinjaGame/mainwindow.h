//Nadire Nur Sağlam / 21100011042


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMessageBox>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QStringList>
#include <QList>
#include <QRandomGenerator>
#include "resim.h"
#include <QTimer>
#include <QVector> //liste de append kullanmak için
#include <QPixmap>
#include <QWidget>
#include <QList>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void karpuzKoy();
    void kay();
    void zamanlayici();
    void kes();
    void dosyaYaz();
    void bilgilendirme();

private:
    Ui::MainWindow *ui;
    int randomKoordinat;
    QStringList koordinatBol;

    int randomx,randomy;

    QList<resim*> yerlesenKarpuzList;
    QList<resim*> kesilenKarpuzList;

    int kesilenSay,kacirilanSay;
    QTimer *timer;
    QTimer *kaymaZaman;
    QTimer *kesmeZaman;
    QTimer *zamanlayiciZaman;



};
#endif // MAINWINDOW_H
