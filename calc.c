#include <stdio.h>
int main(void){
    int oper;
    float n1, n2, soma, sub, mult, div;
    printf("Digite:\n 1 para somar\n 2 para subtrair\n 3 para multiplicar \n 4 para dividir\n");
    scanf("%d", &oper);

    switch(oper){
        case 1:
            printf("Digite os numeros a serem somados separados por espaco\n");
            scanf("%f %f", &n1, &n2);
            soma=n1+n2;
            printf("Resultado:\n%.2f", soma);
            break;
        case 2:
            printf("Digite os numeros a serem subtraidos separados por espaco\n");
            scanf("%f %f", &n1, &n2);
            sub=n1-n2;
            printf("Resultado:\n%.2f", sub);
            break;
        case 3:
            printf("Digite os numeros a serem multiplicados separados por espaco\n");
            scanf("%f %f", &n1, &n2);
            mult=n1*n2;
            printf("Resultado:\n%.2f", mult);
            break;
        case 4:
            printf("Digite os numeros a serem divididos separados por espaco\n");
            scanf("%f %f", &n1, &n2);
            div=n1/n2;
            printf("Resultado:\n%.2f", div);
            break;
    }
    return 0;
}