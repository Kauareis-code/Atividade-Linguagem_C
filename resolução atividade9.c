#include <stdio.h> // diretiva include

int main() {
    // Declaração de variável
    float peso;
    
    // Solicita ao usuário para inserir o peso
    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);
    
    // Calcula e exibe o novo peso se a pessoa engordar 15%
    printf("Peso com 15%% a mais: %.2f kg\n", peso * 1.15);
    
    // Calcula e exibe o novo peso se a pessoa emagrecer 20%
    printf("Peso com 20%% a menos: %.2f kg\n", peso * 0.80);
    
    return 0;
}