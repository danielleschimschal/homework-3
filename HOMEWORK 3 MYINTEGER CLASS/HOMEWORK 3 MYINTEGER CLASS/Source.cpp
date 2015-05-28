//// This isn't right but I'm not sure what else it is asking me to do and I'm completely lost as to how to fix what I do have

#include <iostream>
#include <string>
using namespace std;

class MyInteger{
public:
	int value;

	
	MyInteger(int newvalue){
		newvalue = value;
	}

	int getvalue(){
		return value; 
	}

	bool isEven(int value){
		if (value % 2 == 0)
			return true;
		else 
			return false;
	}
	
	bool isOdd(int value){
		if (value % 2 == 0)
			return false;
		else
			return true;
	}
	
	bool isPrime(int value){
		int i = 0;
		for (i = 2; i <= value; i++){
			if (value % i != 0)
				return true;
		}
		return false;
	}

	bool isEven(){																/// for these it uses the value = 0 and I don't know if it's supposed to do that or
		if (value % 2 == 0)														/// if it's supposed to use the new number that you cin. This is reflected when you 
																				/// cout in int main(). 
			return true;
		else
			return false;
	}
	bool isOdd(){
		if (value % 2 != 0)
			return true;
		else
			return false;
	}
	bool isPrime(){									
		int i = 0;
		for (i = 2; i <= value / 2; i++){
			if (value % i != 0)
				return true;
		}
		return false;
	}

	static bool isEven(MyInteger myInteger){
		return myInteger.isEven(myInteger.getvalue());
	}

	static bool isOdd(MyInteger myInteger){
		return myInteger.isOdd(myInteger.getvalue());
	}

	static bool isPrime(MyInteger myInteger){
		return myInteger.isPrime(myInteger.getvalue());
	}

	bool equals(int intValue){
		return value == intValue;
	}

	bool equals(MyInteger myInteger){
		return equals(myInteger.getvalue());
	}

	
};

int main(){
	int newvalue;
	int intValue; 
	cout << "Enter an integer: ";
	cin >> newvalue;
	cout << "Enter another integer: ";
	cin >> intValue;
	MyInteger n(newvalue); 

	

	cout << "Even?: " << n.isEven(newvalue) << endl;
	cout << n.isEven() << endl;

	cout << "Odd?: " << n.isOdd(newvalue) << endl;
	cout << n.isOdd() << endl;

	cout << "Prime ?: " << n.isPrime(newvalue) << endl; 
	cout << n.isPrime() << endl;


	cout << "Is the value the same?" << n.equals(intValue) << endl; 
	
}
