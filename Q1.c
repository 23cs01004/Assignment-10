#include<stdio.h>
union Data
{
    int i;
    float f;
    char c;
};
void main()
{
    int i1;
    float f1;
    char c1;
    union Data d;
    printf("Enter the integer: ");
    scanf(" %d",&d.i);
    i1=d.i;
    printf("Enter the number: ");
    scanf(" %f",&d.f);
    f1=d.f;
    printf("Enter character: ");
    scanf(" %c",&d.c);
    c1=d.c;
    printf("Details are: %d %f %c",i1,f1,c1);
}
