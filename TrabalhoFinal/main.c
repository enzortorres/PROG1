#include <stdio.h>

int main(void) {
    float valorTotalVenda[5], valorTotal, valorCamisaP = 25, valorCamisaM = 50, valorCamisaG = 75;
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
                    printf("Valor da camisa P: R$%.2f\n", valorCamisaP);
                    printf("Quantidade de camisas P: ");
                    scanf("%d", &qtdCamisa[i]);
                    valorTotalVenda[i] = valorCamisaP * qtdCamisa[i];
                    break;
                case 'm':
                case 'M':
                    printf("Valor da camisa M: R$%.2f\n", valorCamisaM);
                    printf("Quantidade de camisas M: ");
                    scanf("%d", &qtdCamisa[i]);
                    valorTotalVenda[i] = valorCamisaM * qtdCamisa[i];                   
                    break;
                case'g':
                case'G':
                    printf("Valor da camisa G: R$%.2f\n", valorCamisaG);
                    printf("Quantidade de camisas G: ");
                    scanf("%d", &qtdCamisa[i]);
                    valorTotalVenda[i] = valorCamisaG * qtdCamisa[i];
                    break;
                    
                default:
                    printf("Tamanho de camisa invalido.\n");
                    teste = 1; // caso o tamanho da camisa esteja incorreto, repetir a pergunta
            }
        } while (teste == 1);
        do {
            printf("Tipo de venda\n1- A vista\n2- Parcelado\n3- Delivery a vista\n4- Delivery parcelado\n5- Venda online\n->");
            scanf("%d", &tipoVenda[i]);
            if (tipoVenda[i] < 1 || tipoVenda[i] > 5) {
                printf("Tipo de venda invalido!\n");
            }
        } while (tipoVenda[i] < 1 || tipoVenda[i] > 5);
        printf("Venda %d cadastrada com sucesso!\n", i+1);
    }
    while (voltarMenu == 's' || voltarMenu == 'S') {
        printf("\n-=x MENU x=-\n");
        printf("1- Ver informacoes de uma venda especifica\n2- Ver informacoes de todas as vendas\n3- Encerrar programa\n-> ");
        scanf("%d", &menu);
            switch(menu) {
                case 1:
                    printf("Digite o codigo unico do produto que deseja ver: ");
                    scanf("%d", &menuCodigo); 
                    if (menuCodigo < 1 || menuCodigo > 5) {
                        printf("Codigo unico nao cadastrado!\n");
                        printf("Deseja voltar para o menu? [S / N]");
                        scanf(" %c", &voltarMenu);
                    }
                    if (voltarMenu == 'n' || voltarMenu == 'N') {
                        break;
                    }
                    for (int i = 0; i < 5; i++) {
                        if (menuCodigo == codVenda[i]) {
                            printf("-=x %d VENDA x=-\n", i+1);
                            printf("Codigo de venda: %d\n", codVenda[i]);
                            printf("Tamanho das camisas: %c\n", tamanhoCamisa[i]);
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
                    printf("\n-=x FIM MENU x=-");
                    break;
                    
                case 2:
                    for (int i = 0; i < 5; i++) {
                        printf("\n-=x %d VENDA x=-\n", i+1);
                        printf("Codigo de venda: %d\n", codVenda[i]);
                        printf("Tamanho das camisas: %c\n", tamanhoCamisa[i]);
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
                default: 
                    printf("Encerrando programa...");
                    break;
            }
    }
    printf("Encerrando programa...");
    return 0;
}