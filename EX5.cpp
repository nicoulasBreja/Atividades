#include <stdio.h>
#include <stdlib.h>

int main() {

 float base, altura, area;
 int contador;
 
 contador = 1;
 
		do{
			printf("\nEntre com a base do tringulo:\n");
			scanf("%f" , &base);
			
			printf("\nEntre com a autura do tringulo:\n");
			scanf("%f" , &altura);
			
			area = base * altura;
			
			printf("A area do tringulo é = %0.3f", area);
			
			contador = contador+ 1;
			
		}  while (contador<=6);
  
  return 0;
}
