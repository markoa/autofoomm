
#include <iostream>
#include "main-window.hh"

MainWindow::MainWindow()
: button_("Click me")
{
  set_border_width(10);

  m_button.signal_clicked().connect(sigc::mem_fun(*this,
              &MainWindow::on_button_clicked));

  add(button_);

  show_all_children();
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_button_clicked()
{
  std::cout << "Ok, you really did click" << std::endl;
}
