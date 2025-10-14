#include <stdio.h>

int main() {
    float num1, num2, resultado;  
    int operacao; 
    char continuar;  

    do {
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);  

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);  

        printf("Escolha a operacao:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        scanf("%d", &operacao);  
        
        if (operacao == 1) {
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
        } 
        else if (operacao == 2) {
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
        } 
        else if (operacao == 3) {
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
        } 
        else if (operacao == 4) {
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
        } 
        else {
            printf("Erro: Operacao invalida.\n");
        }

        printf("Deseja realizar outra operacao? (1 - Sim / 2 - Nao): ");
        scanf(" %c", &continuar);  
    } while (continuar == '1');  

    printf("Calculadora encerrada\n");

    return 0;  
}
