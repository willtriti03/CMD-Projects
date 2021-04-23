#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
int move = 1;
void gotoxy(int x, int y){
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}
void space(int sx, int sy){
	gotoxy(sx, sy);
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");
	printf("                                                            \n ");

	gotoxy(sx, sy);
}
void select(int stl){

	int rp = 1;
	char iinput;
	move = 1;
	///////////////////////////////////////////////////////////////
	while (rp){
		iinput = _getch();
		/////////////////////////////////////////////////////////
		if (move == 1){
			if (iinput == 80){
				gotoxy(0, stl);
				printf("1 ");
				gotoxy(0, stl + 1);
				move = 2;
				printf("¢º");
			}
		}
		///////////////////////////////////////////////////////////
		else if (move == 2){
			if (iinput == 72){
				gotoxy(0, stl + 1);
				printf("2 ");
				gotoxy(0, stl);
				move = 1;
				printf("¢º");
			}
			else if (iinput == 80){
				gotoxy(0, stl + 1);
				printf("2 ");
				gotoxy(0, stl + 2);
				move = 3;
				printf("¢º");
			}

		}
		/////////////////////////////////////////////////////////////
		else if (move == 3){
			if (iinput == 72){
				gotoxy(0, stl + 2);
				printf("3 ");
				gotoxy(0, stl + 1);
				move = 2;
				printf("¢º");
			}
		}
		/////////////////////////////////////////////////////////
		if (move == 1 || move == 2 || move == 3){
			if (iinput == 13){
				rp = 0;
			}
		}
	}
}

void main(){
	struct Callnum{
		char name[10];
		char calln[20];
		char address[20];

	};
	struct Callnum member[30];
	int all = 1;
	int cn = 0;
	while (all){
		space(0, 0);
		/////////////////////////////////////////////////////
		move = 1;
		printf("What do you want to do?\n");
		printf("1  Add\n");
		printf("2  Load\n");
		printf("3  Del\n");
		gotoxy(0, 1);
		printf("¢º");
		select(1);
		/////////////////////////////////space//////////////////////////////////////
		space(0, 0);
		/////////////////////////////////////////////////////////
		
		char named[10];
		char add[20];
		char callnn[20];
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (move == 1){
			move = 1;
			int addr = 1;
			while (addr){
				fflush(stdin);
				printf("%d recode\n", cn);
				printf("Name:  ");
				gets_s(named);
				strcpy_s(member[cn].name, named);
				fflush(stdin);
				printf("Call Number:  ");
				gets_s(callnn);
				strcpy_s(member[cn].calln, callnn);
				fflush(stdin);
				printf("Address:  ");
				gets_s(add);
				strcpy_s(member[cn].address, add);
				fflush(stdin);
				printf("\n\n");
				//////////////////////////////////
				printf("Do you want to save?\n");
				printf("¢º Yes\n");
				printf("2  No\n");
				printf("3  Save and add one more time\n");

				//////////
				select(7);
				////////////////
				if (move == 1){
					cn++;
					addr = 0;
				}
				if (move == 2){
					addr = 0;

				}
				if (move == 3){
					cn++;
					space(0, 0);
				}
			}//while
			//////////////////////////////////////////////////////////
		}//if
		if (move == 2){
			move = 1;
			int loadr = 1;
			char his[10];
			
			while (loadr){
				int a = 0;
				printf("What is his(hers) name?   ");
				fflush(stdin);
				gets_s(his);
				space(0,0);
				for (int i = 0; i <= 30; i++){
					if (strcmp(his,member[i].name)==0){
						printf("Name: %s\n", member[i].name);
						printf("Call: %s \n", member[i].calln);
						printf("Address: %s\n", member[i].address);
						a = 1;
						break;
					}
					else a = 0;
				}
				if (a == 0){
					printf("\n     No recode\n\n");
				}
				printf("Do you want to exit?\n");
				printf("¢º Yes\n");
				printf("2  No stay here\n");
				printf("3  No and find one more  time\n");
				select(4);
				if (move == 1){
					loadr = 0;
				}
				if (move == 2){
					loadr = 1;

				}
				if (move == 3){
					space(0, 0);
				}
			}//while
		}//if
		if (move == 3){
			move = 1;
			int delr = 1;
			char is[10];
			while (delr){
				printf("What do you want to delete?(name):  ");
				gets_s(is);
				space(0, 0);
				int i;
				for (i = 0; i <= 30; i++){
					if (strcmp(is, member[i].name) == 0){
						printf("Name: %s\n", member[i].name);
						printf("Call: %s\n", member[i].calln);
						printf("Address: %s\n", member[i].address);
						printf("\n");
						break;
					}
				}
				printf("DELETE DATA?\n");
				printf("¢º Yes\n");
				printf("2  No \n");
				printf("3  Yes and delete one more time\n");
				select(5);
				if (move == 1){
					strcpy_s(member[i].name, ".");
					strcpy_s(member[i].calln, ".");
					strcpy_s(member[i].address, ".");
					delr = 0;
				}
				if (move == 2){
					delr = 0;
				}
				if (move == 3){
					strcpy_s(member[i].name, ".");
					strcpy_s(member[i].calln, ".");
					strcpy_s(member[i].address, ".");

				}

			}//while
		}//if
	}
	_getch();
}