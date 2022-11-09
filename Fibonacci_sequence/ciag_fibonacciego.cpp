#include <iostream> 

void iter_fib(int numbers_to_find)
{
	long double fib[100000];

	fib[0] = 1;
	fib[1] = 1;

	for (int i = 2;i < numbers_to_find;i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	std::cout << "Number " << numbers_to_find << ": " << fib[numbers_to_find - 1];

}
int recu_fib(int numbers_to_find)
{
	if (numbers_to_find < 3)
		return 1;

	return recu_fib(numbers_to_find - 2) + recu_fib(numbers_to_find - 1);

}

int main()
{
	int numbers_to_find, method;

	std::cout << "Which Fibbonacci number should i show?: ";

	std::cin >> numbers_to_find;

	std::cout << "What method should I use:" << std::endl;
	std::cout << "1- iteratively" << std::endl;
	std::cout << "2- recursively" << std::endl;

	std::cin >> method;

	if (method == 1)
		iter_fib(numbers_to_find);
	else if (method == 2)
		std::cout << "Number " << numbers_to_find << ": " << recu_fib(numbers_to_find);
	else
		std::cout << "ERROR";
}