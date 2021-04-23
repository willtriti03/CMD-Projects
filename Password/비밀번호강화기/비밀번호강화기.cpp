#include <stdio.h>
#include <conio.h>
int main()
{
	//////////////////////////// 선언//////////////////////////////////////////
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,ipass,fpass; 
	char aa[20]="";
	char bb[20]="";
	int h1,h2,h3,h4;
	int iii;
	int jjj=1;
	int rn;
	int rc=1;
	int ii,jj=1;
	int ps1,ps2,ps3,ps4;
	int id;
	///////////////////////////////설명및 아이디만들기////////////////////////////
	printf("이 프로그램은 비밀번호 교환시스템입니다\n");
	printf("----------------------------------------------\n");
	printf("이 프로그램은 자신이 기억하기 쉬운 비밀번호를\n");
	printf("사용하여 어려운 비밀번호를 만드는 프로그램입니다\n");
	printf("----------------------------------------------\n");
	printf(" 아이디를 만들고 비밀번호에 쓸 0부터 9까지 수에 원하는 숫자를 대입합니다.\n(문자는 안됨)\n");
	printf("아이디를 생성합니다(20자이네).\n");
	scanf("%s",&aa);
	printf("아이디 : %s\n",aa);

	/////////////////////////////숫자대입////////////////////////////////////////
	for(rn=0;rn<rc;rn++){
		printf("각 숫자에 숫자를 대입합니다\n");
		printf(" 1에 대입하고 싶은 숫자는? ");
		scanf("%d",&a);
		printf("\n");
		printf(" 2에 대입하고 싶은 숫자는? ");
		scanf("%d",&b);
		printf("\n");
		printf(" 3에 대입하고 싶은 숫자는? ");
		scanf("%d",&c);
		printf("\n");
		printf(" 4에 대입하고 싶은 숫자는? ");
		scanf("%d",&d);
		printf("\n");
		printf(" 5에 대입하고 싶은 숫자는? ");
		scanf("%d",&e);
		printf("\n");
		printf(" 6에 대입하고 싶은 숫자는? ");
		scanf("%d",&f);
		printf("\n");
		printf(" 7에 대입하고 싶은 숫자는? ");
		scanf("%d",&g);
		printf("\n");
		printf(" 8에 대입하고 싶은 숫자는? ");
		scanf("%d",&h);
		printf("\n");
		printf(" 9에 대입하고 싶은 숫자는? ");
		scanf("%d",&i);
		printf("\n");
		printf(" 0에 대입하고 싶은 숫자는? ");
		scanf("%d",&j);
		printf("\n");
		printf("-----------------------\n");
		printf("|  1  |    %6d    |\n",a);
		printf("|  2  |    %6d    |\n",b);
		printf("|  3  |    %6d    |\n",c);
		printf("|  4  |    %6d    |\n",d);
		printf("|  5  |    %6d    |\n",e);
		printf("|  6  |    %6d    |\n",f);
		printf("|  7  |    %6d    |\n",g);
		printf("|  8  |    %6d    |\n",h);
		printf("|  9  |    %6d    |\n",i);
		printf("|  0  |    %6d    |\n",j);
		printf("-----------------------\n");
		printf("맞으십니까? 네=1 아니오=2 \n");
		scanf("%d",&k);

		if(k==1)break;
		else rc++;
	}
	////////////////////////////////////////비밀번호만들기/////////////////////////////////
	int passch;
	
	for(ii=0; ii<jj; ii++){
		if (k==1){
			printf("비밀번호를 설정하고 싶은 4자리번호를 눌러주세요\n");
			scanf("%d",&fpass);//l,&m,&n,&o
			printf("비밀번호확인\n");
			scanf("%d",&passch);//&p,&q,&r,&s
			if(fpass==passch){
				printf("로그인시에 필요한 진짜 비밀번호는  ");
				l=fpass/1000;
				m=(fpass-(l*1000))/100;
				n=(fpass-(l*1000)-(m*100))/10;
				o=fpass-(l*1000)-(m*100)-(n*10);
				////////////////////////////////////번호출력/////////////////////////////////
				if (l==1){
					printf("%d",a);
					ps1=a;
				}
				else if (l==2){
					printf("%d",b);
					ps1=b;
				}
				else if (l==3){
					printf("%d",c);
					ps1=c;

				}
				else if (l==4){
					printf("%d",d);
					ps1=d;
				}
				else if (l==5){
					printf("%d",e);
					ps1=e;
				}
				else if (l==6){
					printf("%d",f);
					ps1=f;
				}
				else if (l==7){
					printf("%d",g);
					ps1=g;
				}
				else if (l==8){
					printf("%d",h);
					ps1=h;
				}
				else if (l==9){
					printf("%d",i);
					ps1=i;
				}
				else {
					printf("%d",j);
					ps1=j;
				}
				if (m==1){
					printf("%d",a);
					ps2=a;
				}
				else if (m==2){
					printf("%d",b);
					ps2=b;
				}
				else if (m==3){
					printf("%d",c);
					ps2=c;
				}
				else if (m==4){
					printf("%d",d);
					ps2=d;
				}
				else if (m==5){
					printf("%d",e);
					ps2=e;
				}
				else if (m==6){
					printf("%d",f);
					ps2=f;
				}
				else if (m==7){
					printf("%d",g);
					ps2=g;
				}
				else if (m==8){
					printf("%d",h);
					ps2=h;
				}
				else if (m==9){
					printf("%d",i);
					ps2=i;
				}
				else {
					printf("%d",j);
					ps2=j;
				}
				if (n==1){
					printf("%d",a);
					ps3=a;
				}
				else if (n==2){
					printf("%d",b);
					ps3=b;
				}
				else if (n==3){
					printf("%d",c);
					ps3=c;
				}
				else if (n==4){
					printf("%d",d);
					ps3=d;
				}
				else if (n==5){
					printf("%d",e);
					ps3=e;
				}
				else if (n==6){
					printf("%d",f);
					ps3=f;
				}
				else if (n==7){
					printf("%d",g);
					ps3=g;
				}
				else if (n==8){
					printf("%d",h);
					ps3=h;
				}
				else if (n==9){
					printf("%d",i);
					ps3=i;
				}
				else {
					printf("%d",j);
					ps3=j;
				}
				if (o==1){
					printf("%d",a);
					ps4=a;
				}
				else if (o==2){
					printf("%d",b);
					ps4=b;
				}
				else if (o==3){
					printf("%d",c);
					ps4=c;
				}
				else if (o==4){
					printf("%d",d);
					ps4=d;
				}
				else if (o==5){
					printf("%d",e);
					ps4=e;
				}
				else if (o==6){
					printf("%d",f);
					ps4=f;
				}
				else if (o==7){
					printf("%d",g);
					ps4=g;
				}
				else if (o==8){
					printf("%d",h);
					ps4=h;
				}
				else if (o==9){
					printf("%d",i);
					ps4=i;
				}
				else {
					printf("%d",j);
					ps4=j;
				}
				printf("입니다\n");
				break;
			}
			else{printf("에러!\n"); jj++;}}}
	///////////////////////////////////////비밀번호*전환//////////////////////

	////////////////////////////////////////로그인창/////////////////////////////////
		for(iii=0;iii<jjj;iii++){
		p,q,r,s=0;
		printf("-------로그인-------\n");
		printf("아이디: ");
		scanf("%s",&bb);
		printf("\n비밀번호: ");
		scanf("%d",&ipass);// &p,&q,&r,&s

		p=ipass/1000;
	    q=(ipass-(p*1000))/100;
	    r=(ipass-(p*1000)-(q*100))/10;
	    s=(ipass-(p*1000)-(q*100)-(r*10))/1;
		/////////////////////////////////////번호조회////////////////////////////////////////
		if (p==1){
			h1=a;
		}
		else if (p==2){
			h1=b;
		}
		else if (p==3){
			h1=c;
		}
		else if (p==4){
			h1=d;
		}
		else if (p==5){
			h1=e;
		}
		else if (p==6){
			h1=f;
		}
		else if (p==7){
			h1=g;
		}
		else if (p==8){
			h1=h;
		}
		else if (p==9){
			h1=i;
		}
		else {
			h1=j;
		}
		if (q==1){
			h2=a;
		}
		else if (q==2){
			h2=b;
		}
		else if (q==3){
			h2=c;
		}
		else if (q==4){
			h2=d;
		}
		else if (q==5){
			h2=e;
		}
		else if (q==6){
			h2=f;
		}
		else if (q==7){
			h2=g;
		}
		else if (q==8){
			h2=h;
		}
		else if (q==9){
			h2=i;
		}
		else {
			h2=j;
		}
		if (r==1){
			h3=a;
		}
		else if (r==2){
			h3=b;
		}
		else if (r==3){
			h3=c;
		}
		else if (r==4){
			h3=d;
		}
		else if (r==5){
			h3=e;
		}
		else if (r==6){
			h3=f;
		}
		else if (r==7){
			h3=g;
		}
		else if (r==8){
			h3=h;
		}
		else if (r==9){
			h3=i;
		}
		else {
			h3=j;
		}
		if (s==1){
			h4=a;
		}
		else if (s==2){
			h4=b;
		}
		else if (s==3){
			h4=c;
		}
		else if (s==4){
			h4=d;
		}
		else if (s==5){
			h4=e;
		}
		else if (s==6){
			h4=f;
		}
		else if (s==7){
			h4=g;
		}
		else if (s==8){
			h4=h;
		}
		else if (s==9){
			h4=i;
		}
		else {
			h4=j;
		}
		/////////////////////////////////////////////비밀번호*호ㅏ/////////////////////////////////////////////
		

		///////////////////////////////////////////////로그인/////////////////////////////////////////////////////
		for(int i = 0;aa[i]!=NULL;i++){
			if(aa[i] != bb[i]){
				printf("\n잘못된 아이디 입니다\n");
				jjj++;
				break;
			}
			else{
				if(aa[i+1]==NULL && (aa[i] == bb[i])){ 
					if(h1==ps1 && h2==ps2 && h3==ps3 && h4==ps4&&p==l&&q==m&&r==n&&s==o){
						printf("\n로그인되었습니다\n");
						break;
					}
					else {printf("\n잘못된 비밀번호입니다\n");jjj++;}
				}
			}
		}
	}

	getch();
}
