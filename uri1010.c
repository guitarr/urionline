#include<stdio.h>
#include<stdlib.h>
main(){
	int peca1, peca2, numpeca1, numpeca2;
	double valorunipeca1, valorunipeca2, valor;
	scanf("%d%d%lf", &peca1, &numpeca1, &valorunipeca1);
	scanf("%d%d%lf", &peca2, &numpeca2, &valorunipeca2);
	valor=(numpeca1*valorunipeca1) + (numpeca2*valorunipeca2);
	printf("VALOR A PAGAR: R$ %.2lf\n", valor);
	system("pause>>null");
	
}
