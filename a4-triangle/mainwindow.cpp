#include <ui_mainwindow.h>
#include "mainwindow.h"
#include <string>
#include <cmath>
#include <iostream>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD
=======
ui->outPut->setWindowTitle("Triangle Serpinsky");
    H = QPixmap(680,510);
    H.fill(Qt::transparent);
    pen = QPen(getRandColor(),10);
    pen.setWidth(2);
    paint.begin(&H);
    paint.setPen(pen);
    paint.eraseRect(0,0,680,510);

>>>>>>> f11695e941634871664633494ee95e0b9997c2a4
}

MainWindow::~MainWindow()
{
<<<<<<< HEAD
}

double sideLength;
int order;
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
void triangleSerpinsky(int x1, int y1, int x2, int y2, int x3, int y3, int order, double sideLength);
=======
    paint.end();
}

//double sideLength;
//int order;
//void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
//void triangleSerpinsky(int x1, int y1, int x2, int y2, int x3, int y3, int order, double sideLength);
>>>>>>> f11695e941634871664633494ee95e0b9997c2a4
/*
 *        A fractal is a geometric figure with the property of self-similarity,that is
 * composed of several parts, each of which is similar to the entire shape entirely. In mathematics,
 * under a set of points is understood Fractals in Euclidean space with fractional
 * metric dimension or metric dimension is different from.
 *        The most famous example of a fractal geometry area is the Sierpinski triangle,
 * by partitioning the triangle, not necessarily equilateral-medium lines at four such trianguli,
 * except Central and recursive splitting angle triangles to obtain the area.
*/

<<<<<<< HEAD
//QColor MainWindow::getRandColor()
//{
//    int r = rand()%255;
//    int g = rand()%255;
//    int b = rand()%255;
//    return QColor(r,g,b);
//}
void MainWindow::drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    QPixmap H(680,510);
     H.fill(Qt::transparent);
    QPainter paint;
    QPen pen(Qt::green);
    pen.setWidth(2);
    paint.begin(&H);
    paint.setPen(pen);
    paint.eraseRect(0,0,680,510);
=======
QColor MainWindow::getRandColor()
{
    int r = rand()%255;
    int g = rand()%255;
    int b = rand()%255;
    return QColor(r,g,b);
}
void MainWindow::drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{

>>>>>>> f11695e941634871664633494ee95e0b9997c2a4
    paint.drawLine(x1,y1,x2,y2);
    paint.drawLine(x2,y2,x3,y3);
    paint.drawLine(x3,y3,x1,y1);

<<<<<<< HEAD
    paint.end();
=======
>>>>>>> f11695e941634871664633494ee95e0b9997c2a4
    ui->outPut->setPixmap(H);
}

void MainWindow::triangleSerpinsky(
        int x1, int y1, int x2, int y2, int x3, int y3,
        int order, // depth (how many more times do we recurse)//
<<<<<<< HEAD
        double sideLength // contraction mapping constant)
        )
{
    /*
          B
          / \
         /__\
        / \  /\
       /_ \/_ \
      /\       / \
     /_\     /__\
    /\  /\  /\    /\
   /_\/_\/ _\ /_ \
 A                   C
*/
    //    QPainter paint;

    //    QPen pen(getRandColor());
    //    pen.setWidth(2);
    //    paint.eraseRect(0,0,680,510);
    //    paint.setPen(pen);
    int x11,y11,x22,y22,x33,y33;
    if(order == 0)
=======
        double sideLength // contraction mapping constant
        )
{
    /*
                    B x2,y2
                    / \
                   / _ \
                  / \  / \
     x11,y11 /_ \/_ \ x22,y22
                /\       / \
               /_\     /__\
              /\  /\  /\   /\
    x1,y1 /_\/_ \/_\ /_\x3,y3
 A                 C
                    x33,
                    y33
*/
    int x11,y11,x22,y22,x33,y33;

    if(order >= 0)
>>>>>>> f11695e941634871664633494ee95e0b9997c2a4
    {
        x11 = (x1 + x2) / 2;
        y11 = (y1 + y2) / 2;
        x22 = (x2 + x3) / 2;
        y22 = (y2 + y3) / 2;
        x33 = (x3 + x1) / 2;
        y33 = (y3 + y1) / 2;
        drawTriangle(x11, y11, x22, y22, x33, y33);
<<<<<<< HEAD
        triangleSerpinsky(x1, y1, x11, y11, x33, y33,order-1, sideLength);
        triangleSerpinsky(x2, y2, x11, y11, x22, y22, order-1, sideLength);
        triangleSerpinsky(x3, y3, x22, y22, x33, y33, order-1, sideLength);
    }
}

=======
        triangleSerpinsky(x1, y1, x11, y11, x33, y33, order-1, sideLength);
        triangleSerpinsky(x2, y2, x11, y11, x22, y22, order-1, sideLength);
        triangleSerpinsky(x3, y3, x22, y22, x33, y33, order-1, sideLength);
    }

}

//button for build triangle

>>>>>>> f11695e941634871664633494ee95e0b9997c2a4
void MainWindow::on_drawButton_clicked()
{
    int order;
    double sideLength;
<<<<<<< HEAD
    lineEdit = new QLineEdit;
    lineEdit_2 = new QLineEdit;
    QString str = ui->lineEdit->text();
    QString str1 = ui->lineEdit_2->text();

        sideLength = str.toInt();

        order = str1.toInt();
    drawTriangle(50,450,350,50,650,450);
    triangleSerpinsky(50,450,350,50,650,450, order - 1, sideLength);
    update();
=======

    QString str = ui->lineEdit->text();
    QString str1 = ui->lineEdit_2->text();


        sideLength = str.toDouble();

       order = str1.toInt();

    drawTriangle(50,450,350,50,650,450);
    triangleSerpinsky(50,450,350,50,650,450, order - 1, sideLength);

>>>>>>> f11695e941634871664633494ee95e0b9997c2a4
}