#include "3-calc.h"
/*Main function*/

/**
  * main - Entry point
  * @argc: nb of command line args
  * @argv: array of pointers to each cli arg
  * Return: result if success, 1 otherwise
  *
  * no other function allowed in this file
  * no direct call to operator functions
  * atoi must be use to convert args to int
  * no loop allowed
  * 3 if statements allowed
  */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*ptr_to_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr_to_op = get_op_func(argv[2]);

	if (ptr_to_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((ptr_to_op == op_div || ptr_to_op == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr_to_op(num1, num2));
	return (0);
}

