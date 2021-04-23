#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include"Ani.h"
#include"Console.h"
#include"Int.h"
#include"Map.h"
#include "Inter.h"


//대화창 0, 30



int main(){
	
	
	int nr = 1;
	set_cursor_visible(HIDE);
	layer();
	stani(100);
	stsel();

	if (move == 1){
		while (nr){
			gotoxy(0, 0);
			layer();
			gotoxy(0, 21);
			printf("니 이름이 뭐니?\n");
			roof = 1;
			while (roof){
				newani();
			}
			space(0, 0);
			layer();
			gotoxy(0, 21);
			printf(". "); Sleep(500); printf(". "); Sleep(500); printf(". "); Sleep(500); printf(". "); Sleep(500); printf(". "); Sleep(500);
			printf("\n 니이름은 %s 맞니?", name);
			yesno();
			if (move == 1) nr = 0;
			else  nr = 1;
		}
		layer();
		movingani(50);
		Map1();
		system("cls");
		layer();
		Map2();

	}



	_getch();
}
