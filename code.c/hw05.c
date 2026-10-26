#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int cnt=0;
    cnt++;
    n/=10;
    while(n>0){
    	n/=10;
    	cnt++;
	}
	printf("%d",cnt);
    return 0;
}