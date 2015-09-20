#include <stdio.h>

int main()
{
    int i = 0;
    int arraycount = 0;
    int num[10] = { 3,13,4,9,1,20,5,2,19,7,6,8,10,18,15,17,16,12,11,14 };

    arraycount = (sizeof(num)/sizeof(num[0]));
    DirectInsertSort(num,arraycount);
    
    for(i=0;i<10;i++)
    {
        printf("\t %d",num[i]);
    }
    printf("\n");
    return 0;
    
}
