#include <cs50.h>
#include <stdio.h>

void contar(void);

int main(void)
{
    contar();
}

void contar(void)
{

    int vinte = 0;
    int dez = 0;
    int cinco = 0;
    int um = 0;
    int change;

    do
    {
        change = get_int("change: ");
    }
    while (change < 1);

    while (change > 0)
    {

        while (change >= 25)
        {
            vinte++;
            change -= 25;
        }
        while (change >= 10)
        {
            dez++;
            change -= 10;
        }
        while (change >= 5)
        {
            cinco++;
            change -= 5;
        }
        while (change >= 1)
        {
            um++;
            change -= 1;
        }
        int sum = vinte + dez + cinco + um;
        printf("%i moeda(s)!\n", sum);
    }
}
