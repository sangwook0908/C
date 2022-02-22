#include <stdio.h>

int ball[10]={1,2,3,4,5,6,7,8,9,10}, ball_num=10, ball_idx;
int hole[3][3], hsize[3]={3,2,1};
int ans[10], ans_idx;

void push(int k, int n)
{
	for(int i=0;i<n;i++)
	{
		hole[k][i]=ball[ball_idx++];
	}
}

void pop(int k, int n)
{
	while(ball_idx<ball_num)
	{
		ans[ans_idx++]=ball[ball_idx++];
	}
	for(int i=n-1;i>=0;i--)
	{
		ans[ans_idx++]=hole[k][i];
	}
}

void print()
{
	printf("<경사로를 굴러 내려온 공의 순서>\n");
	for(int i=0;i<ans_idx;i++)
	{
		printf("%d ",ans[i]);
	}
	printf("\n");
}
int main(void)
{
	for(int i=0;i<3;i++)
	{
		push(i, hsize[i]);
	}
	for(int i=0;i<3;i++)
	{
		pop(i, hsize[i]);
	}
	print();
	return 0;
}
