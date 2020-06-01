#ifndef GOTOXY_H_INCLUDED
#define GOTOXY_H_INCLUDED

#include <stdbool.h>
#include <windows.h>

void Color(short x);
void Gotoxy(short X, short Y);
void HideCursor(bool ver);
short WhereX();
short WhereY();

#endif // GOTOXY_H_INCLUDED
