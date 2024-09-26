#include <stdio.h> // diretiva include

int main() {
    // Declaração de variáveis
    float nota1, nota2, nota3;
    
    // Solicita ao usuário para inserir as três notas e calcula a média
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    // Calcula e exibe a média aritmética das notas
    printf("Média das notas: %.2f\n", (nota1 + nota2 + nota3) / 3);
    
    return 0;
}