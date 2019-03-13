#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool is7(int i)
{
	return	(i % 7 == 0);
}

int main()
{
	vector<int> one_million_of_ints;

	for (unsigned int i = 1; i <= 1000000; i++)
		one_million_of_ints.push_back(i);

	vector<int> one_million_of_ints_evenly_divisible_by_7 (1000000);  // or (one_million_of_ints.size());

	auto it = std::copy_if(one_million_of_ints.begin(), one_million_of_ints.end(), one_million_of_ints_evenly_divisible_by_7.begin(), is7);  // or [](int i) {return (i % 7 == 0); });
	one_million_of_ints_evenly_divisible_by_7.resize(distance(one_million_of_ints_evenly_divisible_by_7.begin(), it));  // resize vector container to the new size

	cout << "evenly divisble numbers by 7 until one million:";
	
	for (auto itr7 = one_million_of_ints_evenly_divisible_by_7.begin(); itr7 != one_million_of_ints_evenly_divisible_by_7.end(); itr7++)  
		cout << " " << *itr7;
																																			// or for (int& i7 : one_million_of_ints_evenly_divisible_by_7) cout << " " << i7;
	cout << endl;

	return 0;
}