#include <stdio.h>

void swap2(int *a, int *b);
void swap1(int a, int b);

int main()
{
    int i,j,k;
    int a[10]= { 4,5,8,1,2,9,10,3,6,7};
  
    for(i=0;i<10;i++)
    {
        for(k=0;k<9;k++)
        {
            if(a[k]>a[k+1])
            {
                //swap1(a[k],a[k+1]);
                swap2(&a[k],&a[k+1]);
            }
        }
            
    }

    for(j=0;j<10;j++)
    {
        printf("%d", a[j]);
    }
    printf("\n");
    return 0;
} 

void swap1(int a, int b)
{
   int temp = 0;
   temp = a;
   a = b;
   b=temp;
}

void swap2(int *a, int *b)
{
   int temp = 0;
   temp = *a;
   *a = *b;
   *b=temp;
}

