#include <stdio.h>

int main(){

	int F;
	for (F = 40; F <= 60; F ++){

		float C = (5.0/9.0) * (F-32);

		printf("\n\nA temperatura %i em Fahrenheit corresponde a %0.2f em Celsius", F, C); 
	}	

	return(0);
}
