#include<stdio.h>
#include<conio.h>
void main()
{
int number[5];
int i,j,a=0,n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the number\n");
for(i=0;i<5;++i)
{
scanf("%d",&number[i]);
}
for(i=0;i<n;++i)
{
for(j=i+1;j<n;++j)
{
if(number[i] < number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("the number arranged in decending order\n");
for(i=0;i<n;++i);
{
printf("%d\n",number[i]);
}
getch();
}
