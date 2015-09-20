# include <stdio.h>

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



















