
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
