#pragma once

#include <QIcon>
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
  //��ʼ������
  void InitWindow();
};
