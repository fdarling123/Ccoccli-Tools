#pragma once

#include <QIcon>
#include <QKeyEvent>
#include <QPixmap>
#include <QtWidgets/QMainWindow>
#include "ui_Tetris.h"

class Tetris : public QMainWindow
{
    Q_OBJECT

public:
    Tetris(QWidget *parent = nullptr);
    ~Tetris();

private:
    Ui::TetrisClass ui;

private:
  //初始化窗口
  void InitWindow();

  //开始游戏
  void keyPressEvent(QKeyEvent* event);
};
