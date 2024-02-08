
//Nadire Nur Sağlam / 21100011042

#ifndef RESIM_H
#define RESIM_H


#include <QPushButton>
#include <QWidget>
#include <QMessageBox>
#include <QPixmap>
#include <QWidget>

class resim : public QPushButton
{
    Q_OBJECT
public:

    resim(QWidget *parent = 0);
    bool tiklamaKontrol;
public slots:
    void tikla();
};

#endif // RESIM_H
