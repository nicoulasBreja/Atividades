#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

	int exercicio;

	do{
		printf("\nEscolha um dos exercicios abaixo para executa-lo\n");
		printf("\n1- Exercicio 1\n");
		printf("\n2- Exercicio 2\n");
		printf("\n4- Exercicio 4\n");
		printf("\n5- Exercicio 5\n");
		printf("\nDigite o numero do exercicio escolhido: ");
		scanf("%d",&exercicio);

		if(exercicio > 5){
			printf("Opcao invalida...");
			system("pause");
			system("cls");
		}	
	}while(exercicio > 5);
	 
	if (exercicio==1){
		
    int l, a, c; 
    float z;

    printf("Entre com valor de L: ");
    scanf("%i", &l);

    printf("Entre com valor de A: ");
    scanf("%i", &a);

    printf("Entre com valor de C: ");
    scanf("%i", &c);

    z = (l+a * 2.3) / c;

    printf("O valor de Z = %0.3f", z);

    return 0;
}
		if(exercicio == 2){
		float altura, peso_i;
	    char sexo;

	    printf("\nQual o seu sexo? Digite M para Maculino ou F para Feminino: ");
	    sexo = getche();

	    printf("\n\nDigite a sua altura: ");
	    scanf("%f", &altura);

	    switch (sexo) {
	        case 'M': {
	            peso_i = (450.7 * altura) / 10;
	            printf("\nSeu peso ideal e: %.2f", peso_i);
	            break;            
	        }
	        case 'm': {
	            peso_i = (450.7 * altura) / 10;
	            printf("\nSeu peso ideal e: %.2f", peso_i);
	            break;  
	        }
	        case 'F': {
	            peso_i = (400.7 * altura) / 10;
	            printf("\nSeu peso ideal e: %.2f", peso_i);
	            break;
	        }
	        case 'f': {
	            peso_i = (400.7 * altura) / 10;
	            printf("\nSeu peso ideal e: %.2f", peso_i);
	            break;
	        }
	    }
	}
		
						if (exercicio==4){
							int numero_de_soma, conta;
							float y, resultado;
							
							conta=1;
							resultado=0;
							
							  while (numero_de_soma<=20){
							  	
							  	printf("\ndigite o valor do numero:\n");
							  	scanf("%f" , y);
							  	
							  	resultado= resultado+y;
							  	conta= conta++;
							  }
							  printf("\n O resultado �: %5f:", resultado);
							  system("pause");
							  
						}else{printf("\nSistema encerrado\n\n");}
						
						return(0);
				 
	}
	
	
