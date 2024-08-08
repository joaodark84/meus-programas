#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Função para contar vogais, inverter o vetor e contar dígitos
int conta_letra(char *vetor, int tam, char *vetor2, int *val) {
    int cont_vogais = 0;

    for (int i = 0; i < tam; i++) {
        printf("Digite um valor para vet2: ");
        scanf(" %c", &vetor2[i]);

        if (tolower(vetor[i]) == 'a' || tolower(vetor[i]) == 'e' || tolower(vetor[i]) == 'i' || tolower(vetor[i]) == 'o' || tolower(vetor[i]) == 'u') {
            cont_vogais++;
        }

        if (isdigit(vetor[i])) {
            (*val)++;
        }
    }

    // Inverte o vetor2
    for (int i = 0; i < tam / 2; i++) {
        char temp = vetor2[i];
        vetor2[i] = vetor2[tam - i - 1];
        vetor2[tam - i - 1] = temp;
    }

    return cont_vogais;
}

int main() {
    char *vet;
    char *vet2;
    int tam, valor = 0, resposta;

    printf("Digite o tamanho: ");
    scanf("%d", &tam);

    vet = (char *)malloc(tam * sizeof(char));
    vet2 = (char *)malloc(tam * sizeof(char));

    if (!vet || !vet2) {
        printf("ERRO na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < tam; i++) {
        printf("Digite uma letra ou um número: ");
        scanf(" %c", &vet[i]);
    }

    resposta = conta_letra(vet, tam, vet2, &valor);

    printf("Vogais = %d\nDígitos = %d\nVetor2 (invertido): ", resposta, valor);
    for (int i = 0; i < tam; i++) {
        printf("%c ", vet2[i]);
    }

    free(vet);
    free(vet2);

    return 0;
}
