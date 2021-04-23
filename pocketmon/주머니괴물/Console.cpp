#include"Console.h"
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

// 가시상태설정
void set_cursor_visible(CursorVisible bVisible){
CONSOLE_CURSOR_INFO info = { bVisible, NULL };
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}
// 커서위치설정
void gotoxy(int x, int y){
	COORD Pos = { x * 2, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}
void Color(int backcolor,int fontcolor){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),backcolor*16+fontcolor);

}

