#include<stdio.h>
union EmpDetails
{
    float hwage;
    double fixedsal;
};
struct Employee
{
    int Id;
    char name[20];
    union EmpDetails ed;
};
void main()
{
    float hw;
    double fs;
    struct Employee e;
    printf("Enter Id: ");
    scanf("%d",&e.Id);
    printf("Enter name of the employee: ");
    scanf("%s",&e.name);
    printf("Enter the hourly wage of employee: ");
    scanf("%f",&e.ed.hwage);
    hw=e.ed.hwage;
    printf("Enter Fixed salary of employee: ");
    scanf("%lf",&e.ed.fixedsal);
    fs=e.ed.fixedsal;
    printf("Details are: %d  %s  %f  %lf",e.Id,e.name,hw,fs);
}