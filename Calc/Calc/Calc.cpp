#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<clocale>

int main();

int Soma() {
    int a = 0;
    int b = 0;
    /*
     Igual - ==
    atribuição/capiar - =
    */
    printf("Qual o primeiro valor? ");
    scanf_s("%d", &a);

    printf("Qual o segundo valor? ");
    scanf_s("%d", &b);
    if (a >=0 && b >=0) {
        int resultado = 0;
        resultado = a + b;
        printf("O resultado da soma e: %d\n", resultado);
        printf("\n");
        system("pause");
        system("cls");
        main();
    }
    else {


        printf("existem numeros negativos, insira numeros validos.");
        printf("\n");
        system("pause");
        system("cls");
        main();
    }

    return 0;
}

int Subtracao() {
    int a = 0;
    int b = 0;
    /*
     Igual - ==
    atribuição/capiar - =
    */
    printf("Qual o primeiro valor? ");
    scanf_s("%d", &a);

    printf("Qual o segundo valor? ");
    scanf_s("%d", &b);
    if (a >= 0 && b >= 0) {
        int resultado = 0;
        resultado = a - b;
        printf("O resultado da soma e: %d\n", resultado);
        printf("\n");
        system("pause");
        system("cls");
        main();
    }
    else {


        printf("existem numeros negativos, insira numeros validos.");
        printf("\n");
        system("pause");
        system("cls");
        main();
    }

    return 0;
}

int Multiplicacao() {
    int a = 0;
    int b = 0;
    /*
     Igual - ==
    atribuição/capiar - =
    */
    printf("Qual o primeiro valor? ");
    scanf_s("%d", &a);

    printf("Qual o segundo valor? ");
    scanf_s("%d", &b);
    if (a >= 0 && b >= 0) {
        int resultado = 0;
        resultado = a * b;
        printf("O resultado da soma e: %d\n", resultado);
        printf("\n");
        system("pause");
        system("cls");
        main();
    }
    else {


        printf("existem numeros negativos, insira numeros validos.");
        printf("\n");
        system("pause");
        system("cls");
        main();
    }

    return 0;
}

int Divisao() {
    int a = 0;
    int b = 0;
    /*
     Igual - ==
    atribuição/capiar - =
    */
    printf("Qual o primeiro valor? ");
    scanf_s("%d", &a);

    printf("Qual o segundo valor? ");
    scanf_s("%d", &b);
    if (a >= 0 && b >= 0) {
        int resultado = 0;
        resultado = a / b;
        printf("O resultado da soma e: %d\n", resultado);
        printf("\n");
        system("pause");
        system("cls");
        main();
    }
    else {


        printf("existem numeros negativos, insira numeros validos.");
        printf("\n");
        system("pause");
        system("cls");
        main();
    }

    return 0;
}

int main()
{
    int valor = 0;
   // _locale_t _get_current_locale(void);
    setlocale(LC_ALL, "portuguese");
    printf("\t*****************************\t\t power by William ADS\n");
    printf("\t|1-SOMA                      |\n");
    printf("\t|2-SUBTRACAO                 |\n");
    printf("\t|3-DIVISAO                   |\n");
    printf("\t|4-MULTIPLICACAO             |\n");
    printf("\t|5-SAIR                      |\n");
    printf(" ****************************\n");
    printf("\n");
    printf(">>>>>>>>>>>Digite uma opcao<<<<<<<<<<<:\n ");
    scanf_s("%d", &valor);
    switch (valor)
    {
    case 1 :
        Soma();
        break;
    case 2:
        Subtracao();
        break;
    case 3:
        Divisao();
        break;
    case 4:
        Multiplicacao();
        break;
    case 5:
        printf("ate logo");
        system("exit");
        break;
    default :
        printf("Valor invalido!\n");
        system("pause");
        system("cls");
        main();

   }


}


