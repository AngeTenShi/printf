#include "ft_printf.h"

int main()
{
	int test = ft_printf("%X\n", -1);
	int test2 = printf("%X\n", -1);
	printf("%d\n%d\n", test, test2);
}
