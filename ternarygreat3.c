
#include <stdio.h>

int main()
{
	
	int n1 = 5, n2 = 10, n3 = 15, g;
	
	
 g= (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	
	printf("Greatest number = %d",g);
	
	return 0;
}
