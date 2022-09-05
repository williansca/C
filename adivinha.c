#include <stdio.h>

/*constante numero de tentativas para usar como limite no for*/
#define NUMERO_DE_TENTATIVAS 3

int main () {
	
	printf("######################################\n");
	printf("## BEM VINDO AO JOGO DE ADIVINHACAO ##\n");
	printf("######################################\n");
	
	int numero = 9;
	int chute;
    
    
    /*Looping*/
    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
        
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        
        printf("Chute um numero de 1 a 10: ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);
        
        int acertou = (chute == numero);
        
        printf("Acertou: %d\n", acertou);
        
        if (acertou) {
            printf("Voce acertou! Parabens!\n");
            
            /*se acertou o codigo para*/
            break;
        }
        else {
            /* a variavel maior existe somente no escopo do else */
            int maior = chute > numero;
            
            if( maior) {
                printf("Voce errou! Seu chute foi maior do que o numero secreto\n");
            } else  {
                printf("Voce errou! Seu chute foi menor do que o numero secreto\n");
            } 
        }
        
    }
    
    printf("Fim de jogo\n");
}