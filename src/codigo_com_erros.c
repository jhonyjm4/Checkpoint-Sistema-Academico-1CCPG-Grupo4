#include <stdio.h> //Alteração das aspas ("") para <> no stdio.h

int main() {
    float nota1, nota2, media; //Adição de um ponto e virgula (;) ao final da linha

    
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n"); //Adição de um '\n' para melhor visualização no terminal
    scanf("%f", nota2);

    media = (nota1 + nota2) / 2; //Adição de paranteses entre 'nota1 + nota2'

    if (media = 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}