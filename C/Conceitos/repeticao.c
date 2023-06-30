#include<stdio.h>
#include<stdlib.h>
main(){
    float x=1, soma =0, cont=0;
    while(x!=0){  
        printf("Valor = ");
        scanf("%f", &x);
        soma = soma + x; // Acumulador na soma
        if(x!=0) cont++; //Contador
    }
printf("Soma total = %f \n",soma);
printf("Contagem = %f \n",cont);
printf("Media +  %f \n", soma/cont);
}



// Repetição
// Enquanto - faça
// while(){  --> condição
// ações
//}
