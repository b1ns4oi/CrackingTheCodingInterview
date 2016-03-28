#include <iostream>
#include <string>
#include <set>

using namespace std;

bool isunique_1(const string& s) 
{	
	for(string::const_iterator it = s.begin(); it != s.end(); ++it) {
		for(string::const_iterator it2 = it+1; it2 != s.end(); ++it2) {
			if(*it == *it2)
				return false;
		}
	}
	return true;
}

bool isunique_2(const string& s) 
{
	set<char> c_set;
	for(string::const_iterator it = s.begin(); it != s.end(); ++it) {
		if(c_set.find(*it) != c_set.end())
			return false;
		c_set.insert(*it);
	}
	return true;
}

int main()
{
	cout << isunique_2("abcdefghijklmnopqrstuvwxyz12345678900") << endl;
}










