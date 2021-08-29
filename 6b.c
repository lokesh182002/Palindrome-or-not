#include<stdio.h>
int main()
{
	int n,rem,t,sum=0;
    printf("Enter a number");
	scanf("%d",&n);
	t=n;
	while(n!=0)
{
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
}
if(t==sum)
{printf("palindrome");}
else
{
	printf("not a palindrome");
}
return 0;
}
