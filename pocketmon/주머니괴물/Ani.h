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
#define BLACK 0 // ������
#define BLUE 1// �Ķ���
#define GREEN 2 // �ʷϻ�
#define SKY_BLUE 3 // ����
#define RED 4 // ������
#define MAGENTA 5 // ���ֻ�
#define YELLOW 6 // �����
#define WHITE 7 // ���
#define GRAY 8 // ȸ��
#define LIGHT_BRUE 9 // ���� �Ķ���
#define LIGHT_GREAN 0xa// ���� �ʷϻ�
#define LIGHT_SKY_BRUE 0xB // ���� ����
#define LIGHT_RED 0xC // ���� ������
#define LIGHT_MAGENTA 0xD // ���� ���ֻ�
#define LIGHT_YELLOW 0xE // ���� �����
#define LIGHT_WHITE 0xF // ���� ���


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