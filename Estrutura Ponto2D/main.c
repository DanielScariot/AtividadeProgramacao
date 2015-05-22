#include <stdio.h>
#include <stdlib.h>

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

    return 0;
}
