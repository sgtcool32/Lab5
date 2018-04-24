#include "lab.h"
Fl_Double_Window ew(WIDTH, HEIGHT);
Fl_Button *loginB;
Fl_Input *loginI;
Fl_Text_Editor *msg;
Fl_Text_Buffer *msgBuf;
Fl_Double_Window *sw;
Subs users[MAXUSERS];
int main()
{
    users[0].name = "Darrel";
    ew.label("Email");
    int x = 5*WIDTH/8;
    int y = 1*HEIGHT/8;
    int w = 1*WIDTH/4;
    int h = 1*HEIGHT/8;
    loginB = new Fl_Button(x,y,w,h,"Login");
    loginB->callback(loginCB);
    x = 1*WIDTH/4;
    h = 1*HEIGHT/16;
    loginI = new Fl_Input(x,y,w,h,"Name: ");
    x = 3*WIDTH/8;
    y = 1*HEIGHT/2;
    w = 1*WIDTH/2;
    h = 1*HEIGHT/2;
    msg = new Fl_Text_Editor(x,y,w,h);
    msgBuf = new Fl_Text_Buffer();
    msg->buffer(msgBuf);
    msgBuf->text("Hello.\nHow are you?\nSincerely, Bob");
    sw = new Fl_Double_Window(WIDTH,HEIGHT);
    sw->hide();
    ew.show();
    Fl::run();
}
