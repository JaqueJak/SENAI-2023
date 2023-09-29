#include <stdio.h>
#include <locale.h>

void monstrar(int vetor[], int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d\t[%d]\n", vetor[i]);
}

int buscar(int *vetor, int n, int valor){
	int i, posicao = -1;
	for(i = 0; i < n; i++)`{
		if(valor == vetor[i]){
			posicao = i;
			break;
		}
	}
	
	return posicao;
}

int main(){
	setlocale(LC_ALL,"");
	int range[] = {16, 15, 24, 32, 45, 0, 3, 8, 7};
	int n = sizeof(range) / sizeof(range[0]);
	mostrar(range, n);
	
	int valor;
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &valor);
	
	int resultado = buscar(range, valor);
	if(resultado == -1){
		printf("Valor n�o encontrado!");
	}else{
		printf("O valor foi encontrado na posi��o %d", resultado);
	}
	
	return 0;
}
