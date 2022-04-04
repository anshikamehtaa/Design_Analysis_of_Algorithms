//A=from,B=auxillary,C=destination
//Tower of Hanoi
#include <stdio.h>
int TOH(int n,char A,char B,char C)
{
    int count=0;
    if(n==1)
    {
        count++;
        printf("step %d Move disk %d from %c to %c\n",count,n,A,C);
        return 0;
    }
    else
    {
        count++;
        TOH(n-1,A,C,B);
        printf("step %d Move disk %d from %c to %c\n",count,n,A,C);
        TOH(n-1,B,A,C);
   }
}

int main()
{
    printf("Tower of Hanoi program!\n");
    int n;
    printf("How many disks do you want to move?");
    scanf("%d",&n);
    TOH(n,'A','B','C');

    return 0;
}
