#include"Map.h"

void Map1(void){
	/*int y, x;

	for(y=0;y<HEIGHT;y++)
	{
	for(x=0;x<WIDTH;x++)
	{
	if(y % (HEIGHT - 1) == 0 || x % (WIDTH - 1) == 0)
	printf("��");
	else
	printf("  ");
	}
	printf("\n");
	}
	*/
	int map[20][29] = {
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5, 0, 1 },
		{ 1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 7, 3, 7, 8, 3, 8, 9, 3, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};
	while (mapr){
		gotoxy(0, 0);
		for (int ii = 0; ii < 20; ii++){
			for (int jj = 0; jj < 29; jj++){
				if (map[ii][jj] == 1){
					Color(BLACK, GREEN);
					printf("��");
					Color(BLACK, WHITE);
					
				}
				if (map[ii][jj] == 5){
					Color(BLACK, LIGHT_SKY_BRUE);
					printf("��");
					Color(BLACK, WHITE);
				}
				if (map[ii][jj] == 3){
					Color(BLACK, RED);
					printf("��");
					Color(BLACK, WHITE);
				}
				if (map[ii][jj] == 2){
					printf("��");
					x = jj;
					y = ii;
				}
				if (map[ii][jj] == 0 || map[ii][jj] == 7 || map[ii][jj] == 8 || map[ii][jj] == 9){
					printf("  ");
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

			case LEFT:--x;
				if (map[y][x] == 1){
					x++;
				}
				if (map[y][x] == 3){
					x++;
				}
				if (map[y][x] == 7){
					GetPa();
				}
				if (map[y][x] == 8){
					GetYee();
				}
				if (map[y][x] == 9){
					GetGo();
				}
				if (map[y][x] == 5){
					brea = 0;
					mapr = 0;
				}


				break;

			case RIGHT:++x;
				if (map[y][x] == 1){
					x--;
				}
				if (map[y][x] == 3){
					x--;
				}
				if (map[y][x] == 5){
					brea = 0;
					mapr = 0;
				}
				if (map[y][x] == 7){
					GetPa();

				}
				if (map[y][x] == 8){
					GetYee();

				}
				if (map[y][x] == 9){
					GetGo();
				}

				break;
			case UP:--y;
				if (map[y][x] == 1){
					y++;
				}
				if (map[y][x] == 3){
					y++;
				}
				if (map[y][x] == 5){
					brea = 0;
					mapr = 0;
				}
				if (map[y][x] == 7){
					GetPa();
				}
				if (map[y][x] == 8){
					GetYee();
				}
				if (map[y][x] == 9){
					GetGo();
				}

				break;


			case DOWN:++y;
				if (map[y][x] == 1){
					y--;
				}
				if (map[y][x] == 3){
					y--;
				}
				if (map[y][x] == 5){
					brea = 0;
					mapr = 0;
				}
				if (map[y][x] == 7){
					GetPa();
				}
				if (map[y][x] == 8){
					GetYee();
				}
				if (map[y][x] == 9){
					GetGo();
				}

				break;
			case ENTER:
				map[y][x] = 2;
				gotoxy(x, y);
				printf("��");
				brea = 0;
				Interspace();
				Intersel();
				break;


			}


			gotoxy(x, y);
			printf("��");

		}
	}
}

