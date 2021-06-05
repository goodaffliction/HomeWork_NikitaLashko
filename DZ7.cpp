#include <iostream>
#include <cstdarg>

//Macros
//1------------
#define CHECK(x, y) ((x) == (y)) ? (std::cout << "Vvedrnnoe chislo vhodit v diapazon\n") : (std::cout << "")
//2------------
#define CONDITION (a > x) || (b > y) || (a < 0) || (b < 0)
#define OUT_OF_ARRAY(arr, x, y) (std::cout << *(*(arr+x)+y))
//3------------
#define COUNT_OF_ELEMENTS(int, arr) std::cout << "Size of array: " << (sizeof(arr)/sizeof(int)) << "\n"

//Functions
void checkFunc();
void arrElement();

int main()
{
	int arr[5];
	int& p = *(arr);
	COUNT_OF_ELEMENTS(int, p);
	//Or
	COUNT_OF_ELEMENTS(int, arr);

	//checkFunc();
	//arrElement();
	return 0;
}

void checkFunc()
{
	int x, y;
	std::cout << "Vvedite diapozon: ";
	std::cin >> x; std::cout << "\n";
	std::cout << "Vvedite chislo ot 0 do " << x - 1 << ": ";
	std::cin >> y; std::cout << "\n";

	int* array = new int[x];
	if ((y > x) || (y < 0))
	{
		std::cout << "Net, ne vhodit\n";
	}
	else
	{
		for (int i = 0; i < x; i++)
		{
			array[i] = i;
			CHECK(array[i], y);
		}
	}
	delete[] array;
}

void arrElement()
{
	int x, y;
	int a, b;
	std::cin >> x; std::cout << "\n";
	std::cin >> y; std::cout << "\n";

	int** arr1 = new int* [x];

	for (int i = 0; i < x; i++)
	{
		arr1[i] = new int[y];
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr1[i][j] = i + j;
			std::cout << (arr1[i][j]) << " ";
		}
		std::cout << "\n";
	}

	std::cout << "\n";

	do {
		std::cout << "Please, enter the X ccordinate: ";
		std::cin >> a; std::cout << "\n";
		std::cout << "Please, enter the Y ccordinate: ";
		std::cin >> b; std::cout << "\n";

		if (CONDITION)
		{
			std::cout << "Out of range! Please, try again.\n\n";
		}

	} while (CONDITION);

	OUT_OF_ARRAY(arr1, a, b);

	delete [] arr1;
}
