/**
*main - Checks for value
*Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("id is positive\n");
	else if (n==0)
		printf("id is zero\n");
	else
		printf("id is negative\n")
	return (0);
}

