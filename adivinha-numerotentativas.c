#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    //prints header
	printf("######################################\n");
	printf("## BEM VINDO AO JOGO DE ADIVINHACAO ##\n");
	printf("######################################\n");
    
    /*needed to generate random numbers*/
    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();
	
    
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;
    
    
    int nivel;
    printf("\n\nQual o nivel de dificuldade?\n");
    printf("(1) Facil  (2) Medio  (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    int numerotentativas;
    
    switch(nivel) {
        case 1:
            numerotentativas = 20;
            break;
        case 2:
            numerotentativas = 15;
            break;
        default:
            numerotentativas = 10;
            break;
    }

    for(int i = 1; i <= numerotentativas; i++){
        
        printf("\nTentativa %d\n", tentativas);
        printf("Qual e o seu chute?\n");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        
        if(chute < 0){
            printf("Somente numeros positivos");
            
            continue;
        }
        
        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        
        if(acertou){
            break;
        }
        else if(maior){
            printf("Voce errou! Seu chute foi maior\n");
            
        }
        else{
            printf("Voce errou! Seu numero foi menor\n");
            
        }
        tentativas++;
        
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }
    //printf("%d\n", acertou);
    printf("\nFIM DE JOGO\n");
    if(acertou) {
        printf("Voce ganhou!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("Voce perdeu! Tente novamente!\n");
    }
    
    
}