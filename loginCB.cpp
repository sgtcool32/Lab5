#include "lab.h"
void loginCB(Fl_Widget*)
{
    std::string v = loginI->value();
    if (v == users[0].name)
    {
        std::string msg = "Hello ";
        msg+= v;
        int choice = fl_choice(msg.c_str(),"Send","Read",0);
        switch (choice)
        {
            case 0: std::cout << "Sending..." << std::endl; break;
            case 1: std::cout << "Reading..." << std::endl; break;
        }
        //fl_alert(v.c_str());
    }
    fl_alert(msg->buffer()->text());
    sw->show();
    ew.hide();
}
