#include <stdio.h>

int main(void) {
    int calificacion;
    
    printf("Ingrese la calificación:");
    scanf("%d", &calificacion);
    
    if (calificacion >= 90) {
        printf("Calificación: A\n");
    } else if (calificacion >= 80  && calificacion < 90) {
        printf("Calificacón: B\n");
    } else if (calificacion >= 70 && calificacion < 80) {
        printf("Calificación: C\n");
    } else if (calificacion >= 60 && calificacion < 70) {
        printf("Calificación: D\n");
    } else if (calificacion < 60) {
        printf("Calificación: F\n");
    } 
    
    return 0;
}