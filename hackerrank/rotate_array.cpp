#include <iostream>
using namespace std;



/*

int main()
{
	int n,d;

	cin >> n >> d;
	int *array = new int[n];

	for( int i =0; i < n; i++)
	{
		cin >> array[i];
	}

	for(int i = 0; i < d; i++)
	{
		int temp = array[0];
		for(int j =0 ; j< n-1; j++)
		{
			array[j] = array[j+1];
		}

		array[n-1] = temp;


		// inner print function for checing after each iteration.
		/*for(int k =0; k < n; k++)
		{

			cout << array[k] << " ";
		}

		cout << endl; 
	}
     

	for(int k = 0; k < n; k++)
		{
			cout << array[k] << " ";
		}

		cout << endl;

	delete [] array;
	return 0;
} */

void print_array(int array[], int size)
{
	for(int k = 0; k < size; k++)
		{
			cout << array[k] << " ";
		}

		cout << endl;
}

int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else 
	{
		return gcd(b, a%b);
	}
}

void left_rotate(int array[], int n, int d)
{
	int i, j, k, temp;

	for(i=0; i < gcd(d,n); i++)
	{
		temp = array[i];
		j = i;
		while(1)
		{
			k = j+d;
			if(k >= n)
			{
				k = k - n;
			}
			if( k == i)
			{
				break;
			}

			array[j] = array[k];
			j = k;
		}
		array[j] = temp;
	}
}

int main()
{
	int n,d;

	cin >> n >> d;
	int *array = new int[n];

	for( int i =0; i < n; i++)
	{
		cin >> array[i];
	}

	left_rotate(array, n ,d);
	print_array(array, n);

	delete [] array;

	return 0;
}