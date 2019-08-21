#include <stdio.h>
#include "axion.h"


int main(int argc, char **argv)
{
    Neuron a, b;
    Axion axion(1, &a, &b);

    printf("a %.3f -> %.3f -> b %.3f\n", a.getValue(), axion.getValue(), b.getValue());
    a.setValue(3);
    b.setValue(2);

    printf("a %.3f -> %.3f -> b %.3f\n", a.getValue(), axion.getValue(), b.getValue());
    axion.think();
    printf("a %.3f -> %.3f -> b %.3f\n", a.getValue(), axion.getValue(), b.getValue());

    return 0;
}
