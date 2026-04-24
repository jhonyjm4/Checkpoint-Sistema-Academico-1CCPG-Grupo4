#include <stdio.h>

#FUNÇÕES
int derivada(int a, int b){
    int a = a*2;
    printf("Derivada: %dx + %d\n", 2*a, b);
    return 0;
} 

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

            case 3:
                if(media >= 6)
                    printf("Aprovado\n");
                else if(media >= 4)
                    printf("Recuperacao\n");
                else
                    printf("Reprovado\n");
                break;

            case 4:
                printf("\nRESULTADO:\n");
                printf("Nota 1: %.2f\n", n1);
                printf("Nota 2: %.2f\n", n2);
                printf("Media: %.2f\n", media);

                if(media >= 6)
                    printf("Aprovado\n");
                else if(media >= 4)
                    printf("Recuperacao\n");
                else
                    printf("Reprovado\n");
                break;

            case 5:
                printf("Saindo...\n");
                break;

            case 6:
                int a, b, c;

            printf("Digite o coeficiente 'a'"); #A função foi declarada acima para que ela possa ser acessa por todo o código
            scanf("%i", &a);

                printf("Digite o coeficiente 'b'");
                scanf("%i", &b);

                printf("Digite o coeficiente 'c'");
                scanf("%i", &c);

                printf("Função original: %dx² + %dx + %d\n", a, b, c)
                derivada(a,b);
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}