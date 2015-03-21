#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool ispermutation_1(const string& s1, const string& s2)
{
	string s1_cpy = s1;
	string s2_cpy = s2;
	sort(s1_cpy.begin(), s1_cpy.end());
	sort(s2_cpy.begin(), s2_cpy.end());
	return s1_cpy == s2_cpy;
}

bool ispermutation_2(const string& s1, const string& s2)
{
	if(s1.size() != s2.size()) 
		return false;
	int array[256] = { 0 };
	string::const_iterator it;
	for(it = s1.begin(); it != s1.end(); ++it) {
		array[*it]++;
	}
	for(it = s2.begin(); it != s2.end(); ++it) {
		if(--array[*it] < 0)
			return false;
	}
	return true;
}

int main()
{
	cout << ispermutation_2("dhiworld", "worlddhi") << endl;
}





