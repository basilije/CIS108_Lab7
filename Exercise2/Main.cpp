#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> one_million_of_ints;

	for (unsigned int i = 1; i <= 1000000; i++)
		one_million_of_ints.push_back(i);

	vector<int> one_million_of_ints_evenly_divisible_by_7(one_million_of_ints.size());
	int count7 = distance(one_million_of_ints_evenly_divisible_by_7.begin(), copy_if(one_million_of_ints.begin(), one_million_of_ints.end(), one_million_of_ints_evenly_divisible_by_7.begin(), [](int i) {return (i % 7 == 0); }));
	cout << "Numbers in the vector that are evenly divisible by 7: " << count7 << endl;

	return 0;
}
