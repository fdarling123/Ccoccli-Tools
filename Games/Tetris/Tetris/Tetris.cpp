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
  //禁止改变大小
  this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);

  //初始化游戏图标
  this->setWindowIcon(QIcon(":/pic/res/pictures/ICON.png"));

  //初始化游戏背景
  QPixmap bG = QPixmap(":/pic/res/pictures/BG.jpg").scaled(640, 832);
  ui.BG_Label->setGeometry(0, 0, bG.size().width(), bG.size().height());
  ui.BG_Label->setPixmap(bG);
}
