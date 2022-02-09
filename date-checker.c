#include <stdio.h>

int main (void) {
	int d1, m1, y1, d2, m2, y2;


	printf("Enter first date (dd/mm/yy): \n");
	scanf("%d /%d /%d", &d1, &m1, &y1);
	printf("Enter second date (dd/mm/yy): \n");
	scanf("%d /%d /%d", &d2, &m2, &y2);

	if (y1 < y2)
		printf("%d/%d/%d comes before %d/%d/%d", d1, m1, y1, d2, m2, y2);
	else if (y2 < y1 )
		printf("%d/%d/%d comes after %d/%d/%d", d1, m1, y1, d2, m2, y2);
	else if (m1 < m2)
		printf("%d/%d/%d comes before %d/%d/%d", d1, m1, y1, d2, m2, y2);
	else if (m2 < m1)
		printf("%d/%d/%d comes after %d/%d/%d", d1, m1, y1, d2, m2, y2);
	else if (d1 < d2)
		printf("%d/%d/%d comes before %d/%d/%d", d1, m1, y1, d2, m2, y2);
	else if (d2 < d1)
		printf("%d/%d/%d comes after %d/%d/%d", d1, m1, y1, d2, m2, y2);			
	else 
		printf("%d/%d/%d is equal to %d/%d/%d", d1, m1, y1, d2, m2, y2);

	return 0;
}