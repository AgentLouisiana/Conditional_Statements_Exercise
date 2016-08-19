#include <iostream>
int main()
{
	{
		//1

		int x;
		int y = 0;
		if (int y = 0);
		{
			x = 100;
		}
		std::cout << x;
		system("pause");
	}
	{
		//2

		int sml;
		int lrg;
		std::cout << "Give me two numbers." << std::endl;
		std::cin >> sml;
		std::cin >> lrg;

		if (sml < lrg)
		{
			std::cout << lrg << std::endl;
		}
		else if (sml > lrg)
		{
			std::cout << sml << std::endl;
		}
		else (sml == lrg);
		{
			std::cout << lrg << std::endl;
		}

		system("pause");
	}
	{
		//3

		/*std::cout << "Pick 5 numbers only" << std::endl;

		int num[5];
		int i = 0;
		num[i] = 0;
		std::cout << num[i];
		for (int i = 0; i < , i++);*/
	}
	{
		//4
		
		std::cout << "Pick a number 1-4" << std::endl;
		int choice;
		std::cin >> choice;
			switch (choice)
			{
			case 1:
				std::cout << "1";
				break;
			case 2:
				std::cout << "2 or 3";
				break;
			case 3:
				std::cout << "2 or 3";
				break;
			case 4:
				std::cout << "4";
				break;
			default:
				std::cout << "Invalid";
			}
			system("pause");
	}
	{
		//5

		int x;
		std::cout << "Pick One Number" << std::endl;
		std::cin >> x;
		int y = (x == 0) ? 0 : 10 / x;

		system("pause");
	}
	{
		//	//6

		std::cout << "Give me two numbers." << std::endl;

		int numa;
		int numb;
		std::cin >> numa;
		std::cin >> numb;

		std::cout << "Pick a mathematical operation from this list." << std::endl;
		std::cout << " 1)+, 2)-, 3)*, 4)/, 5)%" << std::endl;
		
		int op;
		std::cin >> op;

		int a = numa + numb;
		int b = numa - numb;
		int c = numa * numb;
		int d = numa % numb;
		float e = numa / numb;

		if (1)

		{
			std::cout << a << std::endl;
		}
		else if (2)
		{
			std::cout << b << std::endl;
		}
		else if (3)
		{
			std::cout << c << std::endl;
		}
		else if (4)
		{
			std::cout << e << std::endl;
		}
		else (5);
		{
			std::cout << d << std::endl;
		}
		system("pause");
	}
	{
		//7
	}
}