#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

    int fin,num,suma;
    srand(time(NULL));
    printf("BLACKJACK");
    printf("\n\t Instrucciones: ");
    printf("\n\t La suma de sus cartas debe ser igual a 21 para ganar.\n\tSi excede ese limite pierde.");
    fin = 0;
    suma = 0;
    while(fin!=2){
        num = (rand()%10)+1;
		suma = suma + num;                     
        printf("\nLa suma es de: %d\n\n",suma);
        printf("¿Desea pedir otra carta? \nSI>>Pulse 1\nNO>>Pulse 2\n\n");
        scanf("%d",&fin);
        if (suma>21){
        	printf("¡Ha perdido! \nLa suma excede los 21\n\n");
            fin = 2;
            }
        if (suma==21) {
        	printf("¡Ha ganado! \n El premio es suyo.\n\n Enhorabuena\n\n\n");
        	fin = 2;
		}
    }
system("pause");
}  
