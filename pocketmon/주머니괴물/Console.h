#pragma once
#include<windows.h>
#include"Ani.h"
#include"Int.h"
#include "Inter.h"
#include"Ai.h"
typedef enum { HIDE = TRUE, SHOW = FALSE }CursorVisible;

void set_cursor_visible(CursorVisible bVisible);
void gotoxy(int x, int y);
void Timer(int time);
void Color(int backcolor,int fontcolor);