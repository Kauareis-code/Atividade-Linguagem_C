#include <stdio.h> // diretiva include

int main() {
    // Declaração de variáveis
    int numero;
    int armadura;
    
    // Solicita ao usuário para inserir um número de cavalos 
    printf("Digite uma quantidade de cavalo: ");
    scanf("%d", &numero); // Captura a entrada do usuário
    
    // Multiplicação do numero de cavolos mais a armadura que se equivale a 4
    armadura = numero * 4; 
    
    // Exibe o número de cavalos e o numero de armadura
    printf("Numero de cavalos: %d\n", numero);
    printf("Total de armadura: %d\n", armadura);
    
    return 0;
}
