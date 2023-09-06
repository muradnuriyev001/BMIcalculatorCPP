#include <iostream>
using namespace std;

int main() {
	float userHeight, userWeight, bmi;

	cout << "Welcome to BMI Calculator!" << endl;
	cout << "Input you height(cm) and weight(kg) below: " << endl;
	cout << "Your Height(cm): ";
	cin >> userHeight;
	if (userHeight < 110 || userHeight>250) {
		cout << "Invalid Input";
		return 0;
	}
	cout << "Your weight(kg): ";
	cin >> userWeight;
	if (userWeight < 0 || userWeight > 300) {
		cout << "Invalid Input";
		return 0;
	}

	bmi = userWeight / pow((userHeight/100),2);

	cout <<"Your BMI(Body Mass Index): " << bmi << endl;
	
	if (bmi < 16) {
		cout << "Severe Thinness";
	}
	else if (bmi >= 16 && bmi <= 17) {
		cout << "Moderate Thinness";
	}
	else if (bmi >= 17 && bmi <= 18.5) {
		cout << "Mild Thinness";
	}
	else if (bmi >= 18.5 && bmi <= 25) {
		cout << "Normal";
	}
	else if (bmi > 25) {
		cout << "Obese";
	}
	else {
		cout << "Undefined BMI";
	}

}