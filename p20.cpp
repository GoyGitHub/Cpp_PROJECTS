// P20

#include <iostream>
using namespace std;

int main() {
	int mark;
	
	do {
		cout << "Enter grade:";
		cin >> mark;
		
		if(mark >= 49 && mark <= 100)
			cout << "You passed.\n\n";
		else if(mark >= 0 && mark <= 49)
			cout << "You failed.\n\n";
		else
			cout << "Wrong input. Please try again.\n\n";
	}while (mark < 0 || mark > 100);
}
