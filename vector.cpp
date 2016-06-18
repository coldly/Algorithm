#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<int> iv;
	for (int i = 0; i < 10; i++) {
		iv.push_back(i + 1);
	}
	for (int i = 0; i < iv.size(); i++) {
		cout << iv[i] << endl;
	}
	vector<string> sv;
	sv.push_back("One");
	sv.push_back("Two");
	sv.push_back("Three");
	sv.push_back("Four");
	sv.push_back("Five");
	for (int i = 0; i < sv.size(); i++) {
		cout << sv[i] << endl;
	}
	sv.pop_back(); // Remove the last element
	vector<string> v;
	v.swap(sv); 
	sv.clear();
	cout << boolalpha << sv.empty() << endl;
	v.push_back("swap");
	cout << v.at(4) << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}

