#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>
#include <QStringList>
#include <QMoveEvent>
class myPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit myPushButton(QWidget *parent = 0);
    explicit myPushButton(QStringList iconStr,QWidget *parent=0);
    explicit myPushButton(QStringList iconStr,QString txtStr,QWidget *parent=0);

    QStringList iconStatus;
    void setIconLst(QStringList);
signals:
    
public slots:

private:
    void setBkPalette(int transparency);//����͸����
protected:
    void enterEvent(QEvent *);//�������¼�
    void leaveEvent(QEvent *);//�뿪
    void mousePressEvent(QMouseEvent *e);//���
    void mouseReleaseEvent(QMouseEvent *e);//�ͷ�
    void mouseMoveEvent(QMouseEvent *e);
};

#endif // MYPUSHBUTTON_H
