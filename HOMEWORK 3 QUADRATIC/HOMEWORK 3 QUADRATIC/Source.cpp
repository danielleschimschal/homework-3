#include <iostream>
using namespace std;

class QuadraticEquation{
public:
	int a;
	int b;
	int c;

	QuadraticEquation(){
		a = 0;
		b = 0;
		c = 0;
	}

	QuadraticEquation(int newa, int newb, int newc){
		a = newa;
		b = newb;
		c = newc;
	}

	int getDiscriminant(int a, int b, int c){
		double total = b * b - (4 * a * c);
		return (total);
	}
	double getRoot1(int a, int b, int c){
		double root1 = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
		return root1;
	}
	double getRoot2(int a, int b, int c){
		double root2 = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);
		return root2;
	}
};

int main(){
	
	int a;
	int b;
	int c;
	cout << "What is the value of a? ";
	cin >> a;
	cout << "What is the value of b? ";
	cin >> b;
	cout << "What is the value of c? ";
	cin >> c;

	QuadraticEquation q1(a, b, c);
	cout << "The discriminant is " << q1.getDiscriminant(a, b, c) << endl;

	if (q1.getDiscriminant(a, b, c) > 0)
		cout << "The equation has two real roots: " << q1.getRoot1(a,b,c) << " and " << q1.getRoot2(a,b,c) << endl;
	else if (q1.getDiscriminant(a,b,c) == 0)
		cout << "The equation has one real root: " << q1.getRoot1(a,b,c) << endl;
	else
		cout << "The equation has no real roots." << endl;
}

