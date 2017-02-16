#include <iostream>
#include <math.h>
#include <string>

using namespace std;


void partC(int arr[], int arraySize); 
void ex01() {
	//part A    
	bool hasPassedTest = true;

	//part B
	int x = rand() % 100;
	int y = rand() % 100;

	if (x >= y)
		cout << "x is greater than or equal to y" << endl;
	else {
		cout << "x is less than y" << endl;
    }

	//part C 
	int numberofShares;
	cout << "Enter the number of shares please." << endl;
	cin >> numberofShares;

	if (numberofShares < 100) {
		cout << "This number is less than 100." << endl;
	}
	else {
		cout << "This number is greater than or equal to 100." << endl;
	}
	//part D 
	int boxWidth;
	int bookWidth;

	cout << "Please enter the box width." << endl;
	cin >> boxWidth;
	cout << "Please enter the book width." << endl;
	cin >> bookWidth;

	int remainder = boxWidth % bookWidth;
	if (remainder == 0) {
		cout << "The box width is evenly divisible by the book width." << endl;
	}
	else {
		cout << "The box width is not evenly divisible by the book width." << endl;
	}
	//part E 
	int shelfLife;
	int outsideTemp;

	cout << "Please enter the shelf life of a box of chocolate." << endl;
	cin >> shelfLife;
	cout << "Please enter the outside temperature in Fahrenheit." << endl;
	cin >> outsideTemp;

	int newShelfLife = shelfLife-4;
		if (outsideTemp > 90) {
			cout << "The true shelf life of the chocolates is " << newShelfLife << endl;
		}
		else {
			cout << shelfLife << " is the true shelf life of the chocolates." << endl;
		}

}

void ex02() {
	//part A
	double length = 0;
	double height = 0;
	double hypotenuse = 0;

	cout << "Please enter the length and height of a right triangle." << endl;
	cin >> length >> height;
	
	double squareBothSidesAdded = length * length + height * height;
	hypotenuse = pow(squareBothSidesAdded, 0.5);
	cout << "The hypotenuse of this triangle is " << hypotenuse << endl;
 

	//part B 
	char ch;

	do {
		cout << "Enter a character, Y or N." << endl;
		cin >> ch;
	} while (ch != 'Y' && ch != 'N');


	if (ch == 'Y') {
		cout << "Yes" << endl;
	}

	else if (ch == 'N') {
		cout << "No" << endl;
	}

	//part C 
	char tab = '\t'; 

	//part D 
	cin.ignore();
	string mailingAddress;
	cout << "What is your address?" << endl;
	//cin >> mailingAddress;
	getline(cin, mailingAddress);

	//part E 
	string name = "";

}

void ex03() {
	//part A 
	int numberChosen;

	do {
		cout << "Please type an integer between 1 and 10." << endl;
		cin >> numberChosen;
	} while (numberChosen < 1 || numberChosen > 10);
		
	//part B 
	double largeNumber = 0;
	for (int i = 1; i <= numberChosen; i++) {
		largeNumber = largeNumber + pow(i, 3);

	}
	cout << "The sum of cubes from one to the number you chose is " << largeNumber << endl;

	//part C 

	int i = 0;
		do {
			cout << "*" << endl;
			i++;

		} while (i < numberChosen);

	
	//part D
	for (int i = 0; i <= 40; i = i + 2) {
		cout << i << "" << endl;
		}

	//part E
	int numberChosenDoubled = numberChosen * 2;
	
	//part F
	int firstNum = rand() % 100;
	int secondNum = rand() % 100;
	int add = firstNum + secondNum;

	cout << "The two random numbers added together is " << add << endl;
	

}

//part G 
void addOne(int &y) {
	y = y + 1;
}

void ex04() {
	//part A 
	int array[3];

	cout << "Please enter three integers: ";
	cin >> array[0] >> array[1] >> array[2];

	//part B 
	int sumOfThree = 0;
	for (int i = 0; i < 3; i++) {
		sumOfThree = sumOfThree + array[i];
	}
	int productOfThree = 1;
	for (int i = 0; i < 3; i = i + 1) {
		productOfThree = productOfThree * array[i];
	}


	cout << "The sum of the three integers is: " << sumOfThree << endl;
	cout << "The product of the three integers is: " << productOfThree << endl;
	partC(array, 3); 



}

void partC(int arr[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		cout << "The values in the array are: " << arr[i] << endl;
	}
}

void partD(int arr[], int arraySize) {
	int x;
	cout << "Please enter a value: " << endl;
	cin >> x;
	int p = arr[2] * x * x + arr[1] * x + arr[0];

}

	int main() {
		ex01();
		ex02();
		ex03();
		ex04();

		return 0;

	}