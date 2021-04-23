#include "Inter.h"
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13

void layer(void){
	for (int i = 0; i < 20; i++){
		gotoxy(29, i);
		printf("¦¢\n");
	}
	gotoxy(0, 20);
	printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	gotoxy(0, 0);
}
void Keyin(void){
	char tmp;
	for (int jkk = 0; jkk < 100; jkk++){
		if (_kbhit()){
			gotoxy(i, 22);
			tmp = getche();
			if (tmp == 13){
				roof = 0; i = 0;
			}
			else {
				name[i] = tmp;
				i++;
			}


		}
		Sleep(1);
	}
}
void space(int xc, int yc){
	system("cls");

}
void stsel(void){
	gotoxy(0, 11);
	printf("                    »õ  °ÔÀÓ                    \n");
	printf("                    ºÒ·¯¿À±â                    \n");
	gotoxy(0, 11);
	printf("¢º");
	int rr = 1;
	char inp;
	while (rr){
		inp = _getch();
		switch (inp){
		case 80:
			if (move == 1){
				gotoxy(0, 11);
				printf("  ");
				gotoxy(0, 12);
				printf("¢º");
				move = 2;
			}
			break;
		case 72:
			if (move == 2){
				gotoxy(0, 12);
				printf("  ");
				gotoxy(0, 11);
				printf("¢º");
				move = 1;
			}
			break;
		case 13:
			space(0, 0);
			rr = 0;
			break;
		}



	}

}
void yesno(void){
	gotoxy(30, 20);
	printf("------------\n");
	gotoxy(30, 21);
	printf("| ¢º  ¤·¤·  |\n");
	gotoxy(30, 22);
	printf("|     ¤¤¤¤  |\n");
	gotoxy(30, 23);
	printf("------------\n");
	int rr = 1;
	char inp;
	move = 1;
	while (rr){

		inp = _getch();
		switch (inp){
		case 80:
			if (move == 1){
				gotoxy(31, 21);
				printf("  ");
				gotoxy(31, 22);
				printf("¢º");
				move = 2;
			}
			break;
		case 72:
			if (move == 2){
				gotoxy(31, 22);
				printf("  ");
				gotoxy(31, 21);
				printf("¢º");
				move = 1;
			}
			break;
		case 13:
			space(0, 0);
			rr = 0;
			break;
		}
	}

}
void Interspacing(void){
	gotoxy(31, 0);
	printf("                     ");
	gotoxy(31, 2);
	printf("                     ");
	gotoxy(31, 4);
	printf("                     ");
	gotoxy(31, 6);
	printf("                     ");
	gotoxy(31, 8);
	printf("                     ");
	gotoxy(31, 10);
	printf("                     ");
	gotoxy(31, 12);
	printf("                     ");
}
void Interspace(void){
	intermove = 1;
	gotoxy(31, 0);
	printf("¢º ³» Á¤º¸");
	gotoxy(31, 2);
	printf("   ÁÖ¸Ó´Ï±«¹°");
	gotoxy(31, 4);
	printf("   °¡¹æ");
	gotoxy(31, 6);
	printf("   Áöµµ");
	gotoxy(31, 8);
	printf("   ÀúÀå");
	gotoxy(31, 10);
	printf("   ¹èÁö");
	gotoxy(31, 12);
	printf("   ³ª°¡±â");
	char a;
	int updown = 0;
	int interr = 1;
	while (interr){
		a = _getch();
		gotoxy(31, updown);
		printf("  ");
		switch (a){
		case UP:
			if (updown - 2 != -2){
				updown -= 2;
				intermove--;

			}
			break;
		case DOWN:
			if (14 != updown + 2){
				updown += 2;
				intermove++;
			}
			break;
		case ENTER:
			interr = 0;
			break;

		}
		gotoxy(31, updown);
		printf("¢º");
	}
}
void Intersel(void){
	if (intermove == 1){
		My();
	}
	else if (intermove == 2){
		Poket();
	}
	else if (intermove == 3){
		Bag();
	}
	else if (intermove == 4){
		Map();
	}
	else if (intermove == 5){
		Save();
	}
	else if (intermove == 6){
		Badge();
	}
	else if (intermove == 7){
		brea = 0;
		Interspacing();
	}
}
void Items(Item* items){
	int jk = 3;
	strcpy((*(items + 0)).iname, "¸ó½ºÅÍº¼");
	fflush(stdin);
	(*(items + 0)).code = 1;
	(*(items + 0)).cost = 200;
	(*(items + 0)).count = 0;
	(*(items + 0)).effect = 0;
	strcpy((*(items + 1)).iname, "»óÃ³¾à");
	fflush(stdin);
	(*(items + 1)).code = 2;
	(*(items + 1)).cost = 400;
	(*(items + 1)).count = 0;
	(*(items + 1)).effect = 20;
	strcpy_s(items[2].iname, "»çÅÁ");
	fflush(stdin);
	(*(items + 2)).code = 3;
	(*(items + 2)).cost = 3000;
	(*(items + 2)).count = 0;
	(*(items + 2)).effect = 1;
	strcpy_s(items[jk].iname, "·ÎÇÁ");
	fflush(stdin);
	(*(items + jk)).code = 4;
	(*(items + jk)).cost = 500;
	(*(items + jk)).count = 0;
	(*(items + jk)).effect = 1;
	jk++;
	strcpy_s(items[jk].iname, "½ºÇÁ·¹ÀÌ");
	fflush(stdin);
	(*(items + jk)).code = 5;
	(*(items + jk)).cost = 1000;
	(*(items + jk)).count = 0;
	(*(items + jk)).effect = 200;
	jk++;
}
void Attackk(Attack *attack){

	int ij = 0;
	strcpy_s(attack[0].aname, "À¾Áö·Õ");
	attack[0].app = 0;
	attack[0].att = 0;
	attack[0].acode = 0;
	ij++;
	fflush(stdin);
	strcpy_s(attack[ij].aname, "ÇÒÄû±â");
	attack[ij].app = 30;
	attack[ij].att = 5;
	attack[ij].acode = ij;
	ij++;
	fflush(stdin);
	strcpy_s(attack[ij].aname, "ÂÉ±â");
	attack[ij].app = 30;
	attack[ij].att = 5;
	attack[ij].acode = ij;
	ij++;
	fflush(stdin);
	strcpy_s(attack[ij].aname, "²¿¸®Ä¡±â");
	attack[ij].app = 30;
	attack[ij].att = 5;
	attack[ij].acode = ij;
	ij++;
	strcpy_s(attack[ij].aname, "³¯°³Ä¡±â");
	attack[ij].app = 30;
	attack[ij].att = 5;
	attack[ij].acode = ij;
	ij++;
	fflush(stdin);
	strcpy_s(attack[ij].aname, "ºÒ²É¼¼·Ê");
	attack[ij].app = 25;
	attack[ij].att = 10;
	attack[ij].acode = ij;
	ij++;
	fflush(stdin);
	strcpy_s(attack[ij].aname, "¹°´ëÆ÷");
	attack[ij].app = 25;
	attack[ij].att = 10;
	attack[ij].acode = ij;
	ij++;
	fflush(stdin);
	strcpy_s(attack[ij].aname, "ÀÙ³¯");
	attack[ij].app = 25;
	attack[ij].att = 10;
	attack[ij].acode = ij;
	ij++;
	fflush(stdin);
	strcpy_s(attack[ij].aname, "°­Ã¶³¯°³");
	attack[ij].app = 25;
	attack[ij].att = 10;
	attack[ij].acode = ij;
	ij++;

}
void Poketmons(POket *pokm){


	int ij = 1;
	srand((unsigned)time(NULL));
	int rlv;
	strcpy_s((*(pokm + 0)).pname, "ºñ¾úÁ®");
	fflush(stdin);
	strcpy_s((*(pokm + 1)).pname, "Ç¡ÀÌ¸¯");
	fflush(stdin);
	(*(pokm + ij)).lv = 5;
	(*(pokm + ij)).hp = pokm[ij].lv * 6;
	(*(pokm + ij)).tec[0] = 1;
	(*(pokm + ij)).tec[1] = 0;
	(*(pokm + ij)).tec[2] = 0;
	(*(pokm + ij)).tec[3] = 0;
	(*(pokm + ij)).pcode = ij + 1;
	ij++;
	strcpy_s((*(pokm + ij)).pname, "ÀÌ½ÖÇØ¾Å");
	fflush(stdin);
	(*(pokm + ij)).lv = 5;
	(*(pokm + ij)).hp = pokm[ij].lv * 6;
	(*(pokm + ij)).tec[0] = 2;
	(*(pokm + ij)).tec[1] = 0;
	(*(pokm + ij)).tec[2] = 0;
	(*(pokm + ij)).tec[3] = 0;
	(*(pokm + ij)).pcode = ij + 1;
	ij++;
	strcpy_s((*(pokm + ij)).pname, "²¿»Ò³¢");
	fflush(stdin);
	(*(pokm + ij)).lv = 5;
	(*(pokm + ij)).hp = pokm[ij].lv * 6;
	(*(pokm + ij)).tec[0] = 3;
	(*(pokm + ij)).tec[1] = 0;
	(*(pokm + ij)).tec[2] = 0;
	(*(pokm + ij)).tec[3] = 0;
	(*(pokm + ij)).pcode = ij + 1;
	ij++;
	strcpy_s((*(pokm + ij)).pname, "ÇÈ§g");
	fflush(stdin);
	rlv = rand() % ((5 - 1) + 1) + 1;
	(*(pokm + ij)).lv = rlv;
	(*(pokm + ij)).hp = pokm[ij].lv * 6;
	(*(pokm + ij)).tec[0] = 4;
	(*(pokm + ij)).tec[1] = 0;
	(*(pokm + ij)).tec[2] = 0;
	(*(pokm + ij)).tec[3] = 0;
	(*(pokm + ij)).pcode = ij + 1;
	ij++;
	strcpy_s((*(pokm + ij)).pname, "Æ÷¿¡³Å");
	fflush(stdin);
	rlv = rand() % ((5 - 1) + 1) + 1;
	(*(pokm + ij)).lv = rlv;
	(*(pokm + ij)).hp = pokm[ij].lv * 6;
	(*(pokm + ij)).tec[0] = 1;
	(*(pokm + ij)).tec[1] = 0;
	(*(pokm + ij)).tec[2] = 0;
	(*(pokm + ij)).tec[3] = 0;
	(*(pokm + ij)).pcode = ij + 1;
	ij++;




}
void Reset(void){
	for (int iii = 0; iii < 6; iii++){
		myppok[iii] = 0;
	}
}
void GetPa(void){
	gotoxy(x, y);
	printf("¡Ù");
	gotoxy(0, 21);
	printf("Ç¡ÀÌ¸¯ °¡Áö°íÇÄ?");
	yesno();
	if (move == 1){
		myppok[pc] = 1;
		pc++;
	}
	if (move == 2){
		gotoxy(0, 21);
		printf("                                       ");

	}
	brea = 0;
}
void GetYee(void){
	gotoxy(x, y);
	printf("¡Ù");
	gotoxy(0, 21);
	printf("ÀÌ½ÖÇØ¾Å °¡Áö°íÇÄ?");
	yesno();
	if (move == 1){
		myppok[pc] = 2;
		pc++;
	}
	if (move == 2){
		gotoxy(0, 21);
		printf("                                       ");

	}
	brea = 0;

}
void GetGo(void){
	gotoxy(x, y);
	printf("¡Ù");
	gotoxy(0, 21);
	printf("²¿»Ò³¢ °¡Áö°íÇÄ?");
	yesno();
	if (move == 1){
		myppok[pc] = 3;
		pc++;
	}
	if (move == 2){
		gotoxy(0, 21);
		printf("                                       ");

	}
	brea = 0;
}
void Battle_Inter(void){

	gotoxy(0, 21);
	printf("¢º °ø°Ý                ÁÖ¸Ó´Ï±«¹°\n");
	printf("   °¡¹æ                ¤¼¤¼");
	int keyin = 1;
	char iin;
	int kkey = 1;
	while (kkey){
		keyin = 1;
		batmove = 2;
		while (keyin){
			iin = _getch();
			switch (iin){
			case UP:
				if (batmove != 4){
					batmove++;
				}
				break;
			case DOWN:
				if (batmove != 1){
					batmove--;
				}
				break;
			case LEFT:
				if (batmove != 1 && batmove != 2){
					batmove -= 2;
				}
				break;
			case RIGHT:
				if (batmove != 3 && batmove != 4){
					batmove += 2;
				}
				break;
			case ENTER:
				keyin = 0;
				break;

			}

			gotoxy(0, 21);
			printf("  ");
			gotoxy(0, 22);
			printf("  ");
			gotoxy(10, 21);
			printf("  ");
			gotoxy(10, 22);
			printf("  ");
			if (batmove == 2){
				gotoxy(0, 21);
				printf("¢º");
			}
			if (batmove == 1){
				gotoxy(0, 22);
				printf("¢º");
			}
			if (batmove == 4){
				gotoxy(10, 21);
				printf("¢º");
			}
			if (batmove == 3){
				gotoxy(10, 22);
				printf("¢º");
			}
		}

		if (batmove == 2){
			Tec();
			kkey = 0;
			brea = 0;
			system("cls");
			layer();
			brea = 0;
			Battle();
		}
		if (batmove == 1){
			Bag();
			kkey = 0;
			system("cls");
			layer();
			brea = 0;
			Battle();
		}
		if (batmove == 3){
			srand((unsigned)time(NULL));
			int run;
			run = rand() % ((10 + 1) + 1) + 1;
			if (run != 4){
				gotoxy(0, 21);
				printf("µµ¸ÁÄ§ ¤¡¤·¤§!");
				Sleep(500);
				kkey = 0;
				brea = 0;
			
			}
			else{
				keyin = 1;
				system("cls");
				layer();
				brea = 0;
				Battle();
			}
		}
		if (batmove == 4){
			Poket();
			kkey = 0;
			brea = 0;
			system("cls");
			layer();
			brea = 0;
			Battle();
		}
	}
}
void TalkbarSpace(void){
	gotoxy(0, 21);
	printf("                                                   \n                                                             ");
}
void End(void){
	if (mhp <= 0 && hhp > 0){
		tecr = 0;
		brea = 0;
	}
	if (mhp > 0 && hhp <= 0){
		tecr = 0;
		brea = 0;
		system("cls");
		printf("³¡");
	}
}
