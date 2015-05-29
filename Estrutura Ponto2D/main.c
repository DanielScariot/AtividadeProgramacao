#include <stdio.h>
#include <stdlib.h>

struct Ponto2D
{
    float x;
    float y;
};
struct CorRGB
{
    int r;
    int g;
    int b;
};
struct Circulo
{
    struct Ponto2D centro;
    float raio;
    struct CorRGB cor;
};

void leInstancias (struct Ponto2D *p,struct Circulo *c)
{
    printf("insira o valor do ponto x: ");
    scanf("%f", &p->x);
    printf("\ninsira o valor do ponto y: ");
    scanf("%f", &p->y);
    printf("\ninsira o valor da cor r: ");
    scanf("%d", &c->cor.r);
    printf("\ninsira o valor da cor g: ");
    scanf("%d", &c->cor.g);
    printf("\ninsira o valor da cor b: ");
    scanf("%d", &c->cor.b);
    printf("\ninsira o valor da cordenada x do centro: ");
    scanf("%d", &c->centro.x);
    printf("\ninsira o valor da cordenada y do centro: ");
    scanf("%d", &c->centro.y);
    printf("\nInsira o tamanho do raio do circulo: ")
    scanf("")
}

int main()
{
    struct Ponto2D ponto1;
    struct Circulo circ1;

    leInstancias(&ponto1,&circ1);
    return 0;
}
