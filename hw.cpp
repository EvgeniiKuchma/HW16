#include <iostream>
void sum0(int num1, int num2, int num3,
	int num4, int num5) {
std::cout<< num1 + num2 + num3 + num4 + num5<<"\n\n";
}
void arr1( int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if(arr[i]<0)
		arr[i] *= -1;
	std::cout << arr[i]<<", ";
	}	
	std::cout << "\b\b.\n\n";
}
void mult(int n)
{
	static int s = 1;
	s *= n;
	std::cout << s << "\n";
}
int main()
{
	sum0(1, 2, 3, 4, 5);


	const int size = 5;
	int arr[size]{ 0,-1,-2,-3,-4 };
	for (int i = 0; i < size; i++)
	{
	std::cout << arr[i]<<", ";
	}
	std::cout <<"\b\b.\n\n";
	arr1(arr,size);


	int n;
	std::cout << "Enter number: ";
	std::cin >> n;
	mult(n);
	mult(n);
	mult(n);
	
	return 0;
}