#include<stdio.h>

int main ()
{
    int x;
    scanf("%d",&x);
    int*ptr=(int*)calloc(3,sizeof(int));

for(int i=0;i<x;i++)
    {
    scanf("%d",&ptr[i]);
    }

for(int i=0;i<x;i++)
{
    printf("%d   ",ptr[i]);

}
 printf("\n");

int *ptr1=realloc(ptr,5*sizeof(int));
for(int i=0;i<5;i++)
    {
    scanf("%d",&ptr[i]);
    }

for(int i=0;i<5;i++)
{
    printf("%d   ",ptr[i]);
}
}
