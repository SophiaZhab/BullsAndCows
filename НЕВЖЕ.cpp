#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	system("color 6F");//������������ ������� ����
	setlocale(LC_ALL, "Russian");
	//���������� ��� ��������
	char o;
	int m, n, i, j, numeric[4], plnumeric[4], iteration, bulls, cows, numeric1[4], plnumeric1[4], numeric2[4], plnumeric2[4], bulls1, cows1,  bulls2, cows2;
	 char input[5], input1[5],  input2[5], input11[5],  input22[5];
	//����
	One:
	printf("\n                ��� '���� �� ������'             \n\n\n  ooooooooooooooooooooooooooooooooooooooooooooo\n");
	printf("  o                                           o\n");
	printf("  o              -----����:-----              o\n");
	printf("  o  -������ ��� - ������i�� ����i�� G        o\n");
	printf("  o  -��� ����� - ������i�� ����i�� T         o\n");
	printf("  o  -������� - ������i�� ����i�� R           o\n"); 
	printf("  o  -����� - ������i�� ����-��� i��� ����i�� o\n");
	printf("  o                                           o\n");
	printf("  ooooooooooooooooooooooooooooooooooooooooooooo\n");
		scanf("%s", &o);
	//������������� 
switch(o){
		//�������� ���
case 'g':
			//���������� ������ numeric[4] ����������� ������
			srand(time(0));
			numeric[0] = rand() % 10;
    for (i = 1; i < 4; i++) {
        iteration = 0;
        do {
            numeric[i] = rand() % 10;
            iteration = 0;
            for (j = 0; j < i; j++) {
                if (numeric[j] == numeric[i]) {
                    iteration = 1;
                    break;
                }}} 
		while (iteration);}
		
    printf("\n");
	while(bulls!=4)//����� ����������� ���
	{
	bulls=0; cows=0;//���������� ������� "����" �� "����"
	Two:
	printf("\n ����i�� ������������ �����:\n  ");//��� ����� �������
    scanf("%4s", input);
    //�������� ��������� �����
    for (i = 0; i < 4; i++) {
        if (input[i] < '0' || input[i] > '9') {
            printf("�������! ������� ����������� ������.\n");
            goto Two; 
        }
    if (input[0] < '1' || input[0] > '9') {
            printf("�������! ������� ����������� ������ ��� �� ����� �����, �� ���������� � ����.\n");
            goto Two;}
        plnumeric[i] = input[i] - '0'; //������������ ����� �� ����� 
    }
    //�������� ������ �� ������������� �����
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (plnumeric[i] == plnumeric[j]) {
            	printf(" ����� �� ������ �������������!\n");
                goto Two;
                return 0;
            }
        }
    }
    //��������� "����" �� "����"
	for(i=0; i<4; i++){
		if(plnumeric[i]==numeric[i]){
			bulls++;
		}
		
		for(j=0; j<4; j++){
			if(plnumeric[i]==numeric[j]){
			cows++;
		}
	}
	}
	//���� ������� ������ � ����� �����
		HANDLE h;
	h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 15);
	printf(" ���i� - %d, ���i� - %d ", cows, bulls);//���� ������� "����" �� "����"
	SetConsoleTextAttribute( h, ((6<<4)|15));//���������� ������������ �������
	}
	//����������� ��� ���������� �����
		printf("\n�����������, �� ���������! ��������� ����� - ");
		 for (i = 0; i < 4; i++) {
        printf("%d", numeric[i]);}
        printf("\n\n  �����i�� �������i �ii:\n   o ����������� � ���� - M\n   o ��������� �������� - E\n");
        scanf("%s", &m);
        //������������� ��� ������ ���� ��� ���������� ���
        switch(m){
        	case 'm':
        		goto One;
        	case 'e':
        		goto Three;	
		}
		//���� ��� �����
case 't':
Six:
	//��� ����� ��� ���������� ������ �������, ���� ������� ��� � ������ �� ������
	printf("\n 2 �������, ����i�� ������������ ����� ��� ���������� ����������:\n");
	HANDLE h;
	    h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 0);
    scanf("%4s", input1);
    SetConsoleTextAttribute( h, ((6<<4)|15));
    //�������� ��������� �����
    for (i = 0; i < 4; i++) {
        if (input1[i] < '0' || input1[i] > '9') {
            printf("�������! ������� ����������� ������.\n");
            goto Six; 
        }
    if (input1[0] < '1' || input1[0] > '9') {
            printf("�������! ������� ����������� ������ ��� �� ����� �����, �� ���������� � ����.\n");
            goto Six;}
        numeric1[i] = input1[i] - '0'; //������������ ����� �� �����
    }
    //�������� ������
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (numeric1[i] == numeric1[j]) {
            	printf(" ����� �� ������ �������������!\n");
                goto Six;
                return 0;
            }
        }
    }	
Seven:
	//��� ����� (� ������ �����) ��� ���������� ������ �������, ���� ������� ��� � ������ �� ������
	//����������� ��� ����� ��
	printf("\n 1 �������, ����i�� ������������ ����� ��� ���������� ����������:\n");
	SetConsoleTextAttribute( h, 0);
    scanf("%4s", input2);
SetConsoleTextAttribute( h, ((6<<4)|15));
    for (i = 0; i < 4; i++) {
        if (input2[i] < '0' || input2[i] > '9') {
            printf("�������! ������� ����������� ������.\n");
            goto Seven; 
        }
    if (input2[0] < '1' || input2[0] > '9') {
            printf("�������! ������� ����������� ������ ��� �� ����� �����, �� ���������� � ����.\n");
            goto Seven;}
        numeric2[i] = input2[i] - '0'; 
    }
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (numeric2[i] == numeric2[j]) {
            	printf(" ����� �� ������ �������������!\n");
                goto Seven;
                return 0;
            }
        }
    }	
    //����� ����������� ���
	while(bulls1!=4 or bulls2!=4){
	bulls1=0; cows1=0;//���������� ������� "����" �� "����" ��� ������� ������
Eight:
	printf("\n\n 1 �������, ����i�� ������������ �����:\n  ");
    scanf("%4s", input11);
    //�������� �����
    for (i = 0; i < 4; i++) {
        if (input11[i] < '0' || input11[i] > '9') {
            printf("�������! ������� ����������� ������.\n");
           goto Eight; 
        }
    if (input11[0] < '1' || input11[0] > '9') {
            printf("�������! ������� ����������� ������ ��� �� ����� �����, �� ���������� � ����.\n");
            goto Eight;}
        plnumeric1[i] = input11[i] - '0'; //������������ ����� �� �����
    }
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (plnumeric1[i] == plnumeric1[j]) {
            	printf(" ����� �� ������ �������������!\n");
                goto Eight;
                return 0;
            }
        }
    }
    //��������� � ��������� "����" �� "����" ��� ������� ������
	for(i=0; i<4; i++){
		if(plnumeric1[i]==numeric1[i]){
			bulls1++;
		}
		
		for(j=0; j<4; j++){
			if(plnumeric1[i]==numeric1[j]){
			cows1++;
		}
	}
	}
		HANDLE h;
	h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 15);
	printf(" 1: ���i� - %d, ���i� - %d ", cows1, bulls1);
	SetConsoleTextAttribute( h, ((6<<4)|15));
	if(cows1==4 || bulls1==4){
		goto Ten;
	}
	//������ ��� �� �� ��� ������� ������
	bulls2=0; cows2=0;
Nine:
	printf("\n 2 �������, ����i�� ������������ �����:\n  ");
scanf("%4s", input22);
    for (i = 0; i < 4; i++) {
        if (input22[i] < '0' || input22[i] > '9') {
            printf("�������! ������� ����������� ������.\n");
           goto Nine; 
        }
    if (input22[0] < '1' || input22[0] > '9') {
            printf("�������! ������� ����������� ������ ��� �� ����� �����, �� ���������� � ����.\n");
            goto Nine;}
        plnumeric2[i] = input22[i] - '0'; 
    }
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (plnumeric2[i] == plnumeric2[j]) {
            	printf(" ����� �� ������ �������������!\n");
                goto Nine;
                return 0;
            }
        }
    }
	for(i=0; i<4; i++){
		if(plnumeric2[i]==numeric2[i]){
			bulls2++;
		}
		
		for(j=0; j<4; j++){
			if(plnumeric2[i]==numeric2[j]){
			cows2++;
		}
	}
	}
	h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 15);
	printf(" 2: ���i� - %d, ���i� - %d ", cows2, bulls2);
	SetConsoleTextAttribute( h, ((6<<4)|15));
	if(cows2==4 || bulls2==4){
		goto Ten;
	}
	}
	//����� ��������� � ���� ���������� �����
Ten:	
if(cows1==4 || bulls1==4){
		printf("\n�����������, 1 ������� �����i�!\n");}
if(cows2==4 || bulls2==4){
		printf("\n�����������, 2 ������� �����i�!\n");}
printf("��������i �����:\n ��� ������� - ");
    for (i = 0; i < 4; i++) {
        printf("%d", numeric1[i]);}
printf("\n ��� ������� - ");
    for (i = 0; i < 4; i++) {
        printf("%d", numeric2[i]);}
        printf("\n\n  �����i�� �������i �ii:\n   o ����������� � ���� - M\n   o ��������� �������� - E\n");
        scanf("%s", &m);
        //������������� ��� ������ ���� ��� ���������� ���
        switch(m){
        	case 'm':
        		goto One;
        	case 'e':
        		goto Three;	
		}
//���� ������
case 'r':
		    printf(" o �������� '���i�' ����� �� �i���i��� ���������� ����, �� ��i� ����������, � ����������� �����.\n ");
	    h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 15);
		    printf(" ���������: '��� ���i��� - 4562. ���i�: 3'");
		SetConsoleTextAttribute( h, ((6<<4)|15));
		printf("\n ����� ��� � ��� ���� �����i � ����������� ����i.\n\n o � �������� '���i�' ���� i���, ���i� ��������i � ����������� ����i �������� ���� �������� ����� �� ��������i��� ii� ������������.\n ");
	    h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 15);
		    printf(" �������: '��� ���i��� - 4562. ���i�: 3. ���i�: 0'");
		SetConsoleTextAttribute( h, ((6<<4)|15));
		    printf("\n �� �������, �� ���e � ��� ���� �����i � ����������� ����i, ��� ii� ������������ i���.\n o �����i�� �����, �� ����� � ����i �� ������ �������������\n\n � ��� ��i ����� ������� �i � ���i, ��� ����� �� ������� �� ���� �����������.\n\n");

	goto One;
	Three:
		break;
}
}
