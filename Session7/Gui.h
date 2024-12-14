#ifndef _GUI_H_
#define _GUI_H_
#include <ncurses.h>

class Gui {
    size_t row;
    size_t col;
    WINDOW* win;
public:
    Gui ():row(20),col(50) {init();}
    ~Gui() {endwin();}
    void init();
    int get();
    void paintat(size_t, size_t, char);
    void printMsg(int row, int col, char* prompt, int v);
    void clear();
    void end() {endwin();}
};
#endif