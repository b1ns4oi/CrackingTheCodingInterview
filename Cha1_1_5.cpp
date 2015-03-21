#include <iostream>
#include <string>

using namespace std;

string compress(const string& s1)
{
	string s2;
	if(s1.size() == 0)
		return s2;
	char lastc = s1[0];
	string::size_type n = 1;
	for(string::const_iterator it = s1.begin()+1; it != s1.end(); ++it) {
		if(lastc == *it) {
			n++;
		}
		else {
			s2.push_back(lastc);
			s2.push_back('0'+n);
			lastc = *it;
			n = 1;
		}
	}
	s2.push_back(lastc);
	s2.push_back('0'+n);
	return s1.size() < s2.size() ? s1 : s2;
}

int main()
{
	cout << compress("a11222") << endl;
}