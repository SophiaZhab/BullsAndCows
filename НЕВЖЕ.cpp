#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	system("color 6F");//Встановлення кольору вікна
	setlocale(LC_ALL, "Russian");
	//Оголошення усіх атребутів
	char o;
	int m, n, i, j, numeric[4], plnumeric[4], iteration, bulls, cows, numeric1[4], plnumeric1[4], numeric2[4], plnumeric2[4], bulls1, cows1,  bulls2, cows2;
	 char input[5], input1[5],  input2[5], input11[5],  input22[5];
	//Меню
	One:
	printf("\n                ГРА 'БИКИ ТА КОРОВИ'             \n\n\n  ooooooooooooooooooooooooooooooooooooooooooooo\n");
	printf("  o                                           o\n");
	printf("  o              -----Меню:-----              o\n");
	printf("  o  -Почати гру - натиснiть клавiшу G        o\n");
	printf("  o  -Гра удвох - натиснiть клавiшу T         o\n");
	printf("  o  -Правила - натиснiть клавiшу R           o\n"); 
	printf("  o  -Вийти - натиснiть будь-яку iншу клавiшу o\n");
	printf("  o                                           o\n");
	printf("  ooooooooooooooooooooooooooooooooooooooooooooo\n");
		scanf("%s", &o);
	//Розгалудження 
switch(o){
		//Одиночна гра
case 'g':
			//Заповнення масиву numeric[4] випадковими чилами
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
	while(bulls!=4)//Умова продовження гри
	{
	bulls=0; cows=0;//Анулювання значень "корів" та "биків"
	Two:
	printf("\n Введiть чотиризначне число:\n  ");//Ввід числа гравцем
    scanf("%4s", input);
    //Перевірка введеного рядка
    for (i = 0; i < 4; i++) {
        if (input[i] < '0' || input[i] > '9') {
            printf("Помилка! Введено некоректний символ.\n");
            goto Two; 
        }
    if (input[0] < '1' || input[0] > '9') {
            printf("Помилка! Введено некоректний символ або ви ввели число, що починається з нуля.\n");
            goto Two;}
        plnumeric[i] = input[i] - '0'; //Перетворення рядку на масив 
    }
    //Перевірка масиву на товторюваність чисел
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (plnumeric[i] == plnumeric[j]) {
            	printf(" Цифри не можуть повторюватися!\n");
                goto Two;
                return 0;
            }
        }
    }
    //Обрахунок "корів" та "биків"
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
	//зміна кольору консолі з цього рядка
		HANDLE h;
	h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 15);
	printf(" Корiв - %d, бикiв - %d ", cows, bulls);//Вивід кількості "корів" та "биків"
	SetConsoleTextAttribute( h, ((6<<4)|15));//повернення попереднього кольору
	}
	//Повідомлення про вгадування числа
		printf("\nПоздоровляю, ви перемогли! Вгадуване число - ");
		 for (i = 0; i < 4; i++) {
        printf("%d", numeric[i]);}
        printf("\n\n  Виберiть наступнi дii:\n   o Повернутись у меню - M\n   o Завершити програму - E\n");
        scanf("%s", &m);
        //Розгалудження для вибору меню або завершення гри
        switch(m){
        	case 'm':
        		goto One;
        	case 'e':
        		goto Three;	
		}
		//Вибір гри удвох
case 't':
Six:
	//Ввід числа для вгадування першим гравцем, зміна кольору тла і текста на чорний
	printf("\n 2 гравець, введiть чотиризначне число для вгадування суперником:\n");
	HANDLE h;
	    h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 0);
    scanf("%4s", input1);
    SetConsoleTextAttribute( h, ((6<<4)|15));
    //Перевірка введеного рядка
    for (i = 0; i < 4; i++) {
        if (input1[i] < '0' || input1[i] > '9') {
            printf("Помилка! Введено некоректний символ.\n");
            goto Six; 
        }
    if (input1[0] < '1' || input1[0] > '9') {
            printf("Помилка! Введено некоректний символ або ви ввели число, що починається з нуля.\n");
            goto Six;}
        numeric1[i] = input1[i] - '0'; //Перетворення рядка на масив
    }
    //Перевірка масиву
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (numeric1[i] == numeric1[j]) {
            	printf(" Цифри не можуть повторюватися!\n");
                goto Six;
                return 0;
            }
        }
    }	
Seven:
	//Ввід числа (у вигляді рядка) для вгадування другим гравцем, зміна кольору тла і текста на чорний
	//Проходження тих самих дій
	printf("\n 1 гравець, введiть чотиризначне число для вгадування суперником:\n");
	SetConsoleTextAttribute( h, 0);
    scanf("%4s", input2);
SetConsoleTextAttribute( h, ((6<<4)|15));
    for (i = 0; i < 4; i++) {
        if (input2[i] < '0' || input2[i] > '9') {
            printf("Помилка! Введено некоректний символ.\n");
            goto Seven; 
        }
    if (input2[0] < '1' || input2[0] > '9') {
            printf("Помилка! Введено некоректний символ або ви ввели число, що починається з нуля.\n");
            goto Seven;}
        numeric2[i] = input2[i] - '0'; 
    }
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (numeric2[i] == numeric2[j]) {
            	printf(" Цифри не можуть повторюватися!\n");
                goto Seven;
                return 0;
            }
        }
    }	
    //Умова продовження гри
	while(bulls1!=4 or bulls2!=4){
	bulls1=0; cows1=0;//Анулювання значень "корів" та "биків" для першого гравця
Eight:
	printf("\n\n 1 гравець, введiть чотиризначне число:\n  ");
    scanf("%4s", input11);
    //Перевірка рядка
    for (i = 0; i < 4; i++) {
        if (input11[i] < '0' || input11[i] > '9') {
            printf("Помилка! Введено некоректний символ.\n");
           goto Eight; 
        }
    if (input11[0] < '1' || input11[0] > '9') {
            printf("Помилка! Введено некоректний символ або ви ввели число, що починається з нуля.\n");
            goto Eight;}
        plnumeric1[i] = input11[i] - '0'; //Перетворення рядка на масив
    }
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (plnumeric1[i] == plnumeric1[j]) {
            	printf(" Цифри не можуть повторюватися!\n");
                goto Eight;
                return 0;
            }
        }
    }
    //Обрахунок і виведення "корів" та "биків" для першого гравця
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
	printf(" 1: Корiв - %d, бикiв - %d ", cows1, bulls1);
	SetConsoleTextAttribute( h, ((6<<4)|15));
	if(cows1==4 || bulls1==4){
		goto Ten;
	}
	//Повтор тих же дій для другого гравця
	bulls2=0; cows2=0;
Nine:
	printf("\n 2 гравець, введiть чотиризначне число:\n  ");
scanf("%4s", input22);
    for (i = 0; i < 4; i++) {
        if (input22[i] < '0' || input22[i] > '9') {
            printf("Помилка! Введено некоректний символ.\n");
           goto Nine; 
        }
    if (input22[0] < '1' || input22[0] > '9') {
            printf("Помилка! Введено некоректний символ або ви ввели число, що починається з нуля.\n");
            goto Nine;}
        plnumeric2[i] = input22[i] - '0'; 
    }
	for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (plnumeric2[i] == plnumeric2[j]) {
            	printf(" Цифри не можуть повторюватися!\n");
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
	printf(" 2: Корiв - %d, бикiв - %d ", cows2, bulls2);
	SetConsoleTextAttribute( h, ((6<<4)|15));
	if(cows2==4 || bulls2==4){
		goto Ten;
	}
	}
	//Пошук переможця і вивід вгадуваних чисел
Ten:	
if(cows1==4 || bulls1==4){
		printf("\nПоздоровляю, 1 гравець перемiг!\n");}
if(cows2==4 || bulls2==4){
		printf("\nПоздоровляю, 2 гравець перемiг!\n");}
printf("Вгадуванi числа:\n Для першого - ");
    for (i = 0; i < 4; i++) {
        printf("%d", numeric1[i]);}
printf("\n Для другого - ");
    for (i = 0; i < 4; i++) {
        printf("%d", numeric2[i]);}
        printf("\n\n  Виберiть наступнi дii:\n   o Повернутись у меню - M\n   o Завершити програму - E\n");
        scanf("%s", &m);
        //Розгалудження для вибору меню або завершення гри
        switch(m){
        	case 'm':
        		goto One;
        	case 'e':
        		goto Three;	
		}
//Вивід правил
case 'r':
		    printf(" o Значення 'корiв' вказує на кiлькiсть правильних цифр, що ввiв користувач, з вгадуваного числа.\n ");
	    h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 15);
		    printf(" Наприклад: 'Ваш варiант - 4562. Корiв: 3'");
		SetConsoleTextAttribute( h, ((6<<4)|15));
		printf("\n Тобто троє з цих цифр наявнi в вгадуваному числi.\n\n o А значення 'бикiв' дещо iнше, окрiм наявностi в вгадуваному числi введених цифр значення вказує на правильнiсть iiх розташування.\n ");
	    h= GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute( h, 15);
		    printf(" Приклад: 'Ваш варiант - 4562. Корiв: 3. Бикiв: 0'");
		SetConsoleTextAttribute( h, ((6<<4)|15));
		    printf("\n Це значить, що троe з цих цифр наявнi в вгадуваному числi, але iiх розташування iнше.\n o Звернiть увагу, що цифри у числi не можуть повторюватися\n\n о При грi вдвох правила тi ж самi, але числа ви вгадуєте по черзі навипередки.\n\n");

	goto One;
	Three:
		break;
}
}
