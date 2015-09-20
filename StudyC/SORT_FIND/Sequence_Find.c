# include <stdio.h>

int FindMini( int* p );
int FindMax( int* p );

int main()
{
    int seqNum[10] = { 3, 9, 4, 1, 5, 2, 7, 10, 8, 6 };

    int mini = 0;
    int max = 0;    

    mini = FindMini( seqNum );
    printf("The mini num is: %d \n", mini);
    max = FindMax( seqNum );
    printf("The max num is: %d \n", max);
    return 1;
}

int FindMini(int* p)
{
    int mini = 0;
    int i = 0;
    
    mini = *p;
    for(i=1;i<10;i++)
    {
        if(mini < *(p+i))
        {
            //mini = mini;    
        }
        else
        {
            mini = *(p+i);  // Be careful if i is substitued with 1
        }
    }
    return mini;
}

int FindMax(int* p)
{
    int max = 0;
    int i = 0;
    
    max = *p;
    for(i=1;i<10;i++)
    {
        if(max > *(p+i))
        {
            //max = max;    
        }
        else
        {
            max = *(p+i);  // Be careful if i is substitued with 1
        }
    }
    return max;
}



















