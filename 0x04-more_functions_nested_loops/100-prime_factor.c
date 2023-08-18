#include <stdio.h>
#include <math.h>
/**
* main - Entry point
* Return: always 0
*/

int main(void)
{
long int number;
long int max;
long int counter;

number = 612852475143;
max = -1;

while (number % 2 == 0)
{
max = 2;
number = number / 2;
}
for (counter = 3; counter <= sqrt(number); counter = counter + 2)
{
while (number % counter == 0)
{
max = counter;
number = number / counter;
}
}

if (number > 2)
max = number;

printf("%ld\n", max);

return (0);
}
