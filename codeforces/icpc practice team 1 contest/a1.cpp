#include <iostream>

int main()
{

	int a, b, c;
	char d, e;
	
	scanf("%d:%d:%d%c%c", &a, &b, &c, &d, &e);
	
	a %= 12;

	if (d == 'P')
		a += 12;

	printf("%02d:%02d:%02d\n", a, b, c);

    return 0;
}