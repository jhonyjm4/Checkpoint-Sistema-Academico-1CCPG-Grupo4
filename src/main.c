#include <stdio.h>

/**
 * FUNÇÃO: derivada
 * Explicação: Calcula a derivada simples de uma função quadrática (ax^2 + bx + c).
 * A regra da potência diz que a derivada de ax^2 é 2ax.
 */
int derivada(int a, int b){
    
    int resultado_a = a * 2; 
    
   
    printf("Derivada: %dx + %d\n", resultado_a, b);
    
    return 0; 
} 

int main() {
    // Declaração de variáveis globais ao main para armazenar notas e média
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
        printf("5 - Calcular Derivada\n");
        printf("6 - Sair\n");
        printf("Opcao: ");
        
        // Lê a escolha do usuário
        scanf("%d", &opcao);

        // Estrutura de decisão baseada na variável 'opcao'
        switch(opcao) {

            case 1:
               
                printf("Nota 1: ");
                scanf("%f", &n1);
                printf("Nota 2: ");
                scanf("%f", &n2);
                break; 

            case 2:
                // Processamento: calcula a média aritmética
                media = (n1 + n2) / 2; // Calcula a média das notas
                printf("Media: %.2f\n", media); // Apresenta a média como saída por meio de uma "print"
                break; // Encerra o processo da "case 2"

            case 3:
                // Lógica condicional simples para aprovação
                if(media >= 6)
                    printf("Aprovado\n");
                else if(media >= 4)
                    printf("Recuperacao\n");
                else
                    printf("Reprovado\n");
                break;

            case 4:
                // Relatório completo: mostra todos os dados processados
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
                // Finaliza o loop while na próxima verificação
                printf("Saindo...\n");
                break;

            case 6: { 
                
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
                // Executado caso o usuário digite um número que não esteja no menu
                printf("Opcao invalida!\n");
        }
    }

    return 0; // Encerra o programa com sucesso
}