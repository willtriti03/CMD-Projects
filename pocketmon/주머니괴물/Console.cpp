#include"Console.h"
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

// ���û��¼���
void set_cursor_visible(CursorVisible bVisible){
CONSOLE_CURSOR_INFO info = { bVisible, NULL };
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}
// Ŀ����ġ����
void gotoxy(int x, int y){
	COORD Pos = { x * 2, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}
void Color(int backcolor,int fontcolor){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),backcolor*16+fontcolor);

}

