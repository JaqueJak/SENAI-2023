#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int num, i;
	unsigned long long vezes = 1;
	
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d\n", &num);
	
	if(num < 0){
		printf("Conta n�o programada para n�meros negativos!\n");
	}else {
		for (i = 0; i <= num; i++){
			vezes *= i;
		}
		printf("A soma � %d � %llu\n", num, vezes);
	}
	
	return 0;
}
