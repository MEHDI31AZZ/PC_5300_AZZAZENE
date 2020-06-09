#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void  picalc ( int n)
{
	int s;
	double pi;

        s=1;
	for ( int i = 0 ; i <n; ++ i)
	{
		pi  = s / ( 2.0 * i + 1.0 );
		s = - 1 ;
	}
	printf ( " %lf \n " , 4 * pi);
}

void  main ( int argc, char * argv [])
{
	char * a = argv [ 1 ];
    int b = atoi (a);
	picalc (b);
}
