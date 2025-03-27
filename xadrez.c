#include <stdio.h>

int main() {
    int escolha;
    int direcaoCavalo;
    int direcaoBispo;
    int continuar = 1;  

    while (continuar) {
        // Menu interativo da seleção de peças
        printf("\nBem-vindo ao simulador de movimentos de xadrez!\n");
        printf("Escolha a peça para simular o movimento:\n");
        printf("1 - Torre \u2656\n");
        printf("2 - Bispo \u2657\n");
        printf("3 - Rainha \u2655\n");
        printf("4 - Cavalo \u2658\n");
        printf("0 - Sair \u25A7\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: // movimento da torre
                printf("\nVocê escolheu a Torre.\n");
                printf("Movimento da Torre: 5 casas para a direita.\n");
                for (int i = 0; i < 5; i++) {
                    printf("Direita\n");
                }
                break;

            case 2: // movimento do bispo
                printf("\nVocê escolheu o Bispo.\n");
                printf("Escolha a direção do movimento diagonal:\n");
                printf("1 - Cima e Direita\n");
                printf("2 - Cima e Esquerda\n");
                printf("Digite sua escolha: ");
                scanf("%d", &direcaoBispo);

                printf("\nMovimento do Bispo: ");
                
                if (direcaoBispo == 1) {
                    printf("5 casas na diagonal para cima e direita.\n");
                    int casa_bispo = 0;
                    while (casa_bispo < 5) {
                        printf("Cima, Direita\n");
                        casa_bispo++;
                    }
                } 
                else if (direcaoBispo == 2) {
                    printf("5 casas na diagonal para cima e esquerda.\n");
                    int casa_bispo = 0;
                    while (casa_bispo < 5) {
                        printf("Cima, Esquerda\n");
                        casa_bispo++;
                    }
                } 
                else {
                    printf("Opção inválida!\n");
                }
                break;

            case 3: // movimento da rainha
                printf("\nVocê escolheu a Rainha.\n");
                printf("Movimento da Rainha: 8 casas para a esquerda.\n");
                int casa_rainha = 0;
                do {
                    printf("Esquerda\n");
                    casa_rainha++;
                } while (casa_rainha < 8);
                break;

            case 4: // movimento do cavalo
                printf("\nVocê escolheu o Cavalo.\n");
                printf("Escolha a direção do movimento em L:\n");
                printf("1 - Duas casas para baixo e uma para a esquerda\n");
                printf("2 - Duas casas para baixo e uma para a direita\n");
                printf("Digite sua escolha: ");
                scanf("%d", &direcaoCavalo);

                printf("\nMovimento do Cavalo: ");
                
                if (direcaoCavalo == 1) {
                    printf("2 casas para baixo e 1 para a esquerda.\n");
                    for (int i = 0; i < 2; i++) {
                        printf("Baixo\n");
                    }
                    int casa_cavalo = 0;
                    while (casa_cavalo < 1) {
                        printf("Esquerda\n");
                        casa_cavalo++;
                    }
                } 
                else if (direcaoCavalo == 2) {
                    printf("2 casas para baixo e 1 para a direita.\n");
                    for (int i = 0; i < 2; i++) {
                        printf("Baixo\n");
                    }
                    int casa_cavalo = 0;
                    while (casa_cavalo < 1) {
                        printf("Direita\n");
                        casa_cavalo++;
                    }
                } 
                else {
                    printf("Opção inválida!\n");
                }
                break;

            case 0: // sair do programa
                printf("\nSaindo do programa...\n");
                continuar = 0;  // Sai do loop while
                break;

            default: // opção invalida
                printf("\nOpção inválida! Por favor, escolha uma opção válida.\n");
                break;
        }

        // pausa antes de retornar ao menu (opcional)
        if (continuar) {
            printf("\nPressione Enter para continuar...");
            while (getchar() != '\n');  // limpa o buffer do teclado
            getchar();  
        }
    }

    return 0;
}
