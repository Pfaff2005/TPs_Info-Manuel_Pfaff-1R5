//https://github.com/Pfaff2005/TPs_Info-Manuel_Pfaff-1R5.git
#include <stdio.h>
#define TAM 5
int main()
{
    int codigos[TAM];
    float precios[TAM];
    int caro = 0;
    int barato = 0;
    for (int i = 0; i < TAM; i++)
    {
        printf("Ingrese el codigo de barras (1-999999999):");
        do
        {
            scanf("%d", &codigos[i]);
            if (codigos[i] < 0 || codigos[i] > 999999999)
            {
                printf("Error: El codigo de barras debe ser un entero positivo de hasta 9 cifras. Intente nuevamente.\n");
            }
        } while (codigos[i] < 0 || codigos[i] > 999999999);
        printf("Ingrese el precio:");
        do
        {
            scanf("%f", &precios[i]);
            if (precios[i] < 0)
            {
                printf("Error: El precio debe ser un número positivo. Intente nuevamente.\n");
            }
        } while (precios[i] <= 0);
    }
    printf("  Codigo    Precio");
    for (int i = 0; i < TAM; i++)
    {
        printf("\n%09d   $%.2f", codigos[i], precios[i]);
    }
    for (int i = 0; i < TAM; i++)
    {

        if (precios[i] > precios[caro])
        {
            caro = i;
        }
        if (precios[i] < precios[barato])
        {
            barato = i;
        }
    }
    printf("\nEl producto mas caro es: [%09d] $%.2f", codigos[caro], precios[caro]);
    printf("\nEl producto mas barato es: [%09d] $%.2f", codigos[barato], precios[barato]);
    return 0;
}