#include <stdio.h>

void SelectSort(int* s);

int main()
{
    int i = 0;    

    int num[10] = { 3,4,9,1,5,2,7,6,8,10 };
    
    SelectSort( num );

    for( i = 0; i < 10; i++)
    {
        printf(" %d", num[i]);
    }
    printf("\n");
    return 0;
}

void SelectSort( int* p )
{
    int mini = 0; 
    int i = 0;
    int k = 0;
    int temp = 0;
    
    // mini = *p;   Be careful this position;  First 
    for(i=0;i<9;i++)
    {
        mini = *(p+i);   //  Be careful this position;  Second
        for(k=(i+1);k<10;k++)
        {
            if(mini < *(p+k))
            {
                //mini = mini;    
            }
            else
            {
                temp = mini;
                mini = *(p+k);  // Be careful if i is substitued with 1
                *(p+k) = temp;
            }
            //printf(" Inside OK ,%d \n ", *(p+k));
        }
        *(p+i) = mini;
        //printf(" OK ,%d", *(p+i));

    }
}












