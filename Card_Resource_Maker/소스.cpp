#include <stdio.h>
#include <windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <conio.h>

std::string head;
std::string tail;
std::string list[100];
std::string short_cut;

void Add(int count){
	std::string value[100];
	std::string nameSet;
	char szBuf[_MAX_PATH] = { 0, };

	int re = 1;
	while (re){
		printf("			    Resource_Maker ver 1.0\n");
		printf("-------------------------------------------------------------------------------\n");


		for (int i = 0; i < count; ++i){
			printf("%d ", i);
			std::cout << list[i];
			printf(":  ",i);
			std::cin >> value[i];
		}
		printf("FileName:	");
		std::cin >> nameSet;
		printf("-------------------------------------------------------------------------------\n");

		system("cls");
		std::string::size_type offset = 0;

		printf("								Inform Check\n");
		printf("-------------------------------------------------------------------------------\n");
		for (int i = 0; i < count; ++i){
			offset = value[i].find("shc", offset);
			if (std::string::npos == offset){
				std::cout << list[i];
				printf(": ");
				std::cout << value[i] << std::endl;
			}
			else {
				std::cout << list[i];
				printf(": ");
				value[i] = value[i].replace(offset, 3, short_cut);
				std::cout << value[i] << std::endl;
			}

		}
		printf("FileName:  ");
		std::cout << nameSet << std::endl;
		printf("-------------------------------------------------------------------------------\n\n");
		printf("                                 정보가 맞나요?\n");
		printf("   ┌─────────────┐             ┌─────────────┐   \n");
		printf("   │                          │             │                          │   \n");
		printf("   │                          │             │                          │   \n");
		printf("   │         확인(1)          │             │          취소(2)         │   \n");
		printf("   │                          │             │                          │   \n");
		printf("   │                          │             │                          │   \n");
		printf("   └─────────────┘             └─────────────┘   \n");
		int in = _getch();
		if (in == 49){
			system("cls");
			strcpy_s(szBuf, (head + nameSet + tail).c_str());
			std::ofstream mkRec(szBuf);
			for (int i = 0; i < count; ++i){
				offset = value[i].find("shc",offset);
				if (std::string::npos == offset){
					mkRec << value[i].c_str() << std::endl;

				}
				else {

					value[i] = value[i].replace(offset, 3, short_cut);
					mkRec << value[i].c_str() << std::endl;
				}
				
			}
			mkRec.close();
			printf("WRITE FILE NOW");
			for (int i = 0; i < count * 5; ++i){
				printf(".\n");
				Sleep(100 / (count *2));
			}
			system("cls");
			printf("-------------------------------------------------------------------------------\n\n");
			printf("                                 더 만들건가요?\n");
			printf("   ┌─────────────┐             ┌─────────────┐   \n");
			printf("   │                          │             │                          │   \n");
			printf("   │                          │             │                          │   \n");
			printf("   │         확인(1)          │             │          취소(2)         │   \n");
			printf("   │                          │             │                          │   \n");
			printf("   │                          │             │                          │   \n");
			printf("   └─────────────┘             └─────────────┘   \n");
			in = _getch();
			if (in == 49){ system("cls"); }
			else if (in == 50){ system("cls");  break; }
			else { system("cls"); }

		}
		else if (in == 50){
			re = 0;
			break;
		}
		else{
			system("cls");
			std::string::size_type offset = 0;
			strcpy_s(szBuf, (head + nameSet + tail).c_str());
			std::ofstream mkRec(szBuf);
			for (int i = 0; i < count; ++i){
				offset = value[i].find("shc", offset);
				if (std::string::npos == offset){
					mkRec << value[i].c_str() << std::endl;

				}
				else {
					value[i] = value[i].replace(offset, 3, short_cut);
					mkRec << value[i].c_str() << std::endl;
				}

			}
			mkRec.close();
			printf("WRITE FILE NOW");
			for (int i = 0; i < count * 5; ++i){
				printf(".\n");
				Sleep(100 / (count * 2));
			}
			system("cls");
			printf("-------------------------------------------------------------------------------\n\n");
			printf("                                 더 만들건가요?\n");
			printf("   ┌─────────────┐             ┌─────────────┐   \n");
			printf("   │                          │             │                          │   \n");
			printf("   │                          │             │                          │   \n");
			printf("   │         확인(1)          │             │          취소(2)         │   \n");
			printf("   │                          │             │                          │   \n");
			printf("   │                          │             │                          │   \n");
			printf("   └─────────────┘             └─────────────┘   \n");
			in = _getch();
			if (in == 49){ system("cls"); }
			else if (in == 50){ system("cls");  break; }
			else { system("cls"); }
		
		}




	}

}


void Edit(){


}
void PathCheck(int count){
	system("cls");
	printf("			    Resource_Maker ver 1.0\n");
	printf("-------------------------------------------------------------------------------\n");
	printf("Path: ");
	std::cout << head + "FILENAME" + tail << std::endl;
	for (int i = 0; i < count; ++i){
		std::cout << list[i];
		printf(":\n");

	}
	printf("FileName: \n");
	printf("Setting Complete   (Press Any key)\n");
	_getch();
}
void PathSet(int *count){
	int in;
	printf("			    Resource_Maker ver 1.0\n");
	printf("-------------------------------------------------------------------------------\n");
	printf("리소스 헤드 입력:");
	std::cin >> head;
	fflush(stdin);

	printf("확장자 입력(.~~):");
	std::cin >> tail;
	fflush(stdin);

	printf("항목 개수 입력:  ");
	scanf_s("%d", &in);
	for (int i = 0; i < in; ++i){
		printf("항목이름 작성 %d: ",i);
		std::cin >> list[i];
		fflush(stdin);
	}
	printf("\nMaking Working Sit\n");
	*count = in;
	for (int i = 0; i < *count * 10; ++i){
		printf(".\n");
		Sleep(100 / (*count * 2));
	}
	
	PathCheck(in);
}

void ShortCut(){
	while (1){
		system("cls");
		printf("			    Resource_Maker ver 1.0\n");
		printf("-------------------------------------------------------------------------------\n");
		std::cout << short_cut << std::endl;
		printf("ShortCut Setting:\n");
		printf(" 1. Add\n 2. Edit\n 3. How to make and use?\n 4.Exit \n");
		int in = _getch();
		if (in == 52)break;
		switch (in)
		{
		case 49:
			printf("shc입력시 대신들어갈 문자/숫자입력\n");
			std::cin >> short_cut;
			printf("\n\nPress Any Key");
			_getch();
			break;
		case 50:
			printf("shc입력시 대신들어갈 문자/숫자입력\n");
			std::cin >> short_cut;
			printf("\n\nPress Any Key");
			_getch();
			break;
		case 51:
			system("cls");
			printf("1. 추가: Add를 선택후 shc이라고 치면 대신 들어갈 문장을 입력합니다\n");
			printf("2. 사용: 리소스 제작시 \"sht (내용있어도 없어도 상관 X)\"입력\n");
			printf("\n\nPress Any Key\n");
			_getch();
			break;

		}
	}
}
void Setting(int *count, int *check){

	if (*check == 0){
		PathSet(count);
		*check=1;
	}
	else {
		system("cls");
		printf("			    Resource_Maker ver 1.0\n");
		printf("-------------------------------------------------------------------------------\n");
		printf(" 1. Reset Path, File\n");
		printf(" 2. ShortCut\n");
		printf(" 3. Path Check\n");
		int in = _getch();
		switch (in)
		{
		case 49:
			system("cls");
			PathSet(count);
			break;
		case 50:
			system("cls");
			ShortCut();
			break;
		case 51:
			system("cls");
			PathCheck(*count);

			break;
		default:
			system("cls");
			PathCheck(*count);

			break;
		}

	}
}



int main(){
	int count = 0, check = 0;
	while (1){
		system("cls");
		printf("			    Resource_Maker ver 1.0\n");
		printf("-------------------------------------------------------------------------------\n");
		printf(" 1. Add\n");
		printf(" 2. Edit\n");
		printf(" 3. Setting\n");
		printf("-------------------------------------------------------------------------------\n");


		int a = _getch();
		switch (a){
		case 49:
			system("cls");
			Add(count);
			break;
		case 50:
			system("cls");
			Edit();
			break;
		case 51:
			system("cls");
			Setting(&count, &check);
			break;

		}
	}
	_getch();
}