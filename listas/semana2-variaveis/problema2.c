#include <stdio.h>

int main(void) {

    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    printf("Fahrenheit = %.1f\n", fahrenheit);
    printf("Kelvin = %.1f\n", kelvin);

    return 0;
}