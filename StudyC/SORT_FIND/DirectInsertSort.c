#include <stdio.h>

void DirectInsertSort(int* p, int count );

int main()
{
    int i = 0;
    int arraycount = 0;
    int num[20] = { 3,13,4,9,1,20,5,2,19,7,6,8,10,18,15,17,16,12,11,14 };

    arraycount = (sizeof(num)/sizeof(num[0]));
    DirectInsertSort(num,arraycount);
    
    for(i=0;i<arraycount;i++)
    {
        printf("\t %d",num[i]);
    }
    printf("\n");
    return 0;
    
}

void DirectInsertSort(int* p, int count)
{
    int i,j,start;
        
    for(i=1;i<count;i++)       // C Language can't be written as for(int i=0;....)
    {
        for(j=i;*(p+j)<*(p+j-1);j--)
        {
            int temp;               
            temp =*(p+j-1);
            *(p+j-1)=*(p+j);
            *(p+j)=temp;

        }       
    }
}

















