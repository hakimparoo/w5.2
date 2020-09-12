#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Palindrom(char* x)
{
	char* a, * s;
	a = x;
	while (*a != '\0') {
		a++;
	}
	--a;
	for (s = x;a >= s;)
	{
		if (*s == *a)
		{
			--a;
			s++;
		}
		else
			break;
	}
	if (a > s)
	{
		printf("Not Palindrome");
	}
	else
	{
		printf("Palindrome");
	}
}
int main()
{
	char x[100];
	printf("Input String => ");
	scanf("%s", x);
	Palindrom(x);
	return 0;
}