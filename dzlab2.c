#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");

    float distance = 390.0f;
    float rr_consumption = 15.0f;
    float ford_consumption = 36.0f;
    float x;

    puts("Введите стоимость 1 галлона бензина (в фунтах):");
    scanf("%f", &x);

    float rr_gallons = distance / rr_consumption;
    float rr_cost = rr_gallons * x;

    float ford_gallons = distance / ford_consumption;
    float ford_cost = ford_gallons * x;

    float savings = rr_cost - ford_cost;

    printf("Стоимость поездки на Роллс-Ройсе: %.2f фунтов\n", rr_cost);
    printf("Сумма, которую он сбережет на Форд-Эскорт: %.2f фунтов\n", savings);

    return 0;
}