#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>

int main(int argc, char* argv)
{
	setlocale(LC_ALL,"portuguese");
	int  numeroPrimoUm, numeroPrimoDois, tamanhoDoConjunto, euller, chavePublica;
	
	printf("Digite um número primo:");
	scanf("%d", &numeroPrimoUm);
	printf("Digite um número primo:");
	scanf("%d", &numeroPrimoDois);
	tamanhoDoConjunto = numeroPrimoUm * numeroPrimoDois;
	euller = (numeroPrimoUm - 1) * (numeroPrimoDois - 1);
	printf("Digite um número primo entre 1 e %d:", euller);
	scanf("%d", &chavePublica);
	
	printf("\nChave publica é %d | Tamanho do Conjunto é %d.\n", chavePublica, tamanhoDoConjunto);
	system ("PAUSE");
	return 0;
	
	
}
