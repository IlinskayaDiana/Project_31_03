#include <stdio.h>


int main() 
{
	
	int a,b,c,d,m;
	printf("b? ");
	scanf("%d", &b);
	printf("c? ");
	scanf("%d", &c);
	a=b+c; 
	d=b-c;
	m=b*c;
//	divide=b/c;
/*	
 *	r=b%c;
 */
	printf("Summ is %d %+.d = %d", b, c, a);
	printf("\nDifference is %d - (%d) = %d", b, c, d);
	printf("\nMultiplication is %d * %d = %d", b, c, m);
//	printf("\nDivision is %d divided %d = %d", b,c,divide);
	
	
/*	program name_surname
 *  char s1[16], s2[16];
 *	printf("Enter name and surname ");
 *	scanf("%s %s", s1, s2);
 *	printf("Hello %s %s !", s1, s2);
 */
		
	return 0;
}
