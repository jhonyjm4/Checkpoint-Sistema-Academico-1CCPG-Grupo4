#include <stdio.h>

int main() {
    float n1 = 0, n2 = 0, media = 0;
    int opcao = 0;

    while(opcao != 5) {
        printf("\n========================\n");
        printf("  SISTEMA EQUIPE CCPG\n");
        printf("========================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                printf("Nota 1: ");
                scanf("%f", &n1);
                printf("Nota 2: ");
                scanf("%f", &n2);
                break;

            case 2:
                media = (n1 + n2) / 2;
                printf("Media: %.2f\n", media);
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}