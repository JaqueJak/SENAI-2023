#include <stdio.h>
#include <locale.h>

int main(){
	float raio, altura;
	float area, volume;
	float pi = 3.14;
	
	printf("Digite o raio de um cilindro em cm:");
	scanf("%f",&raio);
	printf("Digite a altura do cilindro em cm:");
	scanf("%f",&altura);
	
	float areaLat = 2 * pi * raio * altura;
	float areaBase = 2 * pi * raio * raio;
	area = areaLat + areaBase;
	volume = pi * raio * raio * altura;
	
	printf("Raio = %.2f\n",raio);
	printf("Altura = %.2f\n",altura);
	printf("Area do cilindro = %.3f\n",area);
	printf("Volume do cilindro = %.3f\n",volume);
	
	return 0;
}
