#include <stdio.h>

int main() {
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
            case 5:
                printf("Saindo...\n");
                break;
        }
    }

    return 0;
}