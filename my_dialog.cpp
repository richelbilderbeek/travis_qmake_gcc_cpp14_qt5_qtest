#include "my_dialog.h"
#include "ui_my_dialog.h"
#include <cassert>

my_dialog::my_dialog(QWidget *parent) noexcept :
  QDialog(parent),
  ui(new Ui::my_dialog)
{
  assert(0 == 000'000); //Only compiles in C++14
  ui->setupUi(this);
  connect(
    ui->pushButton,
    &QPushButton::clicked,
    this,
    &my_dialog::close
  );
}

my_dialog::~my_dialog() noexcept
{
  delete ui;
}
