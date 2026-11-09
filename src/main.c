#include <stdio.h> 

#define TAM_BUFFER 4 // Defina o tamanho do vetor

int main() { 
// ENTRADA 
    float leitor_temperaturas[TAM_BUFFER];
    printf("Insira temperaturas de hoje: \n");
    for (int i = 0; i < TAM_BUFFER; i++) {
        scanf("%f", &leitor_temperaturas[i]);
    }
// PROCESSAMENTO 
    float soma = 0.0;
    float maior = leitor_temperaturas[0];
    float menor = leitor_temperaturas[0];

    for (int i = 0; i < TAM_BUFFER; i++) {
        soma += leitor_temperaturas[i];

        if (leitor_temperaturas[i] > maior) {
            maior = leitor_temperaturas[i];
        } 
        if (leitor_temperaturas[i] < menor) {
            menor = leitor_temperaturas[i];
        }
    } 
    float media_temp = soma / TAM_BUFFER;

    int acima_da_media = 0;
    for (int i = 0; i < TAM_BUFFER; i++) {

        if (leitor_temperaturas[i] > media_temp) {
            acima_da_media++;
        }
        
    }
// EXIBIÇÃO 
    printf("MÉTRICAS DE CONTROLE\n");
    printf("Média de Temperaturas: %.1f °C\n", media_temp);
    printf(" - Maior registro: %.1f °C\n - Menor registro: %.1f °C\n", maior, menor); 
    printf("Registro de %d temperaturas acima da média\n", acima_da_media);

    return 0; 
}