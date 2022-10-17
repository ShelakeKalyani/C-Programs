/*
Programmer Name = Shelake Kalyani
Program Name = program to print multiplication table from  1 to 5.
Technology used = C
*/


#include <stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d\t",(i*j));
        }
        printf("\n");
    }
}


/*
Output:
	1       2       3       4       5
	2       4       6       8       10
	3       6       9       12      15
	4       8       12      16      20
	5       10      15      20      25
	6       12      18      24      30
	7       14      21      28      35
	8       16      24      32      40
	9       18      27      36      45
	10      20      30      40      50
*/
