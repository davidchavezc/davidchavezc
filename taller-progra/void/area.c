#include <stdio.h>
int b, h, area, sel;
const int pi = 3.14;
void area_cuadrado()
{
	area=b*b;	
}
void area_triangulo()
{
	area=b*h/2;
}
void area_circulo()
{
	area=b*b*pi;
}
void area_rectangulo()
{
	area=b*h;
}
int main()
{
	printf("--CALCULAR ÁREA DE FIGURA--\n");
	printf("1. Cuadrado \n2. Rectangulo \n3. Triángulo \n4. Círculo");
	printf("\nIndique la figura a calcular: "); scanf("%d", &sel);
	switch(sel)
	{
		case(1):
			printf("\nIndique la medida de los lados del cuadrado: "); scanf("%d",&b);
			area_cuadrado();
			printf("\nEl área del cuadrado es: %d", area);
			break;
		case(2):
			printf("\nIndique la medida de la base del rectángulo: "); scanf("%d",&b);
			printf("\nIndique la medida de la altura del rectángulo: "); scanf("%d",&h);
			area_rectangulo();
			printf("\nEl área del rectángulo es: %d", area);
			break;
		case(3):
			printf("\nIndique la medida de la base del triángulo: "); scanf("%d",&b);
			printf("\nIndique la medida de la altura del triángulo: "); scanf("%d",&h);
			area_triangulo();
			printf("\nEl área del triángulo es: %d", area);
			break;
		case(4):
			printf("\nIndique la medida del radio del círculo: "); scanf("%d",&b);
			area_circulo();
			printf("\nEl área del círculo es: %d", area);
			break;
		default:
			printf("\nERROR... Elija un valor de la lista de figuras.");
			return(1);
	}
	printf("\n");
	return 0;
}
