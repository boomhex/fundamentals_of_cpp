#ifndef INDENT_H
#define INDENT_H

#include <iostream>

using namespace std;    // omit std::

ostream &indented_cout();
void indent_less();
void indent_more();
void reset_indentation();
void step_size(int setSize);

#endif