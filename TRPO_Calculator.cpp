﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <clocale>
#include <stdlib.h>
#include "TRPO_Functions.h"
using namespace std;

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    double a, b;
    double c = 0;
    char d;
    int p = 1;
    while (p != 2)
    {
        printf("1 - Рассчитать выражение \n2 - Выйти \n");
        scanf("%d", &p);
        if (p != 1) break;
        system("cls");
        printf("Введите выражение и нажмите enter \n Пример \n A+B \n A-B \n A*B \n A/B \n A^B \n");
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
