#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>

using namespace std;

int countPrimes(int n) {  
       if (n <= 2) return 0;
        int sqrn = sqrt(n);
        vector<bool> isPrime (n, true);
        int sum = 1;
        for (int i = 3; i < n; i +=2)
        {
            if (isPrime[i])
            {
                sum++;
                for(int j = i; j < n; j += i) isPrime[j] = false;
            }
            
        } 
    return sum;  
}  

int main()
{
	int n = 1500000;
	
	cout << countPrimes(n);
	return 0; 
}
