#include <iostream>
#include <math.h>
#include <string>

using namespace std;




void ex01() {
	//part A    
	bool hasPassedTest = true;

	//part B
	int x = rand() % 100;
	int y = rand() % 100;

	if (x >= y)
		cout << "x is greater than or equal to y";
	else {
		cout << "x is less than y";
    }

	//part C 
	int numberofShares;
	cout << "Enter the number of shares please." << endl;
	cin >> numberofShares;

	if (numberofShares < 100) {
		cout << "This number is less than 100.";
	}
	else {
		cout << "This number is greater than or equal to 100.";
	}

	//part D 
	double boxWidth;
	double bookWidth;

	cout << "Please enter the box width." << endl;
	cin >> boxWidth;
	cout << "Please enter the book width." << endl;
	cin >> bookWidth;

	if (count += boxWidth % bookWidth == 0) 
		cout << "The box width is divisible by the book width.";
	
	//part E 
	int shelfLife;
	int outsideTemp;

	cout << "Please enter the shelf life of a box of chocolate." << endl;
	cin >> shelfLife;
	cout << "Please enter the outside temperature in Fahrenheit." << endl;
	cin >> outsideTemp;

	int newShelfLife;
	int newShelfLife = shelfLife - 4;

		if (outsideTemp > 90) {
			cout << "The true shelf life of the chocolates is " << newShelfLife << endl;
		}
		else {
			cout << shelfLife << " is the true shelf life of the chocolates." << endl;
		}

}

void ex02() {
	//part A
	double length;
	double height;
	double hypotenuse;
	double squareBothSidesAdded = pow(length, 2) + pow(height, 2);
	hypotenuse = pow(squareBothSidesAdded, 0.5);

	cout << "Please enter the length and height of a right triangle." << endl;
	cin >> length >> height;
	cout << "The hypotenuse of this triangle is " << hypotenuse << endl; 

	//part B 
	cout << "Enter a character, Y or N." << endl;
	char ch;
	cin >> ch;

	char Y;
	char N;

	if (ch = Y) {
		cout << "Yes" << endl;
	}

	else if (ch = N) {
		cout << "No" << endl;
	}

	else while (ch = Y||N)!
		cout << "Please only type a Y or N.";
	

	//part C 
	//part D 
	string mailingAddress;
	cout << "What is your address?";
	cin >> mailingAddress;

	//part E 
	string name = "";
	while (name == "") {
		cout << "gimme 'one', 'two', or 'three': ";
		string n;
		cin >> n;
		if (n == "one" || n == "two" || name == "three")
			name = n;
		else
			cout << "gimme a real value.\n";
	}

}

void ex03() {
	//part A 
	int numberChosen;

	cout << "Please type an integer between 1 and 10.";
	cin >> numberChosen;

	while (numberChosen)
		cout << "Your number is " << numberChosen; 
			//part B 
			//part C 
			//part D 
	//part E
	int numberChosenDoubled = numberChosen * 2;
	cout << "Your number chosen multiplied by 2 is  " << numberChosenDoubled endl;
	

	//part F 
	int add = g + h
		int g = rand() % 100
		int h = rand() % 100

		cout << "The two random integers added together is " << add;

	//part G 

}

void ex04() {
	//part A 
	int array[3];

	cout << "Please enter three integers: ";
	cin >> array[0] >> array[1] >> array[2];

	//part B 
	int sumOfThree = 0;
	for (int i = 0; i<3; i++) {
		sumOfThree = sumOfThree + array[i];
	}
	int productOfThree = 1;
	for (int i = 0; i<3; i = i + 1) {
		productOfThree = productOfThree * array[i];
	}


	cout << "The sum of the three integers is: " << sumOfThree << endl;
	cout << "The product of the three integers is: " << productOfThree << endl;

	//part C 
	//part D 

}

int main() {
	ex01();
	ex02();
	ex03();
	ex04();

	return 0;

}