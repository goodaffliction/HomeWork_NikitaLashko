#include <iostream>
#include "Header.h"

int main() 
{
	//Pointers
	//1---------------------------------
	void (*fx) (int*, int);
	fx = HM5tasks::SwitchNumber;

	//2---------------------------------
	void (*fy) (int*, int);
	fy = HM5tasks::Increase;

	//3---------------------------------
	void (*fz) (int*, int);
	fz = HM5tasks::CheckSum;

	//4---------------------------------
	void (*fa) (int*, int, int);
	fa = HM5tasks::ChangePlace;

	//5---------------------------------
	void (*fb) (int, ...);
	fb = HM5tasks::ChangeFunction;
	

//1---------------------------------
	std::cout << "First Task: " << std::endl;
	int arr[7] = {1, 1, 0, 1, 0, 0, 1};
	fx(arr, 7);
	std::cout << std::endl; std::cout << std::endl;

//2---------------------------------
	std::cout << "Second Task: " << std::endl;
	int app[8] = {};
	fy(app, 8);
	std::cout << std::endl; std::cout << std::endl;

//3---------------------------------

	std::cout << "Third Task: " << std::endl;
	int acc[7] = { 2, 1, 1, 1, 1, 3, 1 };
	fz(acc, 7);
	std::cout << std::endl;

//4---------------------------------

	std::cout << "Fourth Task: " << std::endl;
	int abb[7] = { 2, 5, 7, 9, 1, 3, 4 };
	fa(abb, 7, 5);
	std::cout << std::endl; std::cout << std::endl;

//5---------------------------------
	std::cout << "Fifth Task: " << std::endl;
	int size = 5;
	fb(size, 1, 0, 1, 0, 1);
	std::cout << std::endl;

	return 0;
}