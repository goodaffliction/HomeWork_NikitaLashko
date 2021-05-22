#include <iostream>
#include "Header.h"

int main()
{
	//1---------------------------------------------------------------
	int a = 2; 
	int b = 4;
	int c = 6;
	int d = 8;

	std::cout << "Task Number One: "<< (a * (b + (c / static_cast<float>(d)))) << std::endl << std::endl;

	//2---------------------------------------------------------------
	int x;
	std::cout << "Task Number Two: ";
	std::cin >> x;

	int y = x - 21;
	if (y < 0)
	{
		y *= -1;
	}

	int z = (x - 21) * 2;
	if (z < 0)
	{
		z *= -1;
	}

	(x < 21) ? (std::cout << "Value if true: " << y << std::endl << std::endl) : (std::cout << "Value if false: " << z << std::endl << std::endl);

	//3---------------------------------------------------------------
	std::cout << "Task Number Three: " << (k * (l + (m / static_cast<float>(n)))) << std::endl << std::endl;

	//4---------------------------------------------------------------
	std::cout << "Task Number Four: " << std::endl;
	int i = 0;
	int j = 0;
	int t = 0;
	int u = 0;

	int kub[3][3][3];
	int* pointer = &kub[0][0][0];

	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (t = 0; t < 3; t++)
			{
				std::cout << (kub[i][j][t] = i + j + t) << " ";
				u++;
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "The Midle: " << (u /= 2) << std::endl;
	
	std::cout << "Value of the Midle: " << *(pointer + u);

	return 0;
}