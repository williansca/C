#include <stdio.h>

/*
constante numero de tentativas para usar como limite no for

#define NUMERO_DE_TENTATIVAS 3

*/

int main () {
	//prints header
	printf("######################################\n");
	printf("## BEM VINDO AO JOGO DE ADIVINHACAO ##\n");
	printf("######################################\n");
	
	int numero = 42;
	int chute;
    
    int tentativas = 1;
    
    int pontos = 1000;
    
    
    /*for Looping contado
      for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) */
    while (1){
        
        //printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Tentativa numero: %d\n", tentativas);
        
        printf("Chute um numero de 1 a 10: ");
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
        
        int pontosperdidos = (chute - numero) / 2;
        pontos -= pontosperdidos;
    }
    
    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas\n", tentativas-1);
    printf("Total de pontos: %d", pontos);
}
    
    
