#include "3-calc.h"
/**
  * get_op_func - operation-selector function
  * @s: ptr to str
  * Return: int, ptr to the right function, null if no match
  *
  * no switch allowed
  * no for / do ... while allowed
  * no goto allowed
  * no else allowed
  * 1 if statement allowed
  * 1 while loop allowed
  * below two var. are the only allowed var.
  * op_t ops[] as displayed and int i;
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	(i = 0);
	while (i < 5)
	{
	if (*ops[i].op == *s && s[1] == '\0')
		return (ops[i].f);
	i++;
	}
	return (NULL);
}
