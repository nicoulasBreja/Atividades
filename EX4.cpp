#include <stdio.h>
#include <stdlib.h>

int main() {
    int contador;
    float x , soma;
    
    contador=1;
    soma=0;
    
    while(contador<=20){
    	printf ("\n Digite o valor a ser somado: \n");
    	scanf ("%f" , &x);
    	
    	soma=x+soma;
		contador= contador+1; }
		
		printf("\nSoma dos elementos da sequencia: %2f\n", soma);
    system("pause");
    return 0;
}
