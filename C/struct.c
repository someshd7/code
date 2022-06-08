#include<stdio.h>

struct random{
    int data;
};

void passbyref(struct random *val)
{
    val -> data = 30;
}

int main()
{
    struct random *num;

    num->data = 10;
    printf("%d", num->data);

    passbyref(num);

    printf("%d", num->data);
}