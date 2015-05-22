#include <stdio.h>
#include <stdlib.h>

void leInstancias (struct Ponto2D *p,struct Circulo *c)
{

}

int main()
{
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
    struct Ponto2D ponto1;
    struct Circulo circ1;

    return 0;
}
