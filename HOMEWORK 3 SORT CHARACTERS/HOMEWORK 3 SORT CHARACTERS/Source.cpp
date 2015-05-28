#include <iostream>
#include <string>
using namespace std;
string sort(string& s);



int main(){
	string s;
	cout << "Enter a string s: "; 
	cin >> s; 
	
	cout << "The word sorted alphabetically by letter is: " << sort(s)  << endl;
	

}

string sort(string& s){
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < s.length() - 1; j++){
			if (s[j] > s[j + 1])
			{
				swap(s[j], s[j + 1]);
				changed = true;

			}
		}

	} while (changed);
	return s;
}