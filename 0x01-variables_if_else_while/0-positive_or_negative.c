#include <stdlib.h>
#include <time.h>

/**
* main - prints positive or negative number
*
* Description: using the main function
* this program prints "Determines the value of the variable n"
* Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}