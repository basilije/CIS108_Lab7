#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> one_million_of_ints;

	for (unsigned int i = 1; i <= 1000000; i++)
		one_million_of_ints.push_back(i);

	int count_7 = count_if(one_million_of_ints.begin(), one_million_of_ints.end(), [](int i) {return (i % 7 == 0); });
	cout << "Number of the numbers in the vector that are evenly divisible by 7: " << count_7 << endl;

	return 0;
}
