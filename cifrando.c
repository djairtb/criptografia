#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

#include<string.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int lista[10];
	char palavra[] = "gabriel";
	for(int i = 0; palavra[i] != '\0'; i++) {
		lista[i] = palavra[i];
		lista[i] = lista[i] + 10;
		printf("%c\n",lista[i]);
	}
	system ("PAUSE");
	return 0;
	
}
