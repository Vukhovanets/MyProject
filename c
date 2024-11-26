#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Введіть операцію (+, -, *, /): ");
    scanf(" %c", &operator); // Пробіл перед %c для коректного зчитування символу

    printf("Введіть два числа: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Результат: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Результат: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Результат: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Результат: %.2lf\n", result);
            } else {
                printf("Помилка: ділення на нуль неможливе!\n");
            }
            break;
        default:
            printf("Невідома операція: %c\n", operator);
    }

    return 0;
}
