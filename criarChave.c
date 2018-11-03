#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>

int main(int argc, char* argv)
{
	setlocale(LC_ALL,"portuguese");
	int  primo[2], tamanhoDoConjunto, euller, chavePublica,chavePrivada,cont,i;
	int primos[46] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199};
	srand(time(NULL));
	
	cont=0;
	while(cont<2){
		i = (rand() % 46);
			primo[cont]=primos[i];
		cont++;
	}
	//Criação da chave publica
	tamanhoDoConjunto = primo[1] * primo[2];
	euller = (primo[0] - 1) * (primo[1] - 1);
	
	chavePublica = primo[2];
	while(chavePublica>=euller){
	i = (rand() % 46);
		chavePublica=primos[i];
	}
	//Criação da chave privada
	chavePrivada = 1;
	while(((chavePublica*chavePrivada)%euller) !=1 ){
		chavePrivada++;
	}
	printf("\nSua chave privada é: %d\nSua chave pública é: %d\nO tamanho do conjunto é: %d\n",chavePrivada,chavePublica,tamanhoDoConjunto);
	system ("PAUSE");
	return 0;
	
	
}
