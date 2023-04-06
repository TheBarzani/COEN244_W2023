#include<iostream>
using namespace std;

// Function for calculating Factorial
int calculateFactorial( int num)
{
	int fact=1;

	for(int i=1;i<=num;i++)
	fact*=i;

	return fact;
}

int calculateSum( int len, int arr[])
{
    int sum=0;

    for(int i=0;i<len;i++)
        sum+=arr[i];

    return sum;
}

int main()
{

    int len=3;
    int arr[3]= {1, 2, 3 };


    /**
     * These are all function calls where
     * the compiler calls the function and
     * triggers it when it appears in the
     * main function. 
     */

   cout << "Sum of 1,2,3 : " << calculateSum(len, arr ) << endl; // Calling the function

    // Calling the function to calculate factorial of 2, 3 and 4
	
    cout<<"Factorial of 1 : "<<calculateFactorial(1)<<endl;
    cout<<"Factorial of 2 : "<<calculateFactorial(2)<<endl;
    cout<<"Factorial of 3 : "<<calculateFactorial(3)<<endl;
}