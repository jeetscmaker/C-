#include <iostream>
using namespace std;

class complex{
	int d = 10;
	static int count;
public:
	void display(void);
	static void show(void);
};

int complex :: count = 5;
void complex :: display(){
	cout << "\ninside display method :\n";
	cout << count << endl;
	cout << d;
}

void complex :: show(){
	cout << "\nInside static method show :\n";
	count = count + 4;
	cout << count << endl;
}

int main()
{
	complex c;
	c.display();
	c.show();
	complex::show();
	return 0;
}
