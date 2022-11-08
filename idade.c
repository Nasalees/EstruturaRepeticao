#include <stdio.h>

int main(){

int idade, soma, media, i;
i = 0;
media = 0;
soma = 0;

printf("Digite as idades\n");
scanf("%d", &idade);

while (idade > 0){
  i++ ; 
    if (idade < 0){
        printf("IMPOSSIVEL CALULAR");
        return 0;
    }
 soma = soma + idade;
 scanf("%d", &idade);
 
}

media = soma / i;
printf("MEDIA DAS IDADES: %d anos", media);  


    return 0;
}