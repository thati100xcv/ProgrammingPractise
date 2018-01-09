#include <iostream>

using namespace std;
void Sum(long long int N);

int main()
{
	int T;
	long long int N;
	cin >> T;
	for( int i = 0; i < T ; i++)
	{
		cin >> N;
		Sum(N);
	}

	
	return 0;
}

void Sum(long long int N)
{
	long long int N1,N2,N3,S1,S2,S3,S4;
	N1= (N-1)/3;
	N2= (N-1)/5;
	N3= (N-1)/15;

	S1= 3*(N1*(N1+1)/2);
	S2= 5*(N2*(N2+1)/2);
	S3= 15*(N3*(N3+1)/2);

	cout << S1 + S2 - S3 << endl;
}
