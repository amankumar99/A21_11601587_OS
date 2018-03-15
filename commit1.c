#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Process
{

	int pid,at,bt;
};
void swap1(double *xp,double *yp)
{
	double temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(double arr[],int arr1[] ,int n)
{
	int i, j;
	int min_idx;
	for (i = 0; i < n-1; i++) 
	{
		min_idx = i;
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx])
		min_idx = j;
		swap1(&arr[min_idx], &arr[i]);
		swap(&arr1[min_idx], &arr1[i]);
	}
}

void sort1(struct Process *t,int p)
{
	int i,j;
	struct Process *q,s;
	for(i=0;i<p;i++,t++) 
	{
		for(j=i+1,q=t+1;j<p;j++,q++) 
		{
			if((t->at)>(q->at))
				{
					s=*t;
					*t=*q;
					*q=s;
				}
		}
	}
}


int main()
{   int ct[10];//1
	int i,n;
	struct Process p[80];
    int at,bt;
	printf("Enter number of processes\n");
	scanf("%d",&n);
	int tat[n],wt[n];
	for (i=0;i<n;i++) 
		{
			printf("for process %d\n",i+1);
			printf("\nenter the process id\n ");
			scanf("%d",&p[i].pid);
			printf("\nenter the arrival time\n");
			scanf("%d",&p[i].at);
			printf("\nenter the burst time \n");
			scanf("%d",&p[i].bt);
        }
	int v=n-1;
	sort1(p,n);
	int a[n],b[n];
	int c[n];
	int r;
	printf("ProcessId\tArrival time\tBurst time\t");
	for(i=0;i<n;i++) 
	{
		printf("\n%d\t\t%d\t\t%d\n",p[i].pid,p[i].at,p[i].bt);//tat and wt
		a[i]=p[i].pid;
	}
	for(i=0;i<n-1;i++) 
	{
		b[i]=a[i+1];
	}
	printf("\n\nGANT CHART\t");
	int m=n-1;
	int t=0;
	if(0==p[0].at)
	{
	printf("0");
	}
	else
	{
		printf("0 %d",p[0].at);
		t=t+p[0].at;
	}
	t=t+p[0].bt;
	printf(" P%d %d",p[0].pid,t);
	ct[1]=t;
	
		do
	{
		int e=0,j,u;
		for( j=0;j<m;j++)
		{			 
			for( u=0;u<n;u++)
			{ 
				if(b[j]==p[u].pid)
				{
					if(p[u].at<=t)
					{
						c[e++]=p[u].pid;
					}
				}
			}
		}
