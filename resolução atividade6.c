#include <stdio.h> // diretiva include

int main() {
    // Declaração de variáveis
    int numero;
    int metade;
    int dobro;
    
    // Solicita ao usuário para inserir um número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero); // Captura a entrada do usuário
    
    // Calcula a metade e o dobro do número
    metade = numero / 2; 
    dobro = numero * 2;
    
    // Exibe o número, a metade e o dobro
    printf("Número digitado: %d\n", numero);
    printf("Metade do número: %d\n", metade);
    printf("Dobro do número: %d\n", dobro);
    
    return 0;
}