#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <clocale>
#include <stdlib.h>
#include "TRPO_Functions.h"
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    double c = 0;
    char d;
    int p = 1;
    while (p != 2)
    {
        printf("\tКалькулятор\n");
        printf("-----------Меню-----------\n");
        printf("|1 - Рассчитать выражение | \n|2 - Выйти"); 
        printf("%18s", "|\n");
        printf("--------------------------\n");
        printf("Ввод: ");
        scanf("%d", &p);
        if (p != 1) break;
        system("cls");
        printf("------------------Калькулятор-----------------\n");
        printf("|Введите выражение и нажмите enter\t     | \n|Пример ввода: | A+B | A-B | A*B | A/B | A^B | \n");
        printf("----------------------------------------------\n");
        printf("Ввод: ");
        scanf("%lf%c%lf", &a, &d, &b);
        while (getchar() != '\n');
        switch (d)
        {
        case '+': {sum(a, b);      printf("Ответ = %lf\n", sum(a, b)); }; break;
        case '-': {mynus(a, b);    printf("Ответ = %lf\n", mynus(a, b)); }; break;
        case '*': {multiply(a, b); printf("Ответ = %lf\n", multiply(a, b)); }; break;
        case '/': {share(a, b);    printf("Ответ = %lf\n", share(a, b)); }; break;
        case '^': {elevate(a, b);  printf("Ответ = %lf\n", elevate(a, b)); }; break;
        default:
            printf("Ошибка ввода\n");
            continue;
        }
    }
}
