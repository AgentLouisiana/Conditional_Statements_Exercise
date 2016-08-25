#include <iostream>
int main()
{
		////1

		////Write an if statement that assigns 100 to x when y is equal to zero

		//int x;
		//int y = 0;
		//if (int y = 0);
		//{
		//	x = 100;
		//}
		//std::cout << x;
		//system("pause");

		////2

		///*Write a program that asks the user for two numbers and then display the larger number to
		//the console.*/

		//int sml;
		//int lrg;
		//std::cout << "Give me two numbers." << std::endl;
		//std::cin >> sml;
		//std::cin >> lrg;

		//if (sml < lrg)
		//{
		//	std::cout << lrg << std::endl;
		//}
		//else if (sml > lrg)
		//{
		//	std::cout << sml << std::endl;
		//}
		//else (sml == lrg);
		//{
		//	std::cout << lrg << std::endl;
		//}

		//system("pause");

		////3

		///*Implement a C++ program that reads five(5) numbers and displays the numbers in
		//ascending order if the sum of the five numbers is positive and in descending order if the sum
		//is negative.If the sum is equal to zero then the program must display the numbers in the
		//same order that they were entered*/

		//std::cout << "Pick 5 numbers only" << std::endl;

		//int num[5];
		//std::cin >> num[5];
		//int i = 0;
		//num[i] = 0;
		//std::cout << num[i];
		//for (int i = 0; i < 6; i++);

		//system("pause");

		////4

		////Convert the following code into a switch statement:
		////if (choice == 1)
		////{
		////	std::cout << "1";
		////}
		////else if (choice == 2 || choice == 3)
		////{
		////	std::cout << "2 or 3";
		////}
		////else if (choice == 4)
		////{
		////	std::cout << "4";
		////}
		////else
		////{
		////	std::cout << "Invalid";
		////}
		//
		//std::cout << "Pick a number 1-4" << std::endl;
		//int choice;
		//std::cin >> choice;
		//	switch (choice)
		//	{
		//	case 1:
		//		std::cout << "1";
		//		break;
		//	case 2:
		//		std::cout << "2 or 3";
		//		break;
		//	case 3:
		//		std::cout << "2 or 3";
		//		break;
		//	case 4:
		//		std::cout << "4";
		//		break;
		//	default:
		//		std::cout << "Invalid";
		//	}
		//	system("pause");

		////5

		//	//Convert the following if statement into a ternary operator

		//	//	if (x == 0)
		//	//	{
		//	//		y = 0;
		//	//	}
		//	//	else
		//	//	{
		//	//		y = 10 / x;
		//	//	}

		//int x;
		//std::cout << "Pick One Number" << std::endl;
		//std::cin >> x;
		//int y = (x == 0) ? 0 : 10 / x;

		//system("pause");

		////6

		///*Write a program that accepts from the user two numbers and a mathematical operation
		//character(+, -, *, / , %).Perform the appropriate maths based on which character is input.*/

		//std::cout << "Give me two numbers." << std::endl;

		//int numa;
		//int numb;
		//std::cin >> numa;
		//std::cin >> numb;

		//std::cout << "Pick a mathematical operation from this list." << std::endl;
		//std::cout << " 1)+, 2)-, 3)*, 4)/, 5)%" << std::endl;
		//
		//int op;
		//std::cin >> op;

		//int a = numa + numb;
		//int b = numa - numb;
		//int c = numa * numb;
		//int d = numa % numb;
		//float e = numa / numb;

		//if (1)

		//{
		//	std::cout << a << std::endl;
		//}
		//else if (2)
		//{
		//	std::cout << b << std::endl;
		//}
		//else if (3)
		//{
		//	std::cout << c << std::endl;
		//}
		//else if (4)
		//{
		//	std::cout << e << std::endl;
		//}
		//else (5);
		//{
		//	std::cout << d << std::endl;
		//}
		//system("pause");

		////7

		///*Write a program that accepts an integer that represents the month of the year. It should
		//then display the number of days in that month.If a number that doesn’t correspond to a
		//month is entered then the program should display an error message.*/

		//	int month;

		//	std::cout << "Give me a number" << std::endl;

		//	std::cin >> month;

		//	switch (month)
		//	{
		//	case 1:
		//	{
		//		printf("January - 31 Days \n");
		//		break;
		//	}
		//	case 2:
		//	{
		//		printf("February - 28 Days or 29 Days on a leap year \n");
		//		break;
		//	}
		//	case 3:
		//	{
		//		printf("March - 31 Days \n");
		//		break;
		//	}
		//	case 4:
		//	{
		//		printf("April - 30 Days \n");
		//		break;
		//	}
		//	case 5:
		//	{
		//		printf("May - 31 Days \n");
		//		break;
		//	}
		//	case 6:
		//	{
		//		printf("June - 30 Days \n");
		//		break;
		//	}
		//	case 7:
		//	{
		//		printf("July - 31 Days \n");
		//		break;
		//	}
		//	case 8:
		//	{
		//		printf("August - 31 Days \n");
		//		break;
		//	}
		//	case 9:
		//	{
		//		printf("September - 30 Days \n");
		//		break;
		//	}
		//	case 10:
		//	{
		//		printf("October - 31 Days \n");
		//		break;
		//	}
		//	case 11:
		//	{
		//		printf("November - 30 Days \n");
		//		break;
		//	}
		//	case 12:
		//	{
		//		printf("December - 31 Days \n");
		//		break;
		//	}
		//	default:
		//		printf("INVALID!");
		//	}
		//	system("pause");

		//	//8

		//	Suppose you have the following declarations:
		//	bool flag = true;
		//	int numPos = 35, numNeg = -55;
		//	char frstChar = 'J', scndChar = 'O';
		//	double frstPrice = 5.60;
		//	a.numPos > numNeg
		//	b.frstChar > scndChar 
		//	c. !(numPos + numNeg)
		//	d. (numPos == -30) || (numNeg == -55)
		//	e. (frstPrice >= 4.1) && (frstPrice <= 9.9)
		//	f. !flag && (scndChar <= ‘R’)
		//	g. (numPos < 66) || (flag && numPos > 35)
		//	h. ++numPos == 36
		//	i.numPos++ == 36
		//	j. (frstChar == ‘j’) || (frstChar == ‘J’)

			return 0;
}