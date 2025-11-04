#include <stdio.h>

int main() {
    int numero;
    int contador;
    int resultado;
    int fazer_novamente = 1; 

    printf("Tabuada\n");

    while (fazer_novamente == 1) {
        
        printf("\nDigite um número: ");
        
        
        if (scanf("%d", &numero) != 1) {
            printf("Entrada inválida. Digite apenas números.\n");
            
            while(getchar() != '\n'); 
            continue; 
        }
        
        
        printf("\nTabuada do %d:\n", numero);
        for (contador = 1; contador <= 10; contador++) {
            resultado = numero * contador;
            printf("%d x %d = %d\n", numero, contador, resultado);
        }

        
        printf("\nQuer fazer outra tabuada? (1 = Sim / 2 = Não): ");
        
        
        while(getchar() != '\n');
        
        
        if (scanf("%d", &fazer_novamente) != 1 || (fazer_novamente != 1 && fazer_novamente != 2)) {
            printf("Opção inválida. Digite 1 para Sim ou 2 para Não.\n");
            fazer_novamente = 1; 
        }
    }
    
    printf("\nTabuada encerrada\n");
    
    return 0;
}
