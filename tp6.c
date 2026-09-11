#include <stdio.h>
#include <math.h>

///////////////PROTOTIPOS//////////////
float calcularAreaRectangulo (float, float);
float calcularPerimetroRectangulo (float, float);
float calcularAreaCirculo (float);
float calcularPerimetroCirculo (float);
void imprimirResultados (float, float);
void rectangulo (void);
void circulo (void);


/////////////////FUNCIONES///////////////////////////
float calcularAreaRectangulo (float longitud, float altura){
	float area;
	area = longitud * altura;

return area;
}

float calcularPerimetroRectangulo (float longitud, float altura){
	float perimetro;
	perimetro = (longitud * 2) + (altura * 2);

return perimetro;
}

float calcularAreaCirculo (float radio){
	float area;
	area = M_PI * pow(radio, 2);

return area;
}

float calcularPerimetroCirculo (float radio){
	float perimetro;
	perimetro = 2 * M_PI * radio;

return perimetro;
}

void imprimirResultados (float area, float perimetro){
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}

void rectangulo (void){
	float longitud, altura, area, perimetro;

	printf("Opcion de rectangulo seleccionada\n");

	printf("Ingrese la longitud del rectangulo: ");
	scanf("%f", &longitud);

	printf("Ingrese la altura del rectangulo: ");
	scanf("%f", &altura);

	area = calcularAreaRectangulo(longitud, altura);
	perimetro = calcularPerimetroRectangulo(longitud, altura);

	imprimirResultados(area, perimetro);
}

void circulo (void){
	float radio, area, perimetro;

	printf("Opcion de circulo seleccionada\n");

	printf("Ingrese el radio del circulo: ");
	scanf("%f", &radio);

	area = calcularAreaCirculo(radio);
	perimetro = calcularPerimetroCirculo(radio);

	imprimirResultados(area, perimetro);
}


int main(int argc, char *argv[]) {
	int opcion;

	do {
		printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
		scanf("%d", &opcion);

		if (opcion != 1 && opcion != 2){
			printf("Opcion invalida. Intente nuevamente.\n");
		}

	} while (opcion != 1 && opcion != 2);

	switch (opcion){
		case 1:
			rectangulo();
			break;

		case 2:
			circulo();
			break;
	}

return 0;
}
