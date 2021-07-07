#include <stdio.h>
int main()
{
	int f[6]; /* Declare array to store fibonacci sequence */
	f[0] = 0; 
	f[1] = 1; // Set seed values for fibonacci sequence.
	for ( int i=2; i < 6; ++i)
	{
	f[i] = f[i-1] + f[i-2];

	}
	for ( int k = 0; k < 6; ++k)
	{
	    printf("%d\n", f[k]);
	}
}
/* Add test comment */