/*
#include<stdarg.h>

int ft_sum(int nbr, ...)
{
	va_list args; // is an object to loop into argument
	va_start(args, nbr); // this function is gonna start this proccess
	int sum;
	sum = 0;
	for (int i = 0; i < nbr; i++)
	{
		sum += va_arg(args, int); // bring the values from valiste with the type
	}
	return(sum);
}
#include<stdio.h>
int main()
{
	printf("%d", ft_sum(3,1,2,3));
}
*/

// #include<stdarg.h>
// #include<stdio.h>
// void ft_print(int count, ...)
// {
// 	va_list args;
// 	va_start(args, count);
// 	char *str;
// 	for (int i = 0; i < count; i++)
// 	{
// 		str = va_arg(args, char *);
// 		printf("%s", str);
// 	}
// }
#include<stdio.h>
// int main()
// {
// 	int number = 21;
// 	float n = 3.12345678;

// 	printf("%5d\n", number);
// 	printf("%.4f", n);
// }


