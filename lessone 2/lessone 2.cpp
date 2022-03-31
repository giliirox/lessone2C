
#include "pch.h"
#include <iostream>
#include <iterator>
#include "Buffering.h" //The main exercise

//lesson 2

// The main exercise in a separate file - Buffering.cpp

void PrintArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		std::cout << *arr++<<", ";
	}
	std::cout<< " "<< std::endl;
}

void Func3()
{
	std::cout << "Pointer : Demonstrate the use of & and * operator : " << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
    
	int i = 300;
	int *ptri = &i;

	float  f = 300.60;	
	float *ptrf = &f;
	
	char ch = 'z';
	char* ptrch = &ch;

	std::cout << " i=  " << *ptri << std::endl;
	std::cout << " f=  " << *ptrf << std::endl;
	std::cout << " ch=  " << *ptrch << std::endl;
	std::cout << "------------------------" << std::endl;
	
	std::cout << "Using & operator : " << std::endl;
	std::cout << "------------------------"<< std::endl;
	
	std::cout << "address of i = " << &i << std::endl;
	std::cout << "address of f = " << &f << std::endl;
	std::cout << "address of ch = " << &ch << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "Using & and * operator :" << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "value at address of i = " << *(&i) << std::endl;
	std::cout << "value at address of f = "<<*(&f) << std::endl;
	std::cout << "value at address of ch = " << *(&ch) << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "Using only pointer variable : " << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "address of i = " << ptri << std::endl;
	std::cout << "address of f =" << ptrf<< std::endl;
	std::cout << "address of ch = " << ptrch<< std::endl;
	std::cout << "------------------------" << std::endl;


	std::cout << "Using only pointer operator :" << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "value at address of i = " << *ptri << std::endl;
	std::cout << "value at address of f = " << *ptrf << std::endl;
	std::cout << "value at address of ch = " << *ptrch << std::endl;
	std::cout << "------------------------" << std::endl;
}

void Func14(int arr[],int len)
{
	int* arr2 = arr;
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i-1; j++)
		{
			if (*arr2 > *(arr2 + 1))
			{
				temp = *arr2;
				*arr2 = *(arr2 + 1);
				*(arr2 + 1) = temp;
			}
			arr2++;
        }
			 arr2 = arr;
	}
}

void func17(int arr[], int len)
{
	int * end = &arr[len-1];

	int temp;
	while (end>arr)
	{
		temp = *arr;
		*arr = *end;
		*end = temp;
		end--;
		arr++;
	}
}

void func22(char string[],int len)
{
	char* a = &string[len - 1];
	for (int i = 0; i < len; i++)
	{
		std::cout << *a--<<"  ";
	}
}

// int main()
// { 
////	int b[]{1,9,3,5,4,8,2};
////    char a[4] = { 'a','b','c' };
////	
////	Func3();
////
////	PrintArr(b, 7);//before sorting
////	Func14(b,7);
////	PrintArr(b, 7);//after sorting
////	
////	func17(b, 7);
////	PrintArr(b, 7);//after reverseing
////	
////	func22(a,3);
//	
//        std::cout << getProb()<<std::endl;
//	 
//	
//	
//}
