#include <iostream>
#include <vector>

using namespace std;

class NumArray
{
public:
	vector<int> vv;
	vector<int> num;
	NumArray(vector<int> &nums)
	{
		int m = nums.size();
		vv.resize(m);
		num.resize(m);
		int sum = 0;
		for (int i = 0; i < m; i++)
		{
			num[i] = nums[i];
			sum += nums[i];
			vv[i] = sum;
		}
	}
	
	int sumRange(int i, int j)
	{
		return vv[j] - vv[i] + num[i];		
	}

};


int main()
{
	vector<int> nums;
	for (int i = 0; i < 10000; i++)
	{
		nums.push_back(i);
	}
	
	
	NumArray numArray(nums);
	cout << numArray.sumRange(0, 10);
	return 0;

}
