#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>

int main(int argc, char* argv)
{
	setlocale(LC_ALL,"portuguese");
	int i, n,cp,tc,mc,pt;

	
	printf("--------Criptografando--------\n");
	printf("\nInsira sua chave publica: ");
	scanf("%i",&cp);
	printf("\nInsira sua mensagem:");
	scanf("%i",&n);
	printf("\nInsira o tamanho do seu conjunto: ");
	scanf("%i",&tc);0
	pt=pow(n,cp);
	mc = pt%tc;
	printf("\n\n %d\n",mc);
	system ("PAUSE");
	return 0;
	
	
}
