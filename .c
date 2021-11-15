#include<stdio.h>
int main()
{
	int i;
	goto LOOP;
	for(i = 0; i < 10 ; i++)
	{
	printf("HELLO");
	LOOP:
	break;
	
	}
	return 0;
}
