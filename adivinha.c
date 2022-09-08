#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
	//prints header
	printf("######################################\n");
	printf("## BEM VINDO AO JOGO DE ADIVINHACAO ##\n");
	printf("######################################\n");
    
    /*needed to generate random numbers*/
    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();
	
	int numero = numerogrande % 100;
	int chute;
    
    int tentativas = 1;
    
    double pontos = 1000;
    
    
 
    while (1){
        
        printf("Tentativa numero: %d\n", tentativas);
        
        printf("Qual o seu chute?: ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);
        
        if(chute < 0) {
            printf("Somente numeros positivos\n");

            continue;
        }
        
        int acertou = (chute == numero);
        int maior = chute > numero;
   
        
        if (acertou) {
            printf("Voce acertou! Parabens!\n\n");
            
            break;
            
        } else if(maior){ 

            printf("Voce errou! Seu chute foi maior do que o numero secreto\n\n");
            
        } else  {
            printf("Voce errou! Seu chute foi menor do que o numero secreto\n\n");
        } 
        
        tentativas++;
        
        double pontosperdidos = abs(chute - numero) / (double)2;
        pontos -= pontosperdidos;
    }
    
    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas\n", tentativas);
    
    /*f mostra valor double, .1 antes é para o total de casas apos o ponto*/
    printf("Total de pontos: %.1f\n", pontos);
}
    
    
