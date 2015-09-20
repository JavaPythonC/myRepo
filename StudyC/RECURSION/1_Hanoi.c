#include <stdio.h>

int static count=0;
void move(int n, char source, char dest)
{
    printf( "Total step %d, Let %d plate from %c ========> to %c\n",count++,n,source,dest);

}

Hannuo(int n, char source, char middle, char dest)
{
    if(n==1)
        move(1,source,dest);
    else
    {
        Hannuo(n-1,source,dest,middle);
        move(n,source,dest);
        Hannuo(n-1,middle,source,dest);

    }


}

int main()
{
    int plateNum=0;
    scanf("%d",&plateNum);

    Hannuo(plateNum,'A','B','C');



}
