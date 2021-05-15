#include <iostream>

int main()
{
	//1
	bool isFalse = true;

	char CharVar = 2;
	int IntVar = 22;
	float FloatVar = 22.22;

	int arr[5] = { 1, 2, 3, 4, 5 };

	enum Numbers
	{
		One,
		Two,
		Three,
		Four,
		Five
	};

	struct Dog
	{
		int legs;
		int age;
		float speed;
		bool isCanFly;
		enum color {blue, red, white, yellow, green};
		struct head
		{
			int eyes;
			int teeth;
			int hears;
			bool isHasBrain;
		};
	};

	//2
	enum symbol {krestik, nolik, kletka}; //empty - pustaya kletka

	//3
	symbol array[4] = { nolik, krestik, kletka };

	//4
	struct Pole
	{
		symbol Krestik = krestik;
		symbol Nolik = nolik;
		symbol Kletka = kletka;
		int n; // kolichestvo kletok po gorizontali
		int m; // kolichestvo kletok po vertikali
	};

	//5
	union Value
	{
		char CharVar;
		int IntVar;
		float FloatVar;
	};

	struct isValue
	{
		unsigned isChar : 1;
		unsigned isInt : 1;
		unsigned isFloat : 1;
	};


}

