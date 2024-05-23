#include <stdio.h> //EXERCÍCIO 01

int main(void) {
    int valor = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", valor, i, valor * i);
    }
    return 0;
}


#include <stdio.h> //EXERCÍCIO 02

int main (void) {
    int number = 0, maior = 0, menor = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite um valor: ");
        scanf("%d", &number);
        if (number > maior) {
            maior = number;
        } else if (number < menor || menor == 0) {
            menor = number;
        }
    }
    printf("Maior numero digitado: %d\nMenor numero digitado:%d", maior, menor);
    return 0;
}


#include <stdio.h> //EXERCÍCIO 03

int main (void) {
    char sexo;
    float altura = 0, maiorAltura = 0, menorAltura = 0, media = 0, somaAlturaHomem = 0;
    int quantF = 0, quantM = 0;

    for (int i = 0; i<5; i++) {
        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        printf("Sexo? [ M / F ] ");
        scanf(" %c", &sexo);
        if (altura > maiorAltura) {
            maiorAltura = altura;
        } else if (altura < menorAltura || menorAltura == 0) {
            menorAltura = altura;
        } 
        if (sexo == 'f' || sexo == 'F') {
            quantF++;
        } else {
            quantM++;
            somaAlturaHomem += altura;
        }
    }
    media = somaAlturaHomem / quantM;
    printf("Maior altura do grupo: %.2fm\nMenor altura do grupo: %.2fm\nMedia altura dos homens: %.2fm\nQuantidade de mulheres: %d", maiorAltura, menorAltura, media, quantF);
    return 0;
}


#include <stdio.h> //EXERCÍCIO 04

int main (void) {
    char resposta, sexo;
    int quantSim = 0, quantNao = 0, quantSimF = 0, quantNaoM = 0;
    float percSimF = 0, percNaoM = 0;

    for (int i = 0; i < 10; i++) {
        printf("\nQual o seu sexo? [M / F] ");
        scanf(" %c", &sexo);    
        printf("Gostou do nosso produto? [S / N] ");
        scanf(" %c", &resposta);

        if (resposta == 's' || resposta == 'S') {
            quantSim++;
            if (sexo == 'f' || sexo == 'F') {
                quantSimF++;
            }
        } else {
            quantNao++;
            if (sexo == 'm' || sexo == 'M') {
                quantNaoM++;
            }
        }
    }
    percSimF = (quantSimF * 100) / 10;
    percNaoM = (quantNaoM * 100) / 10;
    printf("\nQuantidade de pessoas que responderam sim: %d\nQuantidade de pessoas que responderam nao: %d\nPorcentagem de pessoas do sexo feminino que responderam sim: %.2f%%\nPorcentagem de pessoas do sexo masculino que responderam nao: %.2f%%", quantSim, quantNao, percSimF, percNaoM);
    return 0;
}


#include <stdio.h> //EXERCÍCIO 05

int main (void) {
    float altura[5] = {}, soma = 0, media = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a altura da %dnd pessoa: ", i+1);
        scanf("%f", &altura[i]);
        soma += altura[i];
    }
    media = soma / 5;
    printf("Media de altura dos vetores: %.2f", media);
    return 0;
}


#include <stdio.h> //EXERCÍCIO 06

int main (void) {
    float salario[4] = {}, media = 0, salariosMenorMedia[] = {};

    for (int i = 0; i < 4; i++) {
        printf("Digite o salario da %dnd pessoa: R$", i+1);
        scanf("%f", &salario[i]);
        media += salario[i];
    }
    media = media / 4;
    printf("Salarios abaixo da media (R$%.2f)\n", media);
    for (int i = 0; i < 4; i++) {
        if (salario[i] < media) {
            salariosMenorMedia[i] = salario[i];
            printf("R$%.2f\n", salariosMenorMedia[i]);
        }

    }
    return 0;
}


#include <stdio.h> //EXERCÍCIO 07

int main (void) {
    int idade[5], idadeMaiorAltura;
    float altura[5], maiorAltura;
    for (int i = 0; i < 5; i++) {
        printf("Digite a idade da %dnd pessoa: ", i+1);
        scanf("%d", &idade[i]);
        printf("Digite a altura da %dnd pessoa: ", i+1);
        scanf("%f", &altura[i]);
        if (altura[i] > maiorAltura) {
            maiorAltura = altura[i];
            idadeMaiorAltura = idade[i];
        }
    }
    printf("Idade da pessoa mais alta: %d anos com %.2fm de altura", idadeMaiorAltura, maiorAltura);
    return 0;
}
#include <stdio.h> //EXERCÍCIO 08

int main (void) {

    return 0;
}