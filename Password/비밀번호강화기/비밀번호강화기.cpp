#include <stdio.h>
#include <conio.h>
int main()
{
	//////////////////////////// ����//////////////////////////////////////////
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
	///////////////////////////////����� ���̵𸸵��////////////////////////////
	printf("�� ���α׷��� ��й�ȣ ��ȯ�ý����Դϴ�\n");
	printf("----------------------------------------------\n");
	printf("�� ���α׷��� �ڽ��� ����ϱ� ���� ��й�ȣ��\n");
	printf("����Ͽ� ����� ��й�ȣ�� ����� ���α׷��Դϴ�\n");
	printf("----------------------------------------------\n");
	printf(" ���̵� ����� ��й�ȣ�� �� 0���� 9���� ���� ���ϴ� ���ڸ� �����մϴ�.\n(���ڴ� �ȵ�)\n");
	printf("���̵� �����մϴ�(20���̳�).\n");
	scanf("%s",&aa);
	printf("���̵� : %s\n",aa);

	/////////////////////////////���ڴ���////////////////////////////////////////
	for(rn=0;rn<rc;rn++){
		printf("�� ���ڿ� ���ڸ� �����մϴ�\n");
		printf(" 1�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&a);
		printf("\n");
		printf(" 2�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&b);
		printf("\n");
		printf(" 3�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&c);
		printf("\n");
		printf(" 4�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&d);
		printf("\n");
		printf(" 5�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&e);
		printf("\n");
		printf(" 6�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&f);
		printf("\n");
		printf(" 7�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&g);
		printf("\n");
		printf(" 8�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&h);
		printf("\n");
		printf(" 9�� �����ϰ� ���� ���ڴ�? ");
		scanf("%d",&i);
		printf("\n");
		printf(" 0�� �����ϰ� ���� ���ڴ�? ");
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
		printf("�����ʴϱ�? ��=1 �ƴϿ�=2 \n");
		scanf("%d",&k);

		if(k==1)break;
		else rc++;
	}
	////////////////////////////////////////��й�ȣ�����/////////////////////////////////
	int passch;
	
	for(ii=0; ii<jj; ii++){
		if (k==1){
			printf("��й�ȣ�� �����ϰ� ���� 4�ڸ���ȣ�� �����ּ���\n");
			scanf("%d",&fpass);//l,&m,&n,&o
			printf("��й�ȣȮ��\n");
			scanf("%d",&passch);//&p,&q,&r,&s
			if(fpass==passch){
				printf("�α��νÿ� �ʿ��� ��¥ ��й�ȣ��  ");
				l=fpass/1000;
				m=(fpass-(l*1000))/100;
				n=(fpass-(l*1000)-(m*100))/10;
				o=fpass-(l*1000)-(m*100)-(n*10);
				////////////////////////////////////��ȣ���/////////////////////////////////
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
				printf("�Դϴ�\n");
				break;
			}
			else{printf("����!\n"); jj++;}}}
	///////////////////////////////////////��й�ȣ*��ȯ//////////////////////

	////////////////////////////////////////�α���â/////////////////////////////////
		for(iii=0;iii<jjj;iii++){
		p,q,r,s=0;
		printf("-------�α���-------\n");
		printf("���̵�: ");
		scanf("%s",&bb);
		printf("\n��й�ȣ: ");
		scanf("%d",&ipass);// &p,&q,&r,&s

		p=ipass/1000;
	    q=(ipass-(p*1000))/100;
	    r=(ipass-(p*1000)-(q*100))/10;
	    s=(ipass-(p*1000)-(q*100)-(r*10))/1;
		/////////////////////////////////////��ȣ��ȸ////////////////////////////////////////
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
		/////////////////////////////////////////////��й�ȣ*ȣ��/////////////////////////////////////////////
		

		///////////////////////////////////////////////�α���/////////////////////////////////////////////////////
		for(int i = 0;aa[i]!=NULL;i++){
			if(aa[i] != bb[i]){
				printf("\n�߸��� ���̵� �Դϴ�\n");
				jjj++;
				break;
			}
			else{
				if(aa[i+1]==NULL && (aa[i] == bb[i])){ 
					if(h1==ps1 && h2==ps2 && h3==ps3 && h4==ps4&&p==l&&q==m&&r==n&&s==o){
						printf("\n�α��εǾ����ϴ�\n");
						break;
					}
					else {printf("\n�߸��� ��й�ȣ�Դϴ�\n");jjj++;}
				}
			}
		}
	}

	getch();
}
