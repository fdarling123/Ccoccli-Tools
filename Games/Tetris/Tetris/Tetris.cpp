#include "Tetris.h"

Tetris::Tetris(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);

    InitWindow();
}

Tetris::~Tetris()
{

}

void Tetris::InitWindow()
{
  //��ֹ�ı��С
  this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);

  //��ʼ����Ϸͼ��
  this->setWindowIcon(QIcon(":/pic/res/pictures/ICON.png"));

  //��ʼ����Ϸ����
  QPixmap bG = QPixmap(":/pic/res/pictures/BG.jpg").scaled(640, 832);
  ui.BG_Label->setGeometry(0, 0, bG.size().width(), bG.size().height());
  ui.BG_Label->setPixmap(bG);
}
