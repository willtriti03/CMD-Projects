#pragma once
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include"Ani.h"
#include"Console.h"
#include"Int.h"
#include"Map.h"
#include "Inter.h"
#include <time.h>
#include"Ai.h"
typedef struct POket
{
	char pname[12];
	int lv;
	int hp;
	int tec[4];
	int exp;
	int pcode;
}POket;
typedef struct Item
{
	char iname[10];
	int code;
	int count;
	int cost;
	int effect;

}Item;
typedef struct Attack
{
	char aname[10];
	int att;
	int app;
	int acode;
}Attack;
void layer(void);
void Keyin(void);
void space(int xc, int yc);
void stsel(void);
void yesno(void);
void Interspacing(void);
void Interspace(void);
void Intersel(void);
void Items(Item* items);
void Attackk(Attack *attack);
void Poketmons(POket *pokm);
void Reset(void);
void GetPa(void);
void GetYee(void);
void GetGo(void);
void Battle_Inter(void);
void TalkbarSpace(void);
void End(void);
void Ending(void);