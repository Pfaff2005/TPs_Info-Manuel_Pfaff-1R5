
#include <stdio.h>

int main() {
    int num_estudiantes;
    float calificacion, suma_calificaciones = 0.0, calificacion_max = -1.0, calificacion_min = 101.0;

    do {
        printf("Ingrese la cantidad de estudiantes a evaluar: ");
        scanf("%d", &num_estudiantes);
        if (num_estudiantes <= 0) {
            printf("Error: La cantidad de estudiantes debe ser un número positivo.\n");
        }
    } while (num_estudiantes <= 0);

    for (int i = 0; i < num_estudiantes; i++) {
        do {
            printf("Ingrese la calificación del estudiante %d (0-100): ", i + 1);
            scanf("%f", &calificacion);
            if (calificacion < 0 || calificacion > 100) {
                printf("Error: La calificación debe estar en el rango de 0 a 100.\n");
            }
        } while (calificacion < 0 || calificacion > 100);

        suma_calificaciones += calificacion;
        if (calificacion > calificacion_max) {
            calificacion_max = calificacion;
        }
        if (calificacion < calificacion_min) {
            calificacion_min = calificacion;
        }
    }

    float promedio = (float) suma_calificaciones / num_estudiantes;

    printf("\nPromedio de calificaciones: %.2f\n", promedio);
    printf("Calificación más alta: %.2f\n", calificacion_max);
    printf("Calificación más baja: %.2f\n", calificacion_min);

    return 0;
}
