#include<stdio.h>
#include<stdlib.h>
main(){
    int x, div;
        printf("Qual o seu numero ? ");
        scanf("%i", &x);
        div=x-1; // Divisor -valor anterior a x
        while(x%div!=0){ // Enquanto não encontar um divisor
            div --;  // Tenta com outro número (decrementando o valor)
        }
         if(div==1){ // Se o div for 1 quer dizer que o próximo divisor do número
         printf("%i Eh primo!", x);

         } else{  // Caso o contrário, foi encontrado algum outro divisor antes do 1
        printf("%i Nao eh primo!", x);
         } 
      }
