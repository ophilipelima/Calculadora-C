
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
# include <stdio.h>

using namespace std;

int main(void)
{
    int resultado , numero01, numero02;
    char operacao;
    
    printf("Digite o primeiro número ");
    scanf("%d", &numero01);
    
    printf("Digite o segundo número ");
    scanf("%d", &numero02);
     
    printf("Agora digite uma operação ");
    scanf("%s", &operacao);
    
    if(operacao=='+'){
        resultado= numero01 + numero02;
    }
    else if(operacao=='-'){
         resultado= numero01 - numero02;
    }
    else if(operacao=='*'){
         resultado= numero01 * numero02;
    }
    else if(operacao=='/'){
         resultado= numero01 / numero02;
    }
    
    printf("Resultado: \n\n");
    
    printf("%d", resultado);
    printf("%d", &numero01, " ","%s", &operacao," ","%d", &numero02, " = ","%d", resultado);
    
}

