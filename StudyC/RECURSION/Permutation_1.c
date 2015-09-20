#include <stdio.h>

void permutation(int n, int m, char* pchar);

void swap(char* F, char* B);

int length;

int main()
{
    //char Per[4]= {'A','B','C','D'};
    char Per[3]= {'A','B','C'};
    //int len,sizeofarray;
    //len = strlen(Per);
    //sizeofarray = sizeof(Per);
    length = (sizeof(Per)/sizeof(Per[0]));

    printf("length = %d \n",length);

    //printf ("len = %d sizeof = %d \n",length,sizeofarray);

    permutation(0,length-1, Per);

}

void permutation(int from, int total, char* pchar)
{
    int i = 0;
    int k = 0;
    if(from == total)
    {
        static int all = 1;
        printf(" The %d permutation is ",all);
        for(k=0;k<=total;k++)
        {
            if(k<total)
                printf(" %c ",*(pchar+k));
            else
                printf(" %c \n",*(pchar+k));
        }
        all++;
    }
    else
    {
        for(i=from;i<=total;i++)
        {
            swap(pchar+from,pchar+i);
            permutation(from+1,total,pchar);
            swap(pchar+from,pchar+i);     // hui fu yuan yang,wei xia yi ci cong tou kai shi zuo hao chu shi hua gong zuo
        }
    }
    
}

void swap(char* F,char* B )
{
    char temp;
    temp = *F;
    *F = *B;
    *B = temp;
}































