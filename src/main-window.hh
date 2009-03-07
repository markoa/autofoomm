
#ifndef __AUTOFOOMM_MAIN_WINDOW__
#define __AUTOFOOMM_MAIN_WINDOW__

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class MainWindow : public Gtk::Window
{
public:
    MainWindow();
    virtual ~MainWindow();

protected:
    virtual void on_button_clicked();

    Gtk::Button button_;
};

#endif // __AUTOFOOMM_MAIN_WINDOW__
