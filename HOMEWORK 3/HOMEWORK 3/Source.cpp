#include <iostream> 
using namespace std;

class Fan
{
public:
	int speed;
	bool on;
	double radius;

	Fan(){
		speed = 1;
		on = false;
		radius = 5;

	}

	Fan(int nspeed, bool non, double nradius){
		speed = nspeed;
		on = non;
		radius = nradius;
	}
};

	
int main()
{
	Fan f1(3, true, 10);
	cout << "The speed of the first fan is " << f1.speed << endl;
	cout << "The fan is ";
	if (f1.on == true)
		cout << "on" << endl;
	else
		cout << "off" << endl;
	cout << "The radius of the fan is " << f1.radius << endl << endl;

	Fan f2(2, false, 5);
		cout << "The speed of the second fan is " << f2.speed << endl;
	cout << "The fan is ";
	if (f2.on == true)
		cout << "on" << endl;
	else
		cout << "off" << endl;
	cout << "The radius of the fan is " << f2.radius << endl;
}
