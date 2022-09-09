#include <stdio.h>

int main() {
    
    //prints header
	printf("######################################\n");
	printf("## BEM VINDO AO JOGO DE ADIVINHACAO ##\n");
	printf("######################################\n");
    
    
    int numerosecreto = 40;
    int chute;
    int tentativas = 1;
    int numerotentativas = 5;
    int acertou = 0;
    

    for(int i = 1; i <= numerotentativas; i++){
        
        printf("Tentativa %d\n", tentativas);
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
    }
    //printf("%d\n", acertou);
    printf("FIM DE JOGO\n");
    if(acertou) {
        printf("Voce ganhou!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos");
    } else {
        printf("Voce perdeu! Tente novamente!");
    }
    
    
}