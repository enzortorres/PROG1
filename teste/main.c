#include <stdio.h>

int main(void) {
    int digitado = 0, jaCadastrado[5] = {0,0,0,0,0}, qtd = 0;

    for (int i = 0; i < 5; i++) {
        printf("\nDigite o %do codigo de venda: ", i+1);
        scanf("%d", &digitado);
        printf("Digitado: %d\n", digitado);
        for(int l = 0; l < 5; l++) {
            printf("%d, ", jaCadastrado[l]);
        }
        printf("\n");
        for (int k = 0; k <= qtd; k++) {
            if (digitado == jaCadastrado[k]) {
                while (jaCadastrado[k] == digitado) {
                    printf("Codigo ja cadastrado!\nDigite o %do codigo de venda: ", i+1);
                    scanf("%d\n", &digitado);
                    for(int l = 0; l < 5; l++) {
                        printf("%d\n, ", jaCadastrado[l]);
                    }
                }
            }
        }
        jaCadastrado[i] = digitado;
        qtd++;
        for(int l = 0; l < 5; l++) {
            printf("%d, ", jaCadastrado[l]);
        }
    }
    return 0;
}