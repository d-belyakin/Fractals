#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QDebug>
#include "fraccantor.h"
#include "serpinskitriangle.h"
#include "fracdragon.h"
#include "fracifs.h"
#include "frackoh.h"
#include "fraclevy.h"
#include "randserpinski.h"
#include "fracmandelbrot.h"

#define FCOUNT 8

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    typedef void (MainWindow::*fracFunc_p)(void);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static fracFunc_p fracFunctionsList[FCOUNT];

private:
    Ui::MainWindow *ui;
    QWidget *wgt;

    static qreal xmin;
    static qreal xmax;
    static qreal ymin;
    static qreal ymax;

private slots:
    void fracCantor();
    void fracSerpinskiTriangle();
    void fracDragon();
    void ffracIFS();
    void on_drawButton_clicked();
    void fracKoh();
    void fracLevy();
    void randSerpinski();
    void fracMandelbrot();
};

#endif // MAINWINDOW_H
