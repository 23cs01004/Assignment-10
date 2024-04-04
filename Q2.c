#include<stdio.h>
union ud
{
    int ud1;
    int ud2;
    char uc;
}udata;
struct sd
{
    int sd1;
    int sd2;
    char sc;
}sdata;
void main()
{
    printf("Size of union=%d\n",sizeof(udata));
    printf("Size of struct=%d",sizeof(sdata));
}