#include<stdio.h>
int main()
{
    int i,arr[20],x;
    for(i=0;i<20;i++)
    arr[i]=0;
    for(i=0;i<20;i++)
    {
        scanf("%d",&x);
        if(x>=0)
            arr[x]++;
        else
            arr[x+20]++;
    }
    printf("Frequency of each variable is \n");
    for(i=0;i<10;i++)                                   //PRINT COUNT OF POSITIVE VALUES
        printf("%d->%d\n",i,arr[i]);
    for(i=19;i>=10;i--)                                 //PRINT COUNT OF POSITIVE VALUES
        printf("-%d->%d\n",20-i,arr[i]);
    return 0;
}
