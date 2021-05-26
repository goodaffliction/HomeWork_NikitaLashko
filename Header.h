#pragma once
#include <iostream>
#include <cstdarg>

namespace HM5tasks
{
	void SwitchNumber(int*, int);
	void Increase(int*, int);
	void CheckSum(int*, int);
	void ChangePlace(int*, int, int);
	void ChangeFunction(int, ...);

	//1---------------------------------
	void SwitchNumber(int* array, int n)
	{
		std::cout << "Before switch: ";

		for (int i = 0; i < n; i++)
		{
			std::cout << array[i] << " ";
		}

		std::cout << std::endl;

		std::cout << "After switch:  ";

		for (int i = 0; i < n; i++)
		{
			array[i] = array[i] * (-1);
			array[i] = array[i] + 1;
			std::cout << array[i] << " ";
		}
	};

	//2---------------------------------
	void Increase(int* array, int n)
	{
		int m = 1;
		std::cout << "Result:  ";

		for (int i = 0; i < n; i++)
		{
			array[i] = m;
			m += 3;
			std::cout << array[i] << " ";
		}
	};

	//3---------------------------------
	void CheckSum(int* array, int n)
	{
		int left = 0;
		int right = 0;
		int bIsNot = 0;

		std::cout << "Cases:  " << std::endl;

		for (int t = 1; t < n; t++)
		{
			left = 0;
			right = 0;

			for (int i = 0; i < t; i++)
			{
				left = left + array[i];
			}

			std::cout << "left = " << left << " ";

			for (int j = (n - 1); j > (t - 1); j--)
			{
				right = right + array[j];
			}

			std::cout << "right = " << right << " ";

			std::cout << std::endl;

			if (left == right)
			{
				std::cout << "Place, where equal: " << t << " || " << t + 1 << std::endl;
				bIsNot++;
				break;
			}
		}

		if (bIsNot == 0)
		{
			std::cout << "There is not such cases" << std::endl;
		}
	};

	//4---------------------------------
	void ChangePlace(int* array, int n, int m)
	{
		std::cout << "After Displacement:  " << std::endl;

		int place = 0;

		if ((m > 0) && (m != 0))
		{
			for (int i = 0; i < m; i++)
			{
				place = array[0];

				for (int i = 0; i < n - 1; i++)
				{
					array[i] = array[i + 1];
					std::cout << array[i] << " ";
				}

				array[n - 1] = place;
				std::cout << array[n - 1] << " ";
				std::cout << std::endl;
			}
		}
		else
		{
			if (m != 0)
			{
				for (int i = 0; i > m; i--)
				{
					place = array[n - 1];

					for (int i = n - 1; i > 0; i--)
					{
						array[i] = array[i - 1];
					}

					array[0] = place;
					std::cout << std::endl;

					for (int i = 0; i < n; i++)
					{
						std::cout << array[i] << " ";
					}
				}
			}
			else
			{
				for (int i = 0; i < n; i++)
				{
					std::cout << array[i] << " ";
				}
				std::cout << std::endl;
				std::cout << "Displacement hasn't happened(";
			}
		}
	};

	//5---------------------------------
	void ChangeFunction(int size, ...)
	{
		int p;
		va_list lst;
		va_start(lst, size);

		for (int i = 0; i < size; i++)
		{
			p = va_arg(lst, int);
			p = p * (-1);
			p = p + 1;
			std::cout << p << " ";
		}

		va_end(lst);
	};
}