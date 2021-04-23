#include "Map.h"
void Map2(void){
	mapr = 1;
	brea = 1;
	int tree=0;
	int monster;
	int map[20][29] = {
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 9, 9, 9, 9, 9, 9, 9, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 7, 8, 7, 8, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 7, 8, 7, 8, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 7, 7, 7, 7, 7, 5, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};
	while (mapr){
		TalkbarSpace();
		gotoxy(0, 0);
		for (int ii = 0; ii < 20; ii++){
			for (int jj = 0; jj < 29; jj++){
				if (map[ii][jj] == 1){
					Color(BLACK, GREEN);
					printf("¢Ì");
					Color(BLACK, WHITE);

				}
				if (map[ii][jj] == 0){

					printf("  ");


				}
				if (map[ii][jj] == 5){
					Color(BLACK, LIGHT_SKY_BRUE);
					printf("¡ã");
					Color(BLACK, WHITE);
				}
				if (map[ii][jj] == 6){
					Color(BLACK, LIGHT_SKY_BRUE);
					printf("¡ã");
					Color(BLACK, WHITE);
				}
				if (map[ii][jj] == 3){
					Color(BLACK, GREEN);
					printf("¢À");
					Color(BLACK, WHITE);
				}
				if (map[ii][jj] == 7){
					Color(BLACK, SKY_BLUE);
					printf("¡á");
					Color(BLACK, WHITE);
				}
				if (map[ii][jj] == 8){
					Color(BLACK, SKY_BLUE);
					printf("¡á");
					Color(BLACK, WHITE);
				}
				if (map[ii][jj] == 9){
					Color(BLACK, BLUE);
					printf("¡á");
					Color(BLACK, WHITE);
				}
				if (map[ii][jj] == 2){
					printf("¡Ù");
					x = jj;
					y = ii;
				}

			}
			printf("\n");
		}
		///////////////////////////////////////////////
		char a;
		brea = 1;
		map[y][x] = 0;

		while (brea){
			a = _getch();
			
				gotoxy(x, y);
				printf("  ");
			


			switch (a){

			case LEFT:
				srand((unsigned)time(NULL));
				if (map[y][x] == 3){
					gotoxy(x, y);
					Color(BLACK, GREEN);
					printf("¢À");
					Color(BLACK, WHITE);
					monster = rand() % ((10 + 1) + 1) + 1;
					if (monster == 8){
						map[y][x] = 2;
						MonsterCome();
						BattleSet();
						Battle();

					}
				}
				--x;
				if (map[y][x] == 1){
					x++;
				}
				
				if (map[y][x] == 7){
					x++;
				}
				if (map[y][x] == 8){
					x++;
				}
				if (map[y][x] == 9){
					x++;
				}
				if (map[y][x] == 5){
					brea = 0;
					mapr = 0;
				}


				break;

			case RIGHT:
				srand((unsigned)time(NULL));
				if (map[y][x] == 3){
					gotoxy(x, y);
					Color(BLACK, GREEN);
					printf("¢À");
					Color(BLACK, WHITE);

					srand((unsigned)time(NULL));
					monster = rand() % ((10 + 1) + 1) + 1;
					if (monster == 8){
						map[y][x] = 2;
						MonsterCome();
						BattleSet();
						Battle();

					}
				}
				++x;
				
				if (map[y][x] == 1){
					x--;
				}
				
				if (map[y][x] == 5){
					brea = 0;
					mapr = 0;
				}
				if (map[y][x] == 7){
					x--;

				}
				if (map[y][x] == 8){
					x--;

				}
				if (map[y][x] == 9){
					x--;
				}

				break;
			case UP:
				srand((unsigned)time(NULL));
				if (map[y][x] == 3){
					gotoxy(x, y);
					Color(BLACK, GREEN);
					printf("¢À");
					Color(BLACK, WHITE);

					srand((unsigned)time(NULL));
					monster = rand() % ((10 + 1) + 1) + 1;
					if (monster == 8){
						map[y][x] = 2;
						MonsterCome();
						BattleSet();
						Battle();

					}
				}

				--y;
				if (map[y][x] == 1){
					y++;
				}
				
				if (map[y][x] == 5){
					brea = 0;
					mapr = 0;
				}
				if (map[y][x] == 7){
					y++;
				}
				if (map[y][x] == 8){
					y++;
				}
				if (map[y][x] == 9){
					y++;
				}

				break;


			case DOWN:
				srand((unsigned)time(NULL));
				if (map[y][x] == 3){
					gotoxy(x, y);
					Color(BLACK, GREEN);
					printf("¢À");
					Color(BLACK, WHITE);

					srand((unsigned)time(NULL));
					monster = rand() % ((10 + 1) + 1) + 1;
					if (monster == 8){
						map[y][x] = 2;
						MonsterCome();
						BattleSet();
						Battle();

					}
				}
				++y;
				if (map[y][x] == 1){
					y--;
				}
				
				if (map[y][x] == 5){
					brea = 0;
					mapr = 0;
				}
				if (map[y][x] == 7){
					y--;
				}
				if (map[y][x] == 8){
					y--;
				}
				if (map[y][x] == 9){
					y--;
				}

				break;
			case ENTER:
				map[y][x] = 2;
				gotoxy(x, y);
				printf("¡Ù");
				brea = 0;
				Interspace();
				Intersel();
				break;


			}

			gotoxy(x, y);
			printf("¡Ù");

		}
	}
}