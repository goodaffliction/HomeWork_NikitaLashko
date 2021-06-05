#include <iostream>
#define NEW_LINE std::cout << "\n";

void InitializeArray(int*, int, int);
void findCoincidence();

int main()
{
	findCoincidence();
	return 0;
}

void InitializeArray(int *arr, int x, int RandomChance)
{
	for (int i = 0; i < x; i++)
	{
		arr[i] = rand() % RandomChance;
		std::cout << arr[i] << " ";
	}
}

void findCoincidence()
{
	int x;
	std::cout << "Please, enter size of arrays: ";
	std::cin >> x;
	NEW_LINE

	int RandChance;
	std::cout << "Please, enter random chance: ";
	std::cin >> RandChance;
	NEW_LINE

	int* arr1 = new int[x];
	int* arr2 = new int[x];

	std::cout << "First array's elements: ";
	InitializeArray(arr1, x, RandChance);
	NEW_LINE

	std::cout << "Second array's elements: ";
	InitializeArray(arr2, x, RandChance);
	NEW_LINE

		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				if (arr1[i] == arr2[j])
				{
					std::cout << "The " << i + 1 << " of first array equals to the " << j + 1 << " element of second array\n";
				}
			}
		}

	delete[] arr1;
	delete[] arr2;
}
