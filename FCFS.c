#include<stdio.h>
int main()
{
    int i,j,p[10],bt[10],tat[10],avtat=0,avwt=0,wt[10],n;

    printf("ENTER THE PROCES NUMBER :  ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nENTER THIS PROCESS BURST TIME : p[%d] == ",i);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
    }
    printf("\n PROCESS\t BURST_TIME\t WAITING_TIME\t TURN_AROUND_TIME \n");
    for(i=0;i<n;i++)
    {
        tat[i]=wt[i]+bt[i];
        avwt=avwt+wt[i];
        avtat=avtat+tat[i];
        printf(" \n P[%d]\t\t %d\t\t %d\t\t %d\t\t",i,bt[i],wt[i],tat[i]);
    }




    return 0;
}
