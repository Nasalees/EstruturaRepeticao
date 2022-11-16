#include <stdio.h>

float multiplica(float n1, float n2){
    float res;
    res = (n1 + n2) / 2;
    return res;
}

int main(){
    float nota1 , nota2, media;
    

printf("Digite a primeira nota: ");
scanf("%f", &nota1);

while (nota1 < 0 || nota1 >10)
{
    printf("Nota invalida! Digite uma nota valida: ");
    scanf("%f", &nota1);
}

printf("Digite a segunda nota: ");
scanf("%f", &nota2);

while (nota2 < 0 || nota2 >10)
{
    printf("Nota invalida! Digite uma nota valida: ");
    scanf("%f", &nota2);
}

media = multiplica(nota1, nota2);

printf("MEDIA: %.2f", media);
return 0;
}