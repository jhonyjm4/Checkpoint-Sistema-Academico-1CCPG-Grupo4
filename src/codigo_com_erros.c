#include <stdio.h> //Alteração das aspas ("") para maior e menor '<>' no stdio.h

int main() {
    float nota1, nota2, media; //Adição de um ponto e virgula (;) ao final da linha

    
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n"); //Adição de um '\n' para melhor visualização no terminal
    scanf("%f", &nota2); //Adição de um '&' antes do nota2

    media = (nota1 + nota2) / 2; //Adição de paranteses entre 'nota1 + nota2'

    if (media >= 6) { //Adição de um maior (>) junto ao '='
        printf("Status: Aluno aprovado\n");
    } else {
        printf("Status: Aluno reprovado\n");
    }

    return 0;
}