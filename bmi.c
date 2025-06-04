#include <stdio.h>

int main() {
    float peso, altura, imc;

    do {
        printf("Ingrese el peso en kg: ");
        scanf("%f", &peso);
        if (peso < 0) {
            printf("Error: El peso no puede ser negativo. Intente nuevamente.\n");
        }
    } while (peso < 0);

    do {
        printf("Ingrese la altura en metros: ");
        scanf("%f", &altura);
        if (altura <= 0) {
            printf("Error: La altura debe ser un número positivo. Intente nuevamente.\n");
        }
    } while (altura <= 0);

    imc = peso / (altura * altura);

    printf("\nÍndice | Condición\n");
    printf("-----------------------------\n");
    printf("<18.5  | Bajo peso\n");
    printf("18.5 a 24.9 | Normal\n");
    printf("25.0 a 29.9 | Sobrepeso\n");
    printf(">=30   | Obesidad\n\n");

    printf("\nSu índice de masa corporal es: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Condición: Bajo peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Condición: Normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Condición: Sobrepeso\n");
    } else {
        printf("Condición: Obesidad\n");
    }

    return 0;
}