#include <iostream>

int main()
{
	//1------------------------------------

	std::cout << "Task n. 1" << std::endl;

	int a, b;

	std::cout << "First Number:	";
	std::cin >> a; 
	std::cout << std::endl;

	std::cout << "Second Number:	";
	std::cin >> b; 
	std::cout << std::endl;

	int sum = a + b;

	if (sum > 10 && sum < 20)
	{
		std::cout << "True!" << std::endl << std::endl;;
	}
	else
	{
		std::cout << "False!" << std::endl << std::endl;;
	}

	//2------------------------------------
	std::cout << "Task n. 2" << std::endl;

	int number = sum;

	if (sum > 1)
	{
		for (int i = 2; i < sum; i++)
		{
			if ((sum % i) == 0)
			{
				std::cout << "Chislo neprostoe, ono delitsya na " << i << std::endl << std::endl;
				break;
			}
			number--;
		}
	}
	
	if (number == 2)
	{
		std::cout << "Chislo prostoe " << std::endl << std::endl;
	}

	//3------------------------------------
	std::cout << "Task n. 3" << std::endl;

	const int x = 5;
	const int y = 5;

	if (((x == 10) && (y == 10)) || ((x + y)) == 10)
	{
		std::cout << "True!" << std::endl;
	}
	else
	{
		std::cout << "False!" << std::endl;
	}

	//4------------------------------------
	std::cout << "Task n. 4" << std::endl;

	const int n = 7;

	int array[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i == j) || (i + j == n - 1))
			{
				array[i][j] = 1;
			}
			else
			{
				array[i][j] = 0;
			}
			std::cout << array[i][j] << "  ";
		}
		std::cout << std::endl;
	}

	//5------------------------------------
	std::cout << "Task n. 5" << std::endl;

	int CountOfYears;
	std::cout << "Enter how many years:	";
	std::cin >> CountOfYears;
	std::cout << std::endl;

	if (CountOfYears % 4 == 0)
	{
		if (CountOfYears % 4 == 0 && CountOfYears % 100 == 0)
		{
			if (CountOfYears % 4 == 0 && CountOfYears % 100 == 0 && CountOfYears % 400 == 0)
			{
				std::cout << "True!" << std::endl;
			}
			else
			{
				std::cout << "False!" << std::endl;
			}
		}
		else
		{
			std::cout << "True!" << std::endl;
		}
	}
	else
	{
		std::cout << "False!" << std::endl;
	}
}

