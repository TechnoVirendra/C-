#include<stdio.h>
struct firsttime{
	int hours;
	int minutes;
	int seconds;
};
struct secondtime{
	int hours;
	int minutes;
	int seconds;
};
void ftime(struct firsttime);
void stime(struct secondtime);
void add(struct firsttime,struct secondtime);
int main()
{
	struct firsttime t1;
	struct secondtime t2;
	ftime(t1);
	stime(t2);
	add(t1,t2);
	return 0;
	
}
void ftime(struct firsttime t1)
{
	printf("Enter (Hours Minutes Seconds) :");
	scanf("%d%d%d",&t1.hours,&t1.minutes,&t1.seconds);
}
void stime(struct secondtime t2)
{
	printf("Enter (Hours Minutes Seconds) :");
	scanf("%d%d%d",&t2.hours,&t2.minutes,&t2.seconds);
}
void add(struct firsttime t1,struct secondtime t2)
{
	int a,b,c;
	a=t1.hours+t2.hours;
	b=t1.minutes+t2.minutes;
	c=t1.seconds+t2.seconds;
	if(b>59)
	{
		a++;
		b=b-60;
	}
	else if(c>59)
	{
		b++;
		c=c-60;
	}
	printf("%d:%d:%d",a,b,c);
}

