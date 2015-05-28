#include <iostream>
using namespace std;

class EvenNumber{
public:
	int value;
	EvenNumber(){
		value = 0;
	}

	EvenNumber(int newvalue){
		value = newvalue; 
	}

	int getValue();
	int getNext(int newvalue){
		int next = newvalue + 2;
		return next;
	}
	int getPrevious(int newvalue){
		int previous = newvalue - 2;
		return previous;
	}
};

int main(){
	EvenNumber e1(16);
	cout << "The previous even number was: " << e1.getPrevious(16) << endl;
	cout << "The next even number is: " << e1.getNext(16) << endl; 

}