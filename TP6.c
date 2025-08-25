//https://github.com/Pfaff2005/TPs_Info-Manuel_Pfaff-1R5.git

#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo(int x, int y);
float calcularPerimetroRectangulo(int x, int y);
float calcularDiagonalRectangulo(int x, int y);
float calcularAreaCirculo(int x);
float calcularPerimetroCirculo(int x);
void imprimirResultados(float x, float y, int z);

int main(int argc, char *argv[])
{
	int altura = 0;
	int longitud = 0;
	int radio = 0;
	int caso = 0;
	printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo):");
	do
	{
		scanf("%d", &caso);
	} while (caso != 1 && caso != 2);
	switch (caso)
	{
	case 1:
		printf("Opcion de rectangulo seleccionada\n");
		printf("Ingrese la longitud del rectangulo:");
		scanf("%d", &longitud);
		printf("Ingrese la altura del rectangulo:");
		scanf("%d", &altura);
		imprimirResultados(calcularAreaRectangulo(longitud, altura), calcularPerimetroRectangulo(longitud, altura), caso);
		printf("la diagonal del rectangulo es: %.2f\n", calcularDiagonalRectangulo(longitud, altura));
		break;
	case 2:
		printf("Opcion de Circulo seleccionada\n");
		printf("Ingrese el radio del circulo:");
		scanf("%d", &radio);
		imprimirResultados(calcularAreaCirculo(radio), calcularPerimetroCirculo(radio), caso);
		break;
	}

	return 0;
}

float calcularAreaRectangulo(int x, int y)
{
	float area = x * y;
	return area;
}

float calcularPerimetroRectangulo(int x, int y)
{
	float perimetro = 2 * x + 2 * y;
	return perimetro;
}

float calcularDiagonalRectangulo(int x, int y)
{
	float Diagonal = sqrt(x * x + y * y);
	return Diagonal;
}
float calcularAreaCirculo(int x)
{
	float area = 3.14 * x * x;
	return area;
}
float calcularPerimetroCirculo(int x)
{
	float perimetro = 3.14 * 2 * x;
	return perimetro;
}

void imprimirResultados(float x, float y, int z)
{
	if (z == 1)
	{
		printf("El area del rectangulo es: %.2f\n", x);
		printf("El peremetro del rectangulo es: %.2f\n", y);
	}
	else
	{
		printf("El area del circulo es: %.2f\n", x);
		printf("El peremetro del circulo es: %.2f\n", y);
	}
	return;
}
