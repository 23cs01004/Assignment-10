#include<stdio.h>
union arrays
{
    int i[100];
    float f[100];
    char c[100];
};
void main()
{
    int size;
    printf("Enter size of arrays: ");
    scanf("%d",&size);
    union arrays arr;
    int i;
    int in[size];
    float fl[size];
    char ch[size];
    for(i=0;i<size;i++){
        printf("Enter %d element of integer array: ",i+1);
        scanf("%d",&arr.i[i]);
        in[i]=arr.i[i];
        printf("Enter %d element of float array: ",i+1);
        scanf("%f",&arr.f[i]);
        fl[i]=arr.f[i];
        printf("Enter %d element of character array: ",i+1);
        scanf(" %c",&arr.c[i]);
        ch[i]=arr.c[i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",in[i]);
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%f ",fl[i]);
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%c ",ch[i]);
    } 
}