#include <stdio.h>

struct Comp
{
    double real, img;
};

void printComp(struct Comp c)
{
    printf("%.2lf + %.2lfi\n", c.real, c.img);
}

struct Comp add(struct Comp x, struct Comp y)
{
    struct Comp ans;
    ans.real = x.real + y.real;
    ans.img = x.img + y.img;
    return ans;
}

struct Comp multiple(struct Comp a, struct Comp b)
{
    struct Comp mul;
    mul.real = a.real * b.real - a.img * b.img;
    mul.img = a.real * b.img + a.img * b.real;
    return mul;
}

int main()
{
    struct Comp c1 = {3.25, 4.96};
    struct Comp c2 = {2.77, 5.23};

    printComp(add(c1, c2));
    printComp(multiple(c1, c2));

    return 0;
}