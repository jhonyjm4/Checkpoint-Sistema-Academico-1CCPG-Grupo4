#include <stdio.h>

// FUNÇÕES
int derivada(int a, int b){
    // O ERRO ESTAVA AQUI: Não declare "int a" novamente.
    // Apenas use a variável que já veio pelo parâmetro.
    int resultado_a = a * 2; 
    printf("Derivada: %dx + %d\n", resultado_a, b);
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
        printf("6 - Calcular Derivada\n"); // Adicionado ao menu para facilitar
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

            case 6: { // Adicionado chaves para permitir declaração de variáveis no case
                int va, vb, vc;

                printf("Digite o coeficiente 'a': ");
                scanf("%i", &va);

                printf("Digite o coeficiente 'b': ");
                scanf("%i", &vb);

                printf("Digite o coeficiente 'c': ");
                scanf("%i", &vc);

                printf("Função original: %dx^2 + %dx + %d\n", va, vb, vc);
                derivada(va, vb);
                break;
            }
            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}