#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>



 void stat(int n)                                                 //stat �Լ� 
{
    
    if(n==0)
     printf("  ������ ������ ������\n");
    if(n==1)
     printf("  ������ ������ ������\n");
    if(n==2)
     printf("  ������ ������ ������\n");
    if(n==3)
     printf("  ������ ������ ������\n");
    if(n==4)  
     printf("  ������ ������ ������\n");
    if(n==5)
     printf("  ������ ������ ������\n");
    if(n==6)
     printf("  ������ ������ ������\n");
    if(n==7)
     printf("  ������ ������ ������\n");
    if(n==8)
     printf("  ������ ������ ������\n");
    if(n==9)
     printf("  ������ ������ ������\n");
    if(n==10)
     printf("  ������ ������ ������\n");
    if(n==11)
     printf("  ������ ������ ������\n");
    if(n==12)
     printf("  ������ ������ ������\n");
    if(n==13)
     printf("  ������ ������ ������\n");
    if(n==14)
     printf("  ������ ������ ������\n");
    if(n==15)
     printf("  ������ ������ ������\n");
     
}



 void bye(int a, int b, int c, int d, int e)                   //*�����*���� 
{
    
    Sleep(1000);
    
    printf("�� �� : %d ", a);
    if(a>9)
     printf("\b");
    stat(a);
     
    printf("ģ�а�: %d ", b);
    if(b>9)
     printf("\b");
    stat(b);
    
    printf("�����: %d ", c);
    if(c>9)
     printf("\b");
    stat(c);
    
    printf("�� �� : %d ", d);
    if(d>9)
     printf("\b");
    stat(d);
    
    printf("�� �� : %d ", e);
    if(e>9)
     printf("\b");
    stat(e);
    
    
    Sleep(2000);
    printf("\n\n\n     !!!!!!!!!!!!   ");
    
    
    Sleep(3000);
    system("cls");
    printf("    *�����* \n\n����ļ� ���� �������ȴ�.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n\n");
    
    
    printf("��------��\n");
    printf(" |       |\n");
    printf(" |       |\n");
    printf(" (       |==================\n");
    printf(" |       | _               |\n");
    printf(" ||      || |                |\n");
    printf(" ||      |/ |             < @++++< \n");
    printf(" ||    ---  /\n");
    printf(" U    _  -��\n");
    printf("  |  / |/\n");
    printf("  | |  ||      �͹�\n");
    printf("  ||   ||                  �͹�    \n");
    printf("  c|   c| \n");
    printf("  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
   
 } 
 
 
 
 void end_cab(int a, int b, int c, int d, int e)
{
    
    Sleep(1000);
    
    printf("�� �� : %d ", a);
    if(a>9)
     printf("\b");
    stat(a);
    
    printf("ģ�а�: %d ", b);
    if(b>9)
     printf("\b");
    stat(b);
    
    printf("�����: %d ", c);
    if(c>9)
     printf("\b");
    stat(c);
    
    printf("�� �� : %d ", d);
    if(d>9)
     printf("\b");
    stat(d);
    
    printf("�� �� : %d ", e);
    if(e>9)
     printf("\b");
    stat(e);
    
    
    Sleep(2000);
    printf("\n\n\n     !!!!!!!!!!!!   ");
    Sleep(3000);
    system("cls");
    
    
    printf("    *�����* \n\n��ġ�� Ȱ���� �̱��� ���ϰ� �ɹ��߰� �Ǿ���ȴ�!\n\n");
    printf("         �� ____��\n");  
    printf("         |       |\n");
    printf("         | o  o  |\n");    
    printf("         /�� ����|\n");   
    printf("        /|     //  |\n");
    printf("       |  |w  w//   )\n");
    printf("      /   |/ /       |\n");
    printf("     |    //         )\n");
    printf("      |  //         |\n");
    printf("       (/          /\n");
    printf("        ��________|\n"); 
    
 } 










 int main(void)
{
    
    system("mode con: cols=70 lines=30"); 
    system("color F0");
 
    int len_name=0;
    char name[100];
    char tmp;
    int menu1_s,sel,rand_number,menu_s,rand_no;
    
   
   
   
    printf("�ȳ��ϼ���\n");                                              //��Ʈ�� 
    Sleep(1000);
    printf("����� Ű��� ���ӿ� ���Ű���\n");
    Sleep(1000);
    printf("ȯ���մϴ�.\n");
    Sleep(1200);
    system("cls");

    printf("���� ������� �̸��� ������ �ֽʽÿ�.\n");
    printf("(6�����Ϸ� �Է����ֽʽÿ�.)\n"); 

   
   
A:  printf("�̸�: ");                                                       //�̸����� 
    scanf("%s", name);
    system("cls");
   
    len_name=0;
    while(name[len_name] != '\0')
    len_name++;
    if((name[0]>=65&&name[0]<=90)||(name[0]>=97&&name[0]<=122))
    {
        if(len_name>6)
        {
           	while(1)
           	{         
               	printf("6�ڸ� ���� �� �����ϴ�. \n�ٽ� ������ �ֽʽÿ�. \n");
               	Sleep(1200);
               	system("cls");
               	printf("�̸�: ");
               	scanf("%s",name);
               	system("cls");
               	int len_name=0;
                    
           		while(name[len_name] != '\0')
               	len_name++;
                    
            	if(len_name<7)
               	break;
       
            }   
       	}

    }
   
   
   else
   {
       if(len_name>12)
       {
           while(1)
           {
               printf("6�ڸ� ���� �� �����ϴ�. \n�ٽ� ������ �ֽʽÿ�. \n");
                Sleep(1200);
                system("cls");
                printf("�̸�: ");               
                  scanf("%s",name);
                  system("cls");
                  int len_name=0;
                  
            while(name[len_name] != '\0')
            len_name+=2;
                  
            if(len_name<13)
                  break;
       
           }
        }
   }

   
B:  printf("���� ������� �̸��� %s(��)�� �Ͻðڽ��ϱ�?\n", name);           //�̸� Ȯ ��  
    printf("1. YES\n");
    printf("2. No\n");
   
   
    char name_s;
    name_s = getch();

   if(name_s==49)
   {
      	do{
        	system("cls");
         	printf("<SPACE�� ������ ����� Ű��� ������ �����մϴ�>\n");
         	tmp=getch();   
    	}while(tmp!=32);
   
    	system("cls");   
   }
   
   else if(name_s==50)
   {
      	system("cls");
      	printf("�̸��� �缳���մϴ�.\n");
      	Sleep(1200);
      	system("cls");
      	goto A;
   }
   
   else
   {
      	system("cls");
   		printf("�߸� �Է��ϼ̽��ϴ�.\n");
   		Sleep(1000);
   		system("cls");
   		goto B;
   }

      
    printf("L  O  A  D  I  N  G\n\n");                                   //�ε� 
    printf("    ___            \n");
  	printf("   ��  ��    __    \n");
   	printf("  | _  _ |  �� |   \n");
    printf(" /�� ����|   / /   \n");
    printf("|         | | |    \n");
    printf("|  |  |  ||_/ |    \n");
    printf("|  |  |  ||_ /     \n");
    printf(" ��( _��_ )        \n");
    Sleep(1000);
    system("cls");
    
    printf("L  O  A  D  I  N  G .\n\n");
    printf("    ___            \n");
    printf("   ��  ��      __  \n");
    printf("  | _  _ |    /  | \n");
    printf(" /�� ����|   / /   \n");
    printf("|         | | |    \n");
    printf("|  |  |  ||_/ |    \n");
    printf("|  |  |  ||_ /     \n");
    printf(" ��( _��_ )        \n");   
   	Sleep(1000);
   	system("cls");   

    printf("L  O  A  D  I  N  G . .\n\n");
    printf("    ___            \n");
   	printf("   ��  ��    __    \n");
   	printf("  | _  _ |  �� |   \n");
    printf(" /�� ����|   / /   \n");
    printf("|         | | |    \n");
    printf("|  |  |  ||_/ |    \n");
    printf("|  |  |  ||_ /     \n");
    printf(" ��( _��_ )        \n");
    Sleep(1000);
    system("cls");
    
    printf("L  O  A  D  I  N  G . . .\n\n");
    printf("    ___            \n");
   	printf("   ��  ��      __  \n");
    printf("  | _  _ |    /  | \n");
    printf(" /�� ����|   / /   \n");
    printf("|         | | |    \n");
    printf("|  |  |  ||_/ |    \n");
    printf("|  |  |  ||_ /     \n");
    printf(" ��( _��_ )        \n");   
   	Sleep(1000);
   	system("cls");   
   
  	printf("[%s�� ����]\n", name);                                                 //���� 
  	int rand_num; 
   	int a, b, c, d, e;
   
   	srand((unsigned)time(NULL));
   	rand_num= rand();
   	rand_num = rand() % 5 + 1;
   	a=rand_num;
   
   	rand_num = rand() % 5 + 1;   
   	b=rand_num;

   	rand_num = rand() % 5 + 1;   
   	c=rand_num;

   	rand_num = rand() % 5 + 1;
   	d=rand_num;

   	rand_num = rand() % 5 + 1;
   	e=rand_num;
   
   	printf("�� �� : %d", a);
   	stat(a);
   	printf("ģ�а�: %d", b);
   	stat(b);
   	printf("�����: %d", c);
   	stat(c);
   	printf("�� �� : %d", d);
   	stat(d);
   	printf("�� �� : %d", e);
   	stat(e);
   
   	do{
    	printf("<SPACE�� ������ �������� �Ѿ�ϴ�>\n"); 
      	tmp=getch();
    }while(tmp != 32);
      
   	system("cls"); 

   	int menu;
   	int count=0; 
	
C:  while(1)                                                            //����ȭ�� 
   	{
      	if(count>9)
      	{
         	char end_name[100];
		 	int ending;
		 	srand((unsigned)time(NULL));
   			ending= rand();
   			ending = rand() % 4 + 1;
		 
			if(ending==1)
			{
				strcpy(end_name,"�ķ�ȣ");
				system("cls");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ��____��          \n");
				printf("     |       |            \n");
				printf("     | _  _  |    __       \n");
				printf("     /�� ����|   / _|\n");
				printf("    |        |   | |\n");
				printf("    |        |  / / \n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |\n");
				printf("    |        | _ /\n");
				printf("    |        |\n");
				printf("     ��w�� w  \n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ��____��          \n");
				printf("     |       |          ��  \n");
				printf("     | _  _  |    __       \n");
				printf("     /�� ����|   / _|         \n");
				printf("    |        |   | |           \n");
				printf("    |        |  / /            \n");
				printf("    || |  | ||  | |             \n");
				printf("    | w    w | _/ |           \n");
				printf("    |        | _ /           \n");
				printf("    |        |                 \n");
				printf("     ��w�� w               \n");
				printf("       | | |              \n");
				printf("       |   |             \n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ��____��          \n");
				printf("     |       |         ��   \n");
				printf("     | _  _  |    __       \n");
				printf("     /�� ����|   / _|  ��       \n");
				printf("    |        |   | |          \n");
				printf("    |        |  / / \n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |\n");
				printf("    |        | _ /\n");
				printf("    |        |\n");
				printf("     ��w�� w  \n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ��____��          \n");
				printf("     |       |         ��    \n");
				printf("     | _  _  |    __       \n");
				printf("     /�� ����|   / _|  �� \n");
				printf("    |        |   | |\n");
				printf("    |        |  / /    ��\n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |\n");
				printf("    |        | _ /\n");
				printf("    |        |\n");
				printf("     ��w�� w  \n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				printf("     (      )\n");
				printf("     (      )\n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ��____��          \n");
				printf("     |       |         ��    \n");
				printf("     | _  _  |    __       \n");
				printf("     /�� ����|   / _|  ��\n");
				printf("    |        |   | |   \n");
				printf("    |        |  / /    ��\n");
				printf("    || |  | ||  | |    \n");
				printf("    | w    w | _/ |    ��\n");
				printf("    |        | _ / \n");
				printf("    |        |\n");
				printf("     ��w�� w  \n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				printf("     (      )\n");
				printf("     (      )\n");
				printf("    /        |\n");
				printf("  /            |\n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("      ��____��          \n");
				printf("     |       |         ��   \n");
				printf("     | _  _  |    __       \n");
				printf("     /�� ����|   / _|  ��\n");
				printf("    |        |   | |  \n");
				printf("    |        |  / /    ��\n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |    ��\n");
				printf("    |        | _ /     \n");
				printf("    |        |         �� \n");
				printf("     ��w�� w  \n");
				printf("\n");
				printf("\n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				printf("     (      )\n");
				printf("     (      )\n");
				printf("    /        |\n");
				printf("  /            |\n");
				Sleep(300);
				system("cls");
			
				printf("      ��____��          \n");
				printf("     |       |         ��   \n");
				printf("     | _  _  |    __       \n");
				printf("     /�� ����|   / _|  ��\n");
				printf("    |        |   | |\n");
				printf("    |        |  / /    ��\n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |    ��\n");
				printf("    |        | _ /\n");
				printf("    |        |         ��\n");
				printf("     ��w�� w  \n");
				printf("\n");
				printf("\n");			
				printf("\n");
				printf("\n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				printf("     (      )\n");
				printf("     (      )\n");
				printf("    /        |\n");
				printf("  /            |\n");
				Sleep(2000);
				system("cls");
			}
	
			else if(ending==2)
			{
				strcpy(end_name,"�Ĺ�");
				system("cls");		
				printf("                            \n");
				printf("                              \n");
				printf("               _____              \n");
				printf("             /      )           \n");
				printf("           (          )         \n");
				printf("          (    ��   ��  )       \n");
				printf("         (      o  o     )       \n");
				printf("          (   �� �� ��  )     \n");
				printf("               |   |      /    \n");
				printf("        ��     |w w|          \n");
				printf("               |   |     ��   \n");
				printf("       /       |   |         \n");
				Sleep(2000);
				system("cls");
		
				printf("                            \n");
				printf("                              \n");
				printf("               _____              \n");
				printf("             /      )           \n");
				printf("           (          )         \n");
				printf("          (    ��   ��  )       \n");
				printf("         (      o  o     )       \n");
				printf("          (   �� �� ��  )     \n");
				printf("               |   |      ��    \n");
				printf("       /       |w w|          \n");
				printf("               |   |    /   \n");
				printf("     ��        |   |         \n");
				Sleep(3000);
				system("cls");
		
		
			}
	
			else if(ending==3)
			{
				strcpy(end_name,"�ɸ�");
				system("cls");
				printf("                            \n");
				printf("             |          |         /               \n");
				printf("                                                  \n");
				printf("       L         /��-- ��                       \n");
				printf("                | o  o |              /            \n");
				printf("  ����          �� �� ��                            \n");
				printf("                |-w--w-|                           \n"); 
				printf("      -         |      |               -           \n");
				printf("                |      |                    ����         \n");
				printf("                |       :.                         \n");
				printf("                |         '                       \n");
				printf("                ��          :                        \n");
				printf("                  '...      :                      \n");
				printf("                      ''''''                     \n");
				printf("                                ����         \n");
				Sleep(1000); 
				system("cls");	
		
				printf("                            \n");
				printf("             |          |         /               \n");
				printf("                                                  \n");
				printf("       L         /��-- ��                  ����     \n");
				printf("                | o  o |              /            \n");
				printf("                �� �� ��                            \n");
				printf("                |-w--w-|                           \n"); 
				printf("      -         |      |               -           \n");
				printf("                |      |                            \n");
				printf("                |       :.                         \n");
				printf("                |         '                       \n");
				printf("    ����        ��          :                        \n");
				printf("                  '...      :                      \n");
				printf("                      ''''''                     \n");
				printf("                                      ����         \n");		
				Sleep(1000);
				system("cls");
				
				printf("                            \n");
				printf("             |          |         /               \n");
				printf("                                                  \n");
				printf("       L         /��-- ��                       \n");
				printf("                | o  o |              /            \n");
				printf("  ����          �� �� ��                            \n");
				printf("                |-w--w-|                           \n"); 
				printf("      -         |      |               -           \n");
				printf("                |      |                    ����         \n");
				printf("                |       :.                         \n");
				printf("                |         '                       \n");
				printf("                ��          :                        \n");
				printf("                  '...      :                      \n");
				printf("                      ''''''                     \n");
				printf("                                ����         \n");	
				Sleep(3000);
				system("cls");		
			}
	
			else if(ending==4)
			{
				strcpy(end_name,"������");
				system("cls");
				printf("                            \n");
				printf("         /��   ��    \n");
				printf("        |  o o |    \n");
				printf("        |�� �� ��    \n");
				printf("        |      |   \n");
				printf("        | w   w|   \n");
				printf("        |------|   \n");
				printf("        |      |   \n");
				printf("        |      |   \n");
				printf("         |    /   \n");
				printf("          ----   \n");
				Sleep(1000);
				system("cls");
					
				printf("                            \n");
				printf("         /��   ��    \n");
				printf("        |  o o |    \n");
				printf("        |�� �� ��    \n");
				printf("    +   |      |   \n");
				printf("        | w   w|   \n");
				printf("        |------|   \n");
				printf("        |      |   \n");
				printf("        |      |   \n");
				printf("         |    /   \n");
				printf("          ----   \n");		
				Sleep(1000);
				system("cls");
				
				printf("                            \n");
				printf("         /��   ��    \n");
				printf("        |  o o |   + \n");
				printf("        |�� �� ��    \n");
				printf("    +   |      |   \n");
				printf("        | w   w|   \n");
				printf("        |------|   \n");
				printf("        |      |   \n");
				printf("        |      |   \n");
				printf("         |    /   \n");
				printf("          ----   \n");	
				Sleep(3000);
				system("cls");	
			
			}

		 	Sleep(1000);
         	printf("���ݱ���...\n");
         	Sleep(1000);
         	printf("�����߾��.....\n");
      		Sleep(1000);
      		printf("���п� ");
      		Sleep(500);
      		printf("����...\n");
      		Sleep(1000); 
      		printf("����! %s(��)�� �Ǿ���ϴ�! \n",end_name);
      		Sleep(1000);
      		printf("���� ");
      		Sleep(300);
      		printf("����, "); 
      		Sleep(1000);
      		printf("���δ�...... ");
     		Sleep(1000);
      		printf("�ȳ�......");
      		Sleep(3000);
         	goto D;
     	}
     
    	int rand_kongjee;
   		srand((unsigned)time(NULL));
    	rand_kongjee=rand();
    	rand_kongjee=rand()%2+1;

     
     
     
     	if(kbhit())
      	{
         	menu = getch();
         	if(menu=='1')
         	 break; 
         
         	else if(menu=='2')
         	 break;
         
         	else
         	 goto C;
      	}
      	
      	printf("    ~%d����~\n\n",count+1); 
      	printf("������ �Ͻðڽ��ϱ�?\n\n");            
   		printf("    ___            \n");
   		printf("   ��  ��    __    \n");
    	printf("  | o  o |  �� |   \n");
    	printf(" /�� ����|   / /   \n");
    	printf("|         | | |    \n");
    	printf("|  |  |  ||_/ |    \n");
    	printf("|  |  |  ||_ /     \n");
    	printf(" ��( _��_ )        \n");
       	printf("1. �޴�\n");
      	printf("2. %s�� ����\n\n\n", name);      	
    	if(rand_kongjee==1)
    	 printf("�ذ���̴� �谡 ���� ������ ���� ������ϴ٢�\n");
    	else if(rand_kongjee==2)
    	 printf("��10���� �Բ��ϸ� ����̰� <����ȭ> �ؿ�!\n");
       	Sleep(600);
       	system("cls");
      
       	printf("    ~%d����~\n\n",count+1);
      	printf("������ �Ͻðڽ��ϱ�?\n\n");
    	printf("    ___          \n");
  	 	printf("   ��  ��      __  \n");
    	printf("  | o  o |    /  ) \n");
    	printf(" /�� ����|   / /   \n");
    	printf("|         | | |    \n");
    	printf("|  |  |  ||_/ |    \n");
    	printf("|  |  |  ||_ /     \n");
    	printf(" ��( _��_ )        \n");
       	printf("1. �޴�\n");
      	printf("2. %s�� ����\n\n\n", name);
    	if(rand_kongjee==1)
    	 printf("�ذ���̴� �谡 ���� ������ ���� ������ϴ٢�\n");
    	else if(rand_kongjee==2)
    	 printf("��10���� �Բ��ϸ� ����̰� <����ȭ> �ؿ�!\n");    
      	Sleep(600);
       	system("cls"); 
      
       	printf("    ~%d����~\n\n",count+1);
      	printf("������ �Ͻðڽ��ϱ�?\n\n");
   		printf("    ___            \n");
   		printf("   ��  ��        \n");
    	printf("  | o  o |    --�� \n");
    	printf(" /�� ����|   / -��)\n");
    	printf("|         | | |    \n");
    	printf("|  |  |  ||_/ |    \n");
    	printf("|  |  |  ||_ /     \n");
    	printf(" ��( _��_ )        \n");
       	printf("1. �޴�\n");
      	printf("2. %s�� ����\n\n\n", name);
    	if(rand_kongjee==1)
    	 printf("�ذ���̴� �谡 ���� ������ ���� ������ϴ٢�\n"); 
    	else if(rand_kongjee==2)
    	 printf("��10���� �Բ��ϸ� ����̰� <����ȭ> �ؿ�!\n");        
      	Sleep(600);
       	system("cls");
       
        printf("    ~%d����~\n\n",count+1);
      	printf("������ �Ͻðڽ��ϱ�?\n\n");
    	printf("    ___          \n");
   		printf("   ��  ��      __  \n");
    	printf("  | o  o |    /  ) \n");
    	printf(" /�� ����|   / /   \n");
    	printf("|         | | |    \n");
    	printf("|  |  |  ||_/ |    \n");
    	printf("|  |  |  ||_ /     \n");
    	printf(" ��( _��_ )        \n");
       	printf("1. �޴�\n");
      	printf("2. %s�� ����\n\n\n", name);
    	if(rand_kongjee==1)
    	 printf("�ذ���̴� �谡 ���� ������ ���� ������ϴ٢�\n");  
    	else if(rand_kongjee==2)
    	 printf("��10���� �Բ��ϸ� ����̰� <����ȭ> �ؿ�!\n");       
      	Sleep(600);
       	system("cls");
           
   	}
      
   if(menu=='1')                                                             //1 �޴�  
   {
      	printf("0. �ڷΰ���\n");      
      	printf("1. ����ֱ�\n");
      	printf("2. ���ֱ�\n");
      	printf("3. ���ٵ��\n");
      	printf("4. ���ɱ�\n");
      	printf("5. ����\n");   
   
      	menu1_s=getch();
      
      
      	if(menu1_s==48)
      	{
      		system("cls");
      		goto C;
     	}
    
     	if(menu1_s==49)                                          //����ֱ� 
     	{
       		system("cls");
       		printf("1.�� 2.���˴� \n"); 
       		sel=getch();
       		if(sel==49)
      		{
            	system("cls");
           
        		int i;
        		for(i=0; i<2; i++)
      			{
         			printf("%s(��)�� ���� ������ ��� �����ߴ�!\n\n", name);
        			printf("    __��                      \n");
       				printf("   / __ ) /��   ��            \n");
       				printf("  / /    |  o  o|              \n");
       				printf(" ( |____/  �� ����            \n");
       				printf(" |       (      |                \n");
       				printf(" |    ��     ��  ��               \n");
       				printf(" (  �� __)_��_ )_ )    ��  \n");       
           			Sleep(500);
           			system("cls");
           
        			printf("%s(��)�� ���� ������ ��� �����ߴ�!\n\n", name);   
        			printf("    __��                             \n");
       				printf("   / __ ) /��   ��                 \n");
       				printf("  / /    |  o  o|                 \n");
       				printf(" ( |____/  �� ����                 \n");
       				printf(" |       (         �� __     \n");
       				printf(" |    ��       ��  ____ )        \n");
       				printf(" (  �� __)_  ��_ )         ��         \n");  
       		      
           			Sleep(500);
           			system("cls"); 
     			}
     			
           		srand((unsigned)time(NULL));
           		rand_number=rand();
           		rand_number=rand()%4+1;
           		if(rand_number==1)
           		{
                 	printf("%s(��)�� ����� �������� �ö�Դ�! \n\n",name);
           		}
           		else if(rand_number==2)
           		{
               		printf("%s(��)�� �չ��� ������ �Ӵ´�. \n\n",name);
           		}
            	else
            	{
              	 	printf("%s(��)�� ����� �տ� ���� �κ��! \n\n",name); 
            	}
            
         		int rand_stat; 
            	srand((unsigned)time(NULL));
            	rand_stat=rand();
            
           		rand_stat=rand()%4+1;
           		printf("�� �� : %d + %d ",a,rand_stat); 
           		if(a>9)
           		 printf("\b");           
		   		a+=rand_stat;
           		if(a>15)
           		 a=15;
           		stat(a);
           
           		rand_stat=rand()%4+1;
           		printf("ģ�а�: %d + %d ",b,rand_stat);
           		if(b>9)
           		 printf("\b");          
		   		b+=rand_stat;         
           		if(b>15)
           		 b=15;
           		stat(b);
           
           		rand_stat=rand()%4+1;
           		printf("�����: %d + %d ",c,rand_stat);
           		if(c>9)
           		 printf("\b");
		   		c+=rand_stat;
           		if(c>=15)
           		{   
                 	c=15;
                 	system("cls");
                 	bye(a, b, c, d, e);    
                 
                 	goto D;
         		}
         		stat(c); 


           
           
           		rand_stat=rand()%4+1;
           		printf("�� �� : %d + %d ",d,rand_stat);
           		if(d>9)
           		 printf("\b");
           		d+=rand_stat;           
           		if(d>=15)
           		{    
				   	d=15;
           	    	system("cls");
               		end_cab(a,b,c,d,e);
               		goto D;
           		}
           		stat(d);
           

           
           		rand_stat=rand()%4+1;
           		printf("�� �� : %d + %d ",e,rand_stat);
           		if(e>9)
           		 printf("\b");           
		   		e+=rand_stat;           
           		if(e>15)
           		 e=15;
           		stat(e);
           
           		Sleep(400);
            	printf("\n �ƹ�Ű�� ��������!"); 
           
            
           
           
        		menu1_s=getch();
        		if(menu1_s!=0)
        		 system("cls");
        		count= count+1;
        		goto C;
         
       		}
       		
       	else
       	{
           	system("cls");
           
        	int i;
        	for(i=0; i<2; i++)
      		{
         		printf("%s(��)�� ���˴븦 ������ ��� �����ߴ�!\n\n", name);
         		printf("         / )       __\n");
           		printf("        / /)  /)  /  )       \n");
           		printf("       / /     | / /       ��\n");           
           		printf("      / /  o  o|/ /       /\n");
           		printf("     /    ��_����|       /\n");           
           		printf("                /       |\n");
           		printf("    |          |        /\n");
           		printf("    |          |       ��\n");           
           		printf("    |          |\n");     
         		printf("               |\n"); 
         		printf("    |   /_     /_\n"); 
         		printf("     ��___) ��___)\n");       
           		Sleep(500);
           		system("cls");
           
           		printf("%s(��)�� ���˴븦 ������ ��� �����ߴ�!\n\n", name);
           		printf("         / )       __\n");
           		printf("        / /)  /)  /  )       \n");
           		printf("       / /     | / /       ��\n");           
           		printf("      / /  o  o|/ /        |\n");
           		printf("     /    ��_����|        / \n");           
           		printf("                /        /\n");
           		printf("    |          |       /\n");
           		printf("    |          |      ��\n");           
           		printf("    |          |\n");     
         		printf("               |\n"); 
         		printf("    |   /_     /_\n"); 
         		printf("     ��___) ��___)\n");              
           		Sleep(500);
           		system("cls");           
        	}  
         
          
         

           
        	srand((unsigned)time(NULL));
        	rand_number=rand();
        	rand_number=rand()%4+1;
        
        	if(rand_number==1)
         	 printf("%s(��)�� ����� �������� �ö�Դ�! \n\n",name);
        
        	else if(rand_number==2)
         	 printf("%s(��)�� �չ��� ������ �Ӵ´�. \n\n",name);
        
        	else
         	 printf("%s(��)�� ����� �տ� ���� �κ��! \n\n",name); 
        
            
            
        	int rand_stat; 
        	srand((unsigned)time(NULL));
        	rand_stat=rand();
            
        	rand_stat=rand()%4+1;
        	printf("�� �� : %d + %d ",a,rand_stat); 
        	if(a>9)
         	 printf("\b");
			a+=rand_stat;
        	if(a>15)
         	 a=15;
        	stat(a);
           
        	rand_stat=rand()%4+1;
        	printf("ģ�а�: %d + %d ",b,rand_stat);
        	if(b>9)
        	 printf("\b");
			b+=rand_stat;
        	if(b>15)
        	 b=15;
        	stat(b);
           
        	rand_stat=rand()%4+1;
        	printf("�����: %d + %d ",c,rand_stat);
        	if(c>9)
        	 printf("\b");
			c+=rand_stat; 
        	if(c>=15)
        	{
            	c=15;
            	system("cls");
            	bye(a, b, c, d, e);
            	goto D;
             
        	}
        	stat(c);
         
 
           
        	rand_stat=rand()%4+1;
        	printf("�� �� : %d + %d ",d,rand_stat);
        	if(d>9)
        	 printf("\b");
			d+=rand_stat;
        	if(d>=15)
        	{    
            	d=15;
            	system("cls");
            	end_cab(a,b,c,d,e);
            	goto D;
        	}
        	stat(d);
           

           
        	rand_stat=rand()%4+1;
        	printf("�� �� : %d + %d ",e,rand_stat);
        	if(e>9)
        	 printf("\b"); 
			e+=rand_stat;
        	if(e>15)
        	 e=15;
        	stat(e);
           
        	Sleep(400);
        	printf("\n �ƹ�Ű�� ��������!"); 
   
        	menu1_s=getch();
        	if(menu1_s!=0)
        	 system("cls");
        	count= count+1;
        	goto C; 
    	}
       
       
    }
   
   
   if(menu1_s==50)                                      // ���ֱ� 
   {
    	system("cls");
    	printf("1.�α������ 2.��� 3.��޻�� 4.�ʰ�޻��\n");
    	menu_s=getch();
    	if(menu_s==49)
    	{
        	system("cls");
        	srand((unsigned)time(NULL));
        	rand_no=rand();
        	rand_no=rand()%2+1;
        	if(rand_no==1)
        	{
        		printf("%s(��)�� ��׸��� ������ ������ �����ȴ�! \n\n",name);
        		printf("    __��                      \n");
 				printf("   / __ ) /��   ��            \n");
 				printf("  / /    |  o  o|    ?...        \n");
 				printf(" ( |____/  �� ����        ��    \n");
 				printf(" |       (      |        ����        \n");
 				printf(" |    ��     ��  ��     ��__��          \n");
 				printf(" (  �� __)_��_ )_ )    /______�� \n");  
 				Sleep(2000);
 				system("cls");
 		
 				printf("%s(��)�� ��׸��� ������ ������ �����ȴ�! \n\n",name);
 		 		printf("    __��                                             \n");
 				printf("   / __ ) /��   ��                                  \n");
 				printf("  / /    |  0  0|       .........                          \n");
 				printf(" ( |____/  �� ����            ___                      \n");
 				printf(" |       (         �� __      �� ��  ��          \n");
 				printf(" |    ��       ��  ____ )       �� ��   ��  ��             \n");
 				printf(" (  �� __)_  ��_ )                ��|  �� ��             \n");
 				Sleep(2000);
 				system("cls");
             
            	int rand_stat;
            	srand((unsigned)time(NULL));
            	rand_stat=rand();
            
            
           		rand_stat=rand()%4+3;
           		printf("ģ�а�: %d - %d ",b,rand_stat);
           		if(b>9)
           		 printf("\b");
		   		b-=rand_stat;
           		if(b<0)
           		 b=0;
           		stat(b);
           
           		rand_stat=rand()%4+3;
           		printf("�����: %d + %d ",c,rand_stat);
           		if(c>9)
           		 printf("\b");
		   		c+=rand_stat; 
           		if(c>=15)
           		{
            		c=15;
            		system("cls");
          			bye(a, b, c, d, e);
                	goto D;
         		}
         		stat(c);
         
         		rand_stat=rand()%4+3;
           		printf("�ǰ�: %d - %d   ",d,rand_stat);
           		if(d>9)
           		 printf("\b");
         		d-=rand_stat;
           		if(d<0)
           		 d=0;
           		stat(d);
         		printf("\n �ƹ�Ű�� ��������!"); 
                                                               
           
           
        		menu1_s=getch();
        		if(menu1_s!=0)
        		 system("cls");
        		count= count+1;
        		goto C;
			}
        
        	else 
    		{
            	printf("%s(��)�� ��Ḧ �Ա� ������ ��� ���ۺ��δ�...\n\n",name);
				printf("         /��   ��   \n");
 				printf("        |  o  o|   ... \n");
 				printf("       /  �� ����                  \n");
 				printf("      /         |               \n");
 				printf("   __/    ��    ��      ���       \n");
 				printf(" /   |     |  | |      ��__��        \n");
 				printf("|     �� __��_ )_ )   /______��        \n");
 				Sleep(2000);
 				system("cls");
 		
        		printf("%s(��)�� ��Ḧ �Ա� ������ ��� ���ۺ��δ�...\n\n",name);
				printf("                                  \n");
 				printf("             /��   ��         \n");
 				printf("        ____|  o  o|   .....         \n");
 				printf("      /       �� �ī�             \n");
 				printf("   __/                    ��         \n");
 				printf(" /   |     |  ��  ��   ��__��              \n");
 				printf("|     �� __��_ ) _)   /______��             \n");
 				Sleep(1000);
 				system("cls");
 		
 				printf("%s(��)�� ��Ḧ �Ա� ������ ��� ���ۺ��δ�...\n\n",name);
				printf("                                  \n");
 				printf("             /��   ��         \n");
 				printf("        ____|  o  o|   .......         \n");
 				printf("      /       �� ����             \n");
 				printf("   __/                              \n");
 				printf(" /   |     |  ��  ��   ��__��              \n");
 				printf("|     �� __��_ ) _)   /______��             \n");
 				Sleep(1000);
 				system("cls");
		
				printf("%s(��)�� ��Ḧ �Ա� ������ ��� ���ۺ��δ�...\n\n",name); 
				printf("                                  \n");
 				printf("             /��   ��         \n");
 				printf("        ____|  o  o|   .........         \n");
 				printf("      /       �� �ī�             \n");
 				printf("   __/                             \n");
 				printf(" /   |     |  ��  ��   ____��              \n");
 				printf("|     �� __��_ ) _)   /______��             \n"); 		
 				Sleep(1000);
 				system("cls");
		 
				printf("%s(��)�� ��Ḧ �Ա� ������ ��� ���ۺ��δ�...\n\n",name); 
				printf("                                  \n");
 				printf("             /��   ��         \n");
 				printf("        ____|  o  o|   ...........         \n");
 				printf("      /       �� ����             \n");
 				printf("   __/                              \n");
 				printf(" /   |     |  ��  ��   ______              \n");
 				printf("|     �� __��_ ) _)   /______��             \n");
				Sleep(2000);
 				system("cls");		
		    
            	int rand_stat;
            	srand((unsigned)time(NULL));
            	rand_stat=rand();
           
           		rand_stat=rand()%3+3;
           		printf("ģ�а�: %d - %d ",b,rand_stat);
           		if(b>9)
           		 printf("\b");
		   		b-=rand_stat;
           		if(b<0)
           		 b=0;
           		stat(b);
           
           		rand_stat=rand()%4+1;
           		printf("�����: %d - %d ",c,rand_stat);
           		if(c>9)
           		 printf("\b");
		   		c-=rand_stat;
		    	if(c<0)
          		 c=0;
           		stat(c);
           
          
            	rand_stat=rand()%3+3;
           		printf("�ǰ�: %d - %d   ",d,rand_stat);
           		if(d>9)
           		 printf("\b");
         		d-=rand_stat;
           		if(d<0)
           		 d=0;
           		stat(d);
           
            	Sleep(400);
            	printf("\n �ƹ�Ű�� ��������!"); 
       
        	}
    	}
    	else if(menu_s==50)
    	{
        	system("cls");
        	printf("%s(��)�� ��Ḧ �Դ´�.\n\n",name); 
			printf("         /��   ��       \n");
 			printf("        |  o  o|   ...!    \n");
 			printf("       /  �� ����                  \n");
 			printf("      /         |               \n");
 			printf("   __/    ��    ��      ���      \n");
 			printf(" /   |     |  | |      ��__��        \n");
 			printf("|     �� __��_ )_ )   /______��        \n"); 
       		Sleep(2000);
       		system("cls");
        
        	printf("%s(��)�� ��Ḧ �Դ´�.\n\n",name);
        	printf("                                  \n");
 			printf("             /��   ��         \n");
 			printf("        ____|  o  o|   ��         \n");
 			printf("      /       �� ���             \n");
 			printf("   __/                  ���          \n");
 			printf(" /   |     |  ��  ��   ��__��              \n");
 			printf("|     �� __��_ ) _)   /______��             \n");
        	Sleep(1000);
        	system("cls");
		
			printf("%s(��)�� ��Ḧ �Դ´�.\n\n",name); 		
        	printf("                                  \n");
 			printf("             /��   ��     ��    \n");
 			printf("        ____|  o  o|   ��         \n");
 			printf("      /       �� ����             \n");
 			printf("   __/                    ��        \n");
 			printf(" /   |     |  ��  ��   ��__��              \n");
 			printf("|     �� __��_ ) _)   /______��             \n");
        	Sleep(1000);
        	system("cls");
		
        	printf("%s(��)�� ��Ḧ �Դ´�.\n\n",name);
        	printf("                                  \n");
 			printf("             /��   ��         \n");
 			printf("        ____|  o  o|   ��         \n");
 			printf("      /       �� ���             \n");
 			printf("   __/                            \n");
 			printf(" /   |     |  ��  ��    ____��              \n");
 			printf("|     �� __��_ ) _)   /______��             \n");
        	Sleep(1000);
        	system("cls");
		
			printf("%s(��)�� ��Ḧ �Դ´�.\n\n",name); 		
        	printf("                                  \n");
 			printf("             /��   ��     ��    \n");
 			printf("        ____|  o  o|   ��         \n");
 			printf("      /       �� ����             \n");
 			printf("   __/                            \n");
 			printf(" /   |     |  ��  ��   ______              \n");
 			printf("|     �� __��_ ) _)   /______��             \n");
        	system("cls"); 	
		
			printf("ģ�а�: %d + %d ",b, 1);	
			if(b>9)
        	 printf("\b");
			b=b+1;
			if(b>15)
			 b=15;
			stat(b);
		
			printf("�� �� : %d + %d ", d, 1);
			if(d>9)
        	 printf("\b");
			d=d+1;
           if(d>=15)
           	{    d=15;
               system("cls");
               end_cab(a,b,c,d,e);
               goto D;
           	}
           stat(d);  

		
			printf("�����: %d - %d ", c, 2);
			if(c>9)
        	 printf("\b");
			c=c-2;
			if(c<0)
			 c=0;
			stat(c);        
       
	   		printf("\n �ƹ�Ű�� ��������!");  
    	}
    	else if(menu_s==51)
    	{
         	system("cls");
        	printf("%s(��)�� �ʹ� ���������� ��׸��� �����ȴ�.\n\n",name); 
			printf("         /��   ��       \n");
 			printf("        |  o  o|   ...!    \n");
 			printf("       /  �� ����                  \n");
 			printf("      /         |               \n");
 			printf("   __/    ��    ��      ���      \n");
 			printf(" /   |     |  | |      ��__��        \n");
 			printf("|     �� __��_ )_ )   /______��        \n"); 
        	Sleep(2000);
        	system("cls");
        
        	printf("%s(��)�� �ʹ� ���������� ��׸��� �����ȴ�.\n\n",name); 
			printf("                                  \n");
 			printf("             /��   ��         \n");
 			printf("        ____|  o  o|   !!!����         \n");
 			printf("      /       ��_���             \n");
 			printf("   __/                  ���          \n");
 			printf(" /   |     |  ��  ��   ��__��              \n");
 			printf("|     �� __��_ ) _)   /______��             \n");
        	Sleep(2000);
        	system("cls");
		
			printf("%s(��)�� �ʹ� ���������� ��׸��� �����ȴ�.\n",name); 		
 			printf("                         ___                     \n");     
			printf("                       ��   ��     / �آ�              \n");
 			printf("                      |  o _o     / �� )              \n");
 			printf("                     / �� �� ��  / /                  \n");
 			printf("                    |         | | |                   \n");          
 			printf("                    |  |  |  ||_/ |                     \n");   
 			printf("                    |  |__|__||_ /              \n");
 			printf("                    ��/______��          \n");
        	Sleep(1000);
        	system("cls"); 
        
        
        	printf("%s(��)�� �ʹ� ���������� ��׸��� �����ȴ�.\n",name); 		
 			printf("                         ___                     \n");     
			printf("                       ��   ��     __  ��      \n");
 			printf("                      |  - _-     /  )         \n");
 			printf("             ��      / �� �� ��  / /                  \n");
 			printf("                    |         | | |                   \n");          
 			printf("                    |  |  |  ||_/ |                     \n");   
 			printf("                    |  |__|__||_ /              \n");
 			printf("                    ��/______��          \n");
        	Sleep(1000);
        	system("cls"); 
        	
        	printf("%s(��)�� �ʹ� ���������� ��׸��� �����ȴ�.\n",name); 		
 			printf("                         ___                     \n");     
			printf("                  ��   ��   ��    __  ��      \n");
 			printf("                      |  o _o    �� |   \n");
 			printf("             ��      / �� �� ��   / |  \n");
 			printf("                    |         |  / /                   \n");          
 			printf("                    |  |  |  ||_/ /                     \n");   
 			printf("                    |  |__|__||_ /              \n");
 			printf("                    ��/______��          \n");
        	Sleep(2000);
        	system("cls"); 

			printf("�� �� : %d + %d ",a, 3);	
			if(a>9)
        	 printf("\b");
			a=a+3;
			if(a>15)
			 a=15;
			stat(a);
		
			printf("�� �� : %d + %d ", d, 3);
			if(d>9)
        	 printf("\b");
			d=d+3;
           	if(d>=15)
           	{   d=15;
               	system("cls");
               	end_cab(a,b,c,d,e);
               	goto D;
           	}
           	stat(d);
		
			printf("�����: %d - %d ", c, 3);
			if(c>9)
        	 printf("\b");
			c=c-3;
			if(c<0)
			 c=0;
			stat(c);
		
			printf("ģ�а�: %d + %d ",b, 3);	
			if(b>9)
        	 printf("\b");
			b=b+3;
			if(b>15)
			 b=15;
			stat(b);		 
        
        	printf("\n �ƹ�Ű�� ��������!"); 
    	}
    	else
    	{ 
         	system("cls"); 
        	printf("%s(��)�� �� ������ �ȸ´� ä�� ��Ḧ 3��° �Ծ�ġ��� ���̴�.\n\n",name);  
        	printf("                                                           \n");                       
 			printf("             /��   ��                                        \n");
 			printf("        ____|  ��  o|  ...       |      | |      | |      |      \n");
 			printf("      /       �� �� ��           |      | |      | |      |        \n");
 			printf("   __/                  ���     |����| |      | |      |    \n");
 			printf(" /   |     |  ��  ��   ��__��    |����| |      | |      |        \n");
 			printf("|     �� __��_ ) _)   /______��  |��_��_| |______| |______|         \n");
        	Sleep(2000);
        	system("cls");
		
			printf("%s(��)�� �� ������ �ȸ´� ä�� ��Ḧ 3��° �Ծ�ġ��� ���̴�.\n\n",name);  		
 			printf("                                                           \n"); 
 			printf("             /��   ��                                        \n");
 			printf("        ____|  ��  o|  ...��     |      | |      | |      |      \n");
 			printf("      /       �� �� ��           |      | |      | |      |        \n");
 			printf("   __/                    ��     |����| |      | |      |    \n");
 			printf(" /   |     |  ��  ��   ��__��    |����| |      | |      |        \n");
 			printf("|     �� __��_ ) _)   /______��  |��_��_| |______| |______|         \n");
        	Sleep(1000);
        	system("cls"); 
        
        
        	printf("%s(��)�� �� ������ �ȸ´� ä�� ��Ḧ 3��° �Ծ�ġ��� ���̴�.\n\n",name);  		
 			printf("                                                           \n"); 
 			printf("             /��   ��                                        \n");
 			printf("        ____|  ��  o|            |      | |      | |      |      \n");
 			printf("      /       �� �� ��           |      | |      | |      |        \n");
 			printf("   __/                           |����| |      | |      |    \n");
 			printf(" /   |     |  ��  ��   ____��    |����| |      | |      |        \n");
 			printf("|     �� __��_ ) _)   /______��  |��_��_| |______| |______|         \n");
        	Sleep(2000);
        	system("cls"); 
        
        	printf("%s(��)�� �� ������ �ȸ´� ä�� ��Ḧ 3��° �Ծ�ġ��� ���̴�.\n\n",name); 		
			printf("                                                           \n"); 
 			printf("             /��   ��                                        \n");
 			printf("        ____|  ��  o| ��������   |      | |      | |      |      \n");
 			printf("      /       �� �� ��           |      | |      | |      |        \n");
 			printf("   __/                           |����| |      | |      |    \n");
 			printf(" /   |     |  ��  ��   ______    |����| |      | |      |        \n");
 			printf("|     �� __��_ ) _)   /______��  |��_��_| |______| |______|         \n");

			Sleep(2000);
        	system("cls"); 
        
			printf("�� �� : %d + %d ",a, 5);
			if(a>9)
           	 printf("\b");	
			a=a+5;
			if(a>15)
			 a=15;
			stat(a);
		
			printf("�� �� : %d + %d ", d, 5);
			if(d>9)
           	 printf("\b");
			d=d+5;
           	if(d>=15)
           	{   d=15;
              	 system("cls");
               	end_cab(a,b,c,d,e);
               	goto D;
           	}
           	stat(d);
		
			printf("�����: %d - %d ", c, 5);
			if(c>9)
          	  printf("\b");
			c=c-5;
			if(c<0)
			 c=0;
			stat(c);
		
			printf("ģ�а�: %d + %d ",b, 5);
			if(b>9)
           	 printf("\b");	
			b=b+5;
			if(b>15)
			 b=15;
			stat(b);        

        	printf("\n �ƹ�Ű�� ��������!"); 
    	}
    
     	menu1_s=getch();
        if(menu1_s!=0)
         system("cls");
        count= count+1;
        goto C;
   	}
   
   
   if(menu1_s==51)                                     // ���ٵ� ��  
   {
       	system("cls");
	    printf("%s (��)�� ���ٵ����!\n\n\n\n",name); 
	    printf("    __��               \n");
       	printf("   / __ ) /��   ��     \n");
	    printf("  / /    |  o  o|      \n");
	    printf(" ( |____/  �� �� ��     \n");
	    printf(" |       (      |      \n");
	    printf(" |    ��     ��  ��    \n");
	    printf(" (  �� __)_��_ )_ )    \n");
	    Sleep(1500);
	    system("cls");
	    printf("\n\n\n                   \n"); 
        printf("    __��               \n");
       	printf("   / __ ) /��   ��     \n");
       	printf("  / /    |  o  o|    !!....  \n");
       	printf(" ( |____/  �� �� ��     \n");
       	printf(" |       (      |      \n");
       	printf(" |    ��     ��  ��    \n");
       	printf(" (  �� __)_��_ )_ )    \n");
       	Sleep(2000);
       	system("cls");
       
       	int rand_ss;
        srand((unsigned)time(NULL));
        rand_ss=rand();
        rand_ss=rand()%6+1;
        if(rand_ss==1)
        {
           
        	int i;
        	for(i=0; i<2; i++)
        	{
            	printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name); 
           		printf("                 \n"); 
         		printf("   �� �� ��       \n");
         		Sleep(200);
         		system("cls");
 
          		printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name);
         		printf("   �� �� ��       \n");
         		printf("     �� �� ��     \n");
         		Sleep(200);
         		system("cls");         
         
         		printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name);
         		printf("                 \n"); 
         		printf("   �� �� ��       \n");
         		printf("     �� �� ��     \n");
         		printf("       �� �� ��    \n");
         		Sleep(200);
         		system("cls");
         
         		printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name);         
           		printf("                 \n"); 
         		printf("   �� �� ��       \n");
         		printf("     �� �� ��     \n");
         		printf("       �� �� ��    \n");
         		printf("         �� �� ��   \n");                  
         		Sleep(200);
         		system("cls");
         
         		printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name);
         		printf("                     \n"); 
         		printf("        /  /  /    \n");         
         		Sleep(200);
         		system("cls");

         		printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name);
         		printf("                     \n"); 
         		printf("        /  /  /    \n");
         		printf("       /  /  /     \n");
         		Sleep(200);
         		system("cls");
         
         		printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name);               
         		printf("                     \n"); 
         		printf("        /  /  /    \n");
         		printf("       /  /  /     \n");
         		printf("      /  /  /     \n");
         		Sleep(200);
         		system("cls");         
         
         		printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name);
         		printf("                     \n"); 
         		printf("        /  /  /    \n");
         		printf("       /  /  /     \n");
         		printf("      /  /  /     \n");
         		printf("     /  /  /      \n");   
         		Sleep(400);
         		system("cls");                        
   			}
   			
         	printf("%s(��)�� ȭ���鼭 ����� ��������.\n\n\n",name);
         	printf("                     \n"); 
         	printf("        /  /  /    \n");
         	printf("       /  /  /     \n");
         	printf("      /  /  /     \n");
         	printf("     /  /  /      \n");  
         
           	Sleep(1000);
           	system("cls");
           	printf("�� �� : %d - %d ",a,3);
           	if(a>9)
           	 printf("\b");
           	a-=3;
           	if(a<0)
           	 b=0;
           	stat(b);
           
            printf("ģ�а�: %d - %d ",b,3);
            if(b>9)
           	 printf("\b");
            b-=3;
            if(b<0)
             b=0;
            stat(b);
            
            Sleep(400);
            printf("\n �ƹ�Ű�� ��������!"); 
		}
      
      
        
    	else if(rand_ss==2)
    	{
        	printf("%s(��)�� �� ���� ����δ�.\n\n\n",name);
        	printf("    __��                  \n\n");
        	printf("   / __ ) /��   ��      .\n");
        	printf("  / /    |  �� ��|      \n");
        	printf(" ( |____/  �� �� ��     \n");
        	printf(" |       (      |      \n");
        	printf(" |    ��     ��  ��    \n");
        	printf(" (  �� __)_��_ )_ )    \n");
        	Sleep(400);
        	system("cls");
        	printf("%s(��)�� �� ���� ����δ�.\n\n\n",name);
        	printf("    __��                  \n\n");
        	printf("   / __ ) /��   ��      . .\n");
        	printf("  / /    |  �� ��|      \n");
        	printf(" ( |____/  �� �� ��     \n");
        	printf(" |       (      |      \n");
        	printf(" |    ��     ��  ��    \n");
        	printf(" (  �� __)_��_ )_ )    \n");
        	Sleep(400);
        	system("cls");
        	printf("%s(��)�� �� ���� ����δ�.\n\n\n",name);
        	printf("    __��                  \n\n");
        	printf("   / __ ) /��   ��      . . .\n");
        	printf("  / /    |  �� ��|      \n");
        	printf(" ( |____/  �� �� ��     \n");
        	printf(" |       (      |      \n");
        	printf(" |    ��     ��  ��    \n");
        	printf(" (  �� __)_��_ )_ )    \n");
        	Sleep(1000);
        	system("cls");
            
        	printf("�� �� : %d + %d ",a,1);
        	if(a>9)
        	printf("\b");
        	a+=1;
        	if(a>15)
        	 a=15;
        	stat(a);
           
        	printf("ģ�а�: %d - %d ",b,1);
        	if(b>9)
        	 printf("\b");
        	b+=1;
        	if(b>15)
        	 b=15;
        	stat(b);
            
        	Sleep(400);
        	printf("\n �ƹ�Ű�� ��������!"); 
    	}
    	else if(rand_ss==3)
    	{
    		int i;
        	for(i=0; i<2; i++)
    		{
      
    			printf("%s(��)�� �͸� �б��ߴ�.\n\n\n\n",name);
    			printf("          /)  /)    \n");   
    			printf("         /     |    \n");
    			printf("        |  _  _|    \n");
    			printf("       /  ��_����   \n");
    			printf("      /         |   \n");
    			printf("   __/    ��    ��  \n");
    			printf(" /   |     |  | |   \n");
    			printf("|     �� __��_ )_ ) \n");
    			Sleep(500);
    			system("cls");
            
    			printf("%s(��)�� �͸� �б��ߴ�.\n\n\n\n",name);
    			printf("                     \n");
    			printf("         /��   ��   \n");
    			printf("        |  _  _|    \n");
    			printf("       /  ��_����   \n");
    			printf("      /         |   \n");
    			printf("   __/    ��    ��  \n");
    			printf(" /   |     |  | |   \n");
    			printf("|     �� __��_ )_ ) \n");
    			Sleep(1000);
    			system("cls");
   			}
        
			printf("%s(��)�� �͸� �б��ߴ�.\n\n\n\n",name);
     		printf("                     \n");
       		printf("         /��   ��   \n");
      		printf("        |  _  _|    \n");
       		printf("       /  ��_����   \n");
       		printf("      /         |   \n");
       		printf("   __/    ��    ��  \n");
      		printf(" /   |     |  | |   \n");
       		printf("|     �� __��_ )_ ) \n");
        	Sleep(1000);
        	system("cls");
       
       		printf("�� �� : %d + %d ",a,3);
        	if(a>9)
        	 printf("\b");
			a+=3;
        	if(a>15)
        	 a=15;
        	stat(a);
           
        	printf("ģ�а�: %d + %d ",b,3);
        	if(b>9)
        	 printf("\b");
			b+=3;
        	if(b>15)
        	 b=15;
       		stat(b);
        
        	Sleep(400);
        	printf("\n �ƹ�Ű�� ��������!"); 
    	}
        
		else if(rand_ss==4)
    	{
        	printf("%s(��)�� \"�߿�\"�ߴ�.\n\n\n",name);
        	printf("    __��               \n");
       		printf("   / __ ) /��   ��     \n");
       		printf("  / /    |  o  o|      \n");
       		printf(" ( |____/  �� . ��     \n");
       		printf(" |       (      |      \n");
       		printf(" |    ��     ��  ��    \n");
       		printf(" (  �� __)_��_ )_ )    \n");
       		Sleep(1000);
       		system("cls");

			printf("%s(��)�� \"�߿�\"�ߴ�.\n\n\n",name);
       		printf("    __��               \n");
       		printf("   / __ ) /��   ��     \n");
       		printf("  / /    |  o  o|      \n");
       		printf(" ( |____/  �� o ��     \n");
       		printf(" |       (      |      \n");
       		printf(" |    ��     ��  ��    \n");
       		printf(" (  �� __)_��_ )_ )    \n");
       		Sleep(1000);
       		system("cls");

			printf("%s(��)�� \"�߿�\"�ߴ�.\n\n\n",name);
       		printf("    __��               \n");
       		printf("   / __ ) /��   ��     \n");
       		printf("  / /    |  -  -|      \n");
       		printf(" ( |____/  �� O ��     \n");
       		printf(" |       (      |      \n");
       		printf(" |    ��     ��  ��    \n");
       		printf(" (  �� __)_��_ )_ )    \n");
      		Sleep(1000);
       		system("cls");

			printf("%s(��)�� \"�߿�\"�ߴ�.\n\n\n",name);
       		printf("    __��               \n");
       		printf("   / __ ) /��   ��     �� \n");
       		printf("  / /    |  -  -|      \n");
       		printf(" ( |____/  �� O ��     \n");
       		printf(" |       (      |      \n");
       		printf(" |    ��     ��  ��    \n");
       		printf(" (  �� __)_��_ )_ )    \n");
       		Sleep(1000);
       		system("cls");

			printf("%s(��)�� \"�߿�\"�ߴ�.\n\n\n",name);	  
       		printf("    __��               \n");
       		printf("   / __ ) /��   ��     �� ��\n");
       		printf("  / /    |  -  -|      \n");
       		printf(" ( |____/  �� O ��     \n");
       		printf(" |       (      |      \n");
       		printf(" |    ��     ��  ��    \n");
       		printf(" (  �� __)_��_ )_ )    \n");
       		Sleep(1000);
       		system("cls");

			printf("%s(��)�� \"�߿�\"�ߴ�.\n\n\n",name);       
       		printf("  +  __��      +         \n");
       		printf("+  / __ ) /��   ��     �� �� \n");
       		printf("  / /    |  -  -|   +   \n");
       		printf(" ( |____/  �� O ��     +\n");
       		printf(" |       (      |      \n");
       		printf(" |    ��     ��  ��    \n");
       		printf(" (  �� __)_��_ )_ )    \n");

        	printf("�� �� : %d + %d ",a,3);
        	if(a>9)
        	 printf("\b");
			a+=3;
        	if(a>15)
        	 a=15;
        	stat(a);
           
        	printf("ģ�а�: %d + %d ",b,3);
        	if(b>9)
        	 printf("\b");
			b+=3;
        	if(b>15)
        	 b=15;
        	stat(b);
		 

        	Sleep(400);
        	printf("\n �ƹ�Ű�� ��������!"); 
    	}	
        
		else
    	{
        	int i;
        	for(i=0; i<2; i++)
        	{
				printf("%s(��)�� �׷���� �ϱ� �����ߴ�.\n\n\n",name);
            	printf("         /��   ��            \n");
 				printf("        /  _  _|          \n");
 				printf("       /  ��_����                \n");
 				printf("      /                 \n");
 				printf("   __/    ��    ��           \n");
 				printf(" /   |     |  | |           \n");
 				printf("|     �� __��_ )_)       \n");
            	Sleep(1000);
            	system("cls");
            
            	printf("%s(��)�� �׷���� �ϱ� �����ߴ�.\n\n\n",name);
            	printf("         /��   ��            \n");
 				printf("        /  _  _| __         \n");
 				printf("       /  ��_ 3 /  )            \n");
 				printf("      /          /       \n");
 				printf("   __/    ��   ��           \n");
 				printf(" /   |     |  |            \n");
 				printf("|     �� __��_ )        \n"); 
 				Sleep(1000);
 				system("cls");
        
          
        	}
        	printf("�� �� : %d + %d ",a,3);
        	if(a>9)
        	 printf("\b");
			a+=3;
        	if(a>15)
        	 a=15;
        	stat(a);
           
        	printf("ģ�а�: %d + %d ",b,3);
        	if(b>9)
        	 printf("\b");
			b+=3;
        	if(b>15)
        	 b=15;
        	stat(b);
        
        	Sleep(400);
      
      		printf("\n �ƹ�Ű�� ��������!"); 
  		}
    
		menu1_s=getch();
    	if(menu1_s!=0) 
    	 system("cls");
    	count= count+1;
    	goto C;
   	}
   

   
   if(menu1_s==52)                                    //���ɱ�  
   	{
        int i;
        if(a>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   ��   ��            \n");
       			printf("  |  o _o      --��  \n");
       			printf(" / ��  ����  /  -�� )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___        ���� �򴽳ȴ��� ���� \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(3000);
       			system("cls");
       
       
      		}
    
    	}
    
     	else if(b>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   ��   ��            \n");
       			printf("  |  o _o      --��  \n");
       			printf(" / ��  ����  /  -�� )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___      ����    \n");     
     		 	printf("   ��   ��      -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");
       
        		printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___      ���� �ʹ�    \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");
       
        		printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___      ���� �ʹ� ����!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(3000);
       			system("cls");
       
      		}
  		}
    
    	else if(c>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   ��   ��            \n");
       			printf("  |  o _o      --��  \n");
       			printf(" / ��  ����  /  -�� )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___        ����. \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
      			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
      	 		printf("     ___        ����.. \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
      			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___        ����... \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(3000);
       			system("cls");
       
       
      		}
    
    	}
    
    	 else if(d>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   ��   ��            \n");
       			printf("  |  o _o      --��  \n");
       			printf(" / ��  ����  /  -�� )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");

     			 printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___        ��å���� ����� \n");     
      			printf("   ��   ��   +   -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(3000);
       			system("cls");
       
       
      		}
    
    	}
    
    	else if(e>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   ��   ��            \n");
       			printf("  |  o _o      --��  \n");
       			printf(" / ��  ����  /  -�� )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___        �����ڰ����ֶ�. \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  - _-     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
      			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___        �����ڰ����ֶ�.. \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  - _-     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
     			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___        �����ڰ����ֶ�... \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  - _-     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(3000);
       			system("cls");
       
       
      		}
    
    	}
    	else
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
        		printf("     ___             \n");     
     			printf("   ��   ��            \n");
       			printf("  |  o _o      --��  \n");
       			printf(" / ��  ����  /  -�� )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(��)�� ����Ϸ��µ��ϴ�.\n\n",name); 
       			printf("     ___        ��  \n");     
      			printf("   ��   ��      -��  \n");
       			printf("  |  o _o     / �� ) \n");
       			printf(" / ��  �ī�  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" ��( _��_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
      		}
    
       		printf("%s�� ������ ���������\n",name);
       		Sleep(1000);
       		printf("�ᱹ �ϳ��� �˾Ƶ��� ���ߴ�."); 
       		Sleep(1000);
       		printf("..");
       		Sleep(1000);
       		printf("...");
       		Sleep(1000);
       		printf(".............\n\n");
       		Sleep(2000);
       
    	}
        printf("\n �ƹ�Ű�� ��������!"); 
        
      	menu1_s=getch();
      	system("cls");
      	count= count+1;
      	goto C;
       
   

   }
   
   if(menu1_s==53)                                    //��� ��  
   {
       	system("cls");
       	printf("%s(��)�� ����� �������� �ö�� ���� ���Ҵ�.\n",name); 
        printf("    __��               \n");
       	printf("   / __ ) /��   ��     \n");
       	printf("  / /    |  _  _|      \n");
       	printf(" ( |____/  �� ����     \n");
       	printf(" |       (      |      \n");
       	printf(" |    ��     ��  ��    \n");
       	printf(" (  �� __)_��_ )_ )    \n");
      	Sleep(1000);
      	system("cls");  

        int i;
        for(i=0; i<2; i++)
        {
        	printf("%s(��)�� ����� �������� �ö�� ���� ���Ҵ�.\n",name);
        	printf("      ____             \n");
       		printf("     / __ )            \n");
       		printf("    / / ____      z    \n");
       		printf("   | |/      ��   ��   \n");
      		printf("  /           _  _|    \n");
      		printf(" (   ��    �ث�_���ߪ� \n");
       		printf("   �� __)_______) ��__)\n");  
       		Sleep(1000);
      		system("cls");
      
       
      		printf("%s(��)�� ����� �������� �ö�� ���� ���Ҵ�.\n",name);
        	printf("      ____             \n");
       		printf("     / __ )         Z  \n");
       		printf("    / / ____      z    \n");
       		printf("   | |/      ��   ��   \n");
       		printf("  /           _  _|    \n");
       		printf(" (   ��    �ث�_���ߪ� \n");
       		printf("   �� __)_______) ��__)\n");  
       		Sleep(1000);
      		system("cls"); 
      
      
      	}
        
   		printf("�� �� : %d + %d ", a,3);
   		if(a>9)
   		 printf("\b");
   		a+=3;
   		if(a>15)
   		 a=15; 
   		stat(a);
   
   
   		printf("ģ�а�: %d + %d ", b,3);
   		if(b>9)
    	 printf("\b");
   		b+=3;
   		if(b>15)
   		 b=15;
    	stat(b);
   
   
   		printf("�� �� : %d + %d ", d,3);
   		if(d>9)
   		 printf("\b");
   		d+=3;
        if(d>=15)
        {    d=15;
            system("cls");
            end_cab(a,b,c,d,e);
            goto D;
        }
        stat(d);
   
   
   		printf("�� �� : %d - %d ", e,5);
   		if(e>9)
    	 printf("\b");
   		e-=5;
   		if(e<0)
   	 	 e=0;
   		stat(e);
   		Sleep(400);
   		printf("\n �ƹ�Ű�� ��������!"); 
            
   
      	menu1_s=getch();
      	system("cls");
      	count= count+1;
      	goto C;
   	}

   
	}
    

   if(menu=='2')                                                                //2 ����Ȯ�� 
   {
   		printf("�� �� : %d ", a);
   		if(a>9)
   		printf("\b");
   		stat(a);
   		printf("ģ�а�: %d ", b);
   		if(b>9)
   		printf("\b");
   		stat(b);
   		printf("�����: %d ", c);
   		if(c>9)
   		printf("\b");
   		stat(c);
   		printf("�� �� : %d ", d);
   		if(d>9)
   		printf("\b");
   		stat(d);
   		printf("�� �� : %d ", e);
   		if(e>9)
   		printf("\b");
   		stat(e);
   		Sleep(400);
   		printf("\n �ƹ�Ű�� ��������!"); 
            
   
      	int menu1_s;   
   		do{
      		menu1_s=getch();
      		system("cls");
      		goto C;
         
      		}while(menu1_s!=48);
 	}
   
D:      
      
   return 0;
      
}		
		 

