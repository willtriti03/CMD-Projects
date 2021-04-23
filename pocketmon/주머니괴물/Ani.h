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
#include"Ai.h"
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13
#define BLACK 0 // 검정색
#define BLUE 1// 파랑색
#define GREEN 2 // 초록색
#define SKY_BLUE 3 // 옥색
#define RED 4 // 빨간색
#define MAGENTA 5 // 자주색
#define YELLOW 6 // 노랑색
#define WHITE 7 // 흰색
#define GRAY 8 // 회색
#define LIGHT_BRUE 9 // 연한 파랑색
#define LIGHT_GREAN 0xa// 연한 초록색
#define LIGHT_SKY_BRUE 0xB // 연한 옥색
#define LIGHT_RED 0xC // 연한 빨간색
#define LIGHT_MAGENTA 0xD // 연한 자주색
#define LIGHT_YELLOW 0xE // 연한 노랑색
#define LIGHT_WHITE 0xF // 밝은 흰색


void newani(void);
void stani(int dt);
void movingani(int sp);
void My(void);
void Poket(void);
void Bag(void);
void Map(void);
void Save(void);
void Badge(void);
void Bagup(void);
void Bagdown(void);
void Mapeffect(int x, int y);
void B1(void);
void B2(void);
void B3(void);
void MonsterCome(void);
void Battle(void);
void Tec(void);
void BattleSet(void);