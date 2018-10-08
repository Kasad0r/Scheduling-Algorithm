#include<stdio.h>
void main()
{
int burst[10],priority[10],n,i,j,temp,turn=0,wait=0;
char process[10];
printf("Enter the total number of process:");
scanf("%d",&n);
printf("Enter the process details one by one\n");
for(i=0;i<n;i++)
{
printf("Enter the Process name:");
scanf("%s",&process[i]);
printf("Enter the Burst time of process %c:",process[i]);
scanf("%d",&burst[i]);
printf("Enter the prioroty of process %c:",process[i]);
scanf("%d",&priority[i]);
}
printf("Process Chart is:\n");
printf("Process\tBurst Time\tPriority");
for(i=0;i<n;i++)
{
printf("\n  %c\t  %d\t\t  %d",process[i],burst[i],priority[i]);
}
for(i = 0; i < n-1; i++)      
{
for(j = 0; j < n-i-1; j++) 
{
if(burst[j] > burst[j+1])
{
temp=burst[j+1];
burst[j+1]=burst[j];
burst[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
turn=turn+burst[i];
}
printf("%d",turn);
for(i=0;i<n-1;i++)
{
wait=wait+burst[i];
}
printf("%d",wait);
}


