#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Text_Editor.H>
#include <Fl/fl_ask.H>
const int WIDTH = 400;
const int HEIGHT = 400;
struct Message
{
    std::string from;
    std::string subject;
    std::string msg;
};

const int MAXUSERS = 10;

struct Subs
{
    std::string name;
    std::list <Message> mailbox;
};

extern Fl_Double_Window ew;
void loginCB(Fl_Widget*);
extern Fl_Input *loginI;
extern Subs users[MAXUSERS];
extern Fl_Text_Editor *msg;
extern Fl_Double_Window *sw;
