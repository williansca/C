#include <stdio.h>

/*constante numero de tentativas para usar como limite no for*/
//#define NUMERO_DE_TENTATIVAS 3

int main () {
	
	printf("######################################\n");
	printf("## BEM VINDO AO JOGO DE ADIVINHACAO ##\n");
	printf("######################################\n");
	
	int numero = 9;
	int chute;
    
    int ganhou = 0;
    int tentativas = 1;
    
    
    /*for Looping contado*/
    //for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) 
    while (ganhou == 0){
        
        //printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Tentativa numero: %d\n", tentativas);
        
        printf("Chute um numero de 1 a 10: ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);
        
        if(chute < 0) {
            printf("Somente numeros positivos\n");
            //i--;
            /*para a execucao do bloco de codigo mas o for continua*/
            continue;
        }
        
        int acertou = (chute == numero);
        int maior = chute > numero;
        //int menor = chute < numero;
        
        /*printing boolean variable that shows 1 for true and 0 for false*/
        //printf("Acertou: %d\n", acertou);
        
        if (acertou) {
            printf("Voce acertou! Parabens!\n\n");
            
            //break;
            ganhou = 1;
            
        } else if(maior){ 
            /* a variavel maior existe somente no escopo do else 
            int maior = chute > numero;*/
            printf("Voce errou! Seu chute foi maior do que o numero secreto\n\n");
            
        } else  {
            printf("Voce errou! Seu chute foi menor do que o numero secreto\n\n");
        } 
        
        tentativas++;
    }
    
    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas", tentativas-1);
}
    
    
