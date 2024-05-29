#include <stdio.h>

int main(void) {
    float valorTotalVenda[5], valorTotal, valorCamisa[5];
    char tamanhoCamisa[5], voltarMenu = 'S';
    int qtdCamisa[5], codVenda[5], digitado = 0, teste, tipoVenda[5], menuCodigo=0, menu;

    for (int i = 0; i < 5; i++) {
        do { 
            teste = 0;
            printf("Digite o codigo da %da venda (1 a 5): ", i+1);
            scanf("%d", &digitado);
            if (digitado < 1 || digitado > 5) { 
                printf("Codigo invalido!\n");
                teste = 1; // valor definido para caso o código for inválido, repetir o pergunta.
            }
            for (int j=0; j<i; j++) {
                if (digitado == codVenda[j]) {
                    printf("Codigo ja cadastrado!\n");
                    teste = 1; // valor definido para caso o código digitado já esteja cadastrado, repetir a pergunta.
                    break;
                }
            }
        } while (teste == 1);
        codVenda[i] = digitado;

        do { 
            teste = 0;
            printf("Tamanho da camisa (P / M / G): ");
            scanf(" %c", &tamanhoCamisa[i]);
            switch (tamanhoCamisa[i]) {
                case 'p':
                case 'P':
                    printf("Quantidade de camisas P: ");
                    scanf("%d", &qtdCamisa[i]);
                    printf("Valor da camisa: R$ ");
                    scanf("%f", &valorCamisa[i]);
                    valorTotalVenda[i] = valorCamisa[i] * qtdCamisa[i];
                    break;
                case 'm':
                case 'M':
                    printf("Quantidade de camisas M: ");
                    scanf("%d", &qtdCamisa[i]);
                    printf("Valor da camisa: R$ ");
                    scanf("%f", &valorCamisa[i]);
                    valorTotalVenda[i] = valorCamisa[i] * qtdCamisa[i];                   
                    break;
                case'g':
                case'G':
                    printf("Quantidade de camisas G: ");
                    scanf("%d", &qtdCamisa[i]);
                    printf("Valor da camisa: R$ ");
                    scanf("%f", &valorCamisa[i]);
                    valorTotalVenda[i] = valorCamisa[i] * qtdCamisa[i];
                    break;
                default:
                    printf("Tamanho de camisa invalido.\n");
                    teste = 1; // caso o tamanho da camisa esteja incorreto, repetir a pergunta
            }
        } while (teste == 1);
        do {
            printf("\nTipo de venda\n1- A vista\n2- Parcelado\n3- Delivery a vista\n4- Delivery parcelado\n5- Venda online\n->");
            scanf("%d", &tipoVenda[i]);
            if (tipoVenda[i] < 1 || tipoVenda[i] > 5) {
                printf("Tipo de venda invalido!\n");
            }
        } while (tipoVenda[i] < 1 || tipoVenda[i] > 5);
        printf("Venda %d cadastrada com sucesso!\n\n", i+1);
    }
    do {
        printf("\n-=x MENU x=-\n");
        printf("1- Ver informacoes de todas vendas\n2- Ver informacoes de uma venda especifica\n3- Encerrar programa\n-> ");
        scanf("%d", &menu);
            switch(menu) {
                case 1:
                    for (int i = 0; i < 5; i++) {
                        printf("\n-=x %d VENDA x=-\n", i+1);
                        printf("Codigo de venda: %d\n", codVenda[i]);
                        printf("Tamanho das camisas: %c\n", tamanhoCamisa[i]);
                        printf("Preco da camisa: R$%.2f\n", valorCamisa[i]);
                        printf("Quantidade de camisas: %d\n", qtdCamisa[i]);
                        printf("Valor total venda: R$%.2f\n", valorTotalVenda[i]);
                        switch (tipoVenda[i]) {
                            case 1:
                                printf("Tipo de venda: A vista");
                                break;
                            case 2: 
                                printf("Tipo de venda: Parcelado");
                                break;
                            case 3:
                                printf("Tipo de venda: Delivery a vista");
                                break;
                            case 4: 
                                printf("Tipo de venda: Delivery parcelado");
                                break;
                            case 5: 
                                printf("Tipo de venda: Venda online");
                                break;
                        }
                    printf("\n-=x FIM x=-\n");    
                    }
                    break;
                case 2:
                    printf("Digite o codigo unico do produto que deseja ver: ");
                    scanf("%d", &menuCodigo); 
                    if (menuCodigo < 1 || menuCodigo > 5) {
                        printf("Codigo unico nao cadastrado!\n");
                        printf("Deseja voltar para o menu [S / N]? ");
                        scanf(" %c", &voltarMenu);
                        if (voltarMenu == 's' || voltarMenu == 'S') {
                            teste = 1;
                            break;
                        } else if (voltarMenu == 'n' || voltarMenu == 'N'){
                            teste = 0;
                            break;
                        }
                    }
                    teste = 0;
                    for (int i = 0; i < 5; i++) {
                        if (menuCodigo == codVenda[i]) {
                            printf("\n-=x %d VENDA x=-\n", i+1);
                            printf("Codigo de venda: %d\n", codVenda[i]);
                            printf("Tamanho das camisas: %c\n", tamanhoCamisa[i]);
                            printf("Preco da camisa: R$%.2f\n", valorCamisa[i]);
                            printf("Quantidade de camisas: %d\n", qtdCamisa[i]);
                            printf("Valor total venda: R$%.2f\n", valorTotalVenda[i]);
                            switch (tipoVenda[i]) {
                                case 1:
                                    printf("Tipo de venda: A vista");
                                    break;
                                case 2: 
                                    printf("Tipo de venda: Parcelado");
                                    break;
                                case 3:
                                    printf("Tipo de venda: Delivery a vista");
                                    break;
                                case 4: 
                                    printf("Tipo de venda: Delivery parcelado");
                                    break;
                                case 5: 
                                    printf("Tipo de venda: Venda online");
                                    break;
                            }
                        }
                    }
                    printf("\n-=x FIM MENU x=-\n");
                    printf("\nDeseja voltar ao menu [S / N]? ");
                    scanf(" %c", &voltarMenu);
                    if(voltarMenu == 's' || voltarMenu == 'S') {
                        teste = 1;
                    } else if (voltarMenu == 'n' || voltarMenu == 'N') {
                        teste = 0;
                    }
                    break;
                    
                default: 
                    printf("Encerrando programa...\n");
                    teste = 0;
                    break;
            }
    } while (teste == 1);
    printf("Encerrando programa...\n");
    return 0;
}