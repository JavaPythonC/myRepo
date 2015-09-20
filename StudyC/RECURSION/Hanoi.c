#include <stdio.h>

void hanoi(int n, char p1, char p2, char p3);
static count=1;

int main()
{
    int total;
    scanf("%d",&total);

    hanoi(total,'A','B','C');

}

void move(int n, char from, char to)
{
    printf(" The %d step: Let %d plate from %c ----->%c \n", count++,n,from,to);
}
void hanoi(int n, char from, char depend, char to)
{
    if(1==n)
        move(1,from,to);
    else
    {
        hanoi(n-1,from,to,depend);
        move(n,from,to);
        hanoi(n-1,depend,from,to);    

    }

}


