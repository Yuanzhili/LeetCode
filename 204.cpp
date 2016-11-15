#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int n = 1500000;
	vector<int> primeList;
	
	primeList.push_back(2);
	
	for (int i = 3; i < n; i += 2)
	{
		int isPrime = 1;
		int sqrn = sqrt(n);
		for (vector<int>::iterator iter = primeList.begin(); iter != primeList.end() && *iter <= sqrn; iter++)
		{
			if ( i % (*iter) == 0)
			{
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime == 1)
		{
			primeList.push_back(i);
		}
	
	}
	
	cout << primeList.size();
	return 0; 
}
