#include <stdio.h>
#include <Windows.h>

int main(){
//Declaro as variaveis necessarias
int a, b, auxil, numerouser, i;

// Declaro os valores delas
a = 0;
b = 1;

printf("\nSoftware Fibonnaci Basico\n\n");

//peço para o usuario digitar um numero que representarar a quantidade de vezes q ira executar
printf("Digite um número: \n$");
scanf("%d", &numerouser);
printf("\nSequencia de Fibonnaci:\n\n");


//função usando o laço de repetição for
for(i = 0; i < numerouser; i++){

//
	auxil = a + b;
	a = b;
	b = auxil;
	printf("%d ", auxil);
	

}
printf("\n\nCriado By: Pedro \"Maker\" Cadete\n\n");
}
