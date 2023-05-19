#include <stdio.h>

main(){
int idade;
printf("Qual a sua idade? ");
scanf("%i",&idade);

if(idade>12 && idade<18){                           //Os dois lados tem q ser verdadeiros.
    printf("E adolecente !!!");
}else{
    printf("Nao e adolecente !!!");
}
}