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


