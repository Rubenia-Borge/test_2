// main.cpp
#include <iostream>
#include <vector>
#include <string>

#include "animal.h"
#include "cow.h"	

using namespace std;

/*
Breed (string)
Weight (float) *
Name (string)*
Gender (‘m’ or ‘f’)*
Spayed or neutered (yes/no)
Registration ID (alphanumeric like HZ123X)
Color description (this could be more than a single word) *
Other comments (also more than a single word)
*/

int main() {
	animal *animalPointer;
	cow cowObject;
	animalPointer = &cowObject;
	vector<animal*> cowVector;
	cout << "\nPlease enter in information about 3 cows." << endl;
	// Input
	for(int i = 0; i < 3; i++) {
		string tempString = "";
		float tempFloat = 0.0;
		cout << "Enter the Breed (string) of cow " << i+1 << ": ";
		cin >> tempString;
		cowObject.setBreed(tempString);
		cout << "Enter the Weight (float) of cow " << i+1 << ": ";
		cin >> tempFloat;
		animalPointer->animal::setWeight(tempFloat);
		cout << "Enter the Name (string) of cow " << i+1 << ": ";
		cin >> tempString;
		animalPointer->animal::setName(tempString);
		cout << "Enter the Gender (string) of cow " << i+1 << ": ";
		cin >> tempString;
		animalPointer->animal::setGender(tempString);
		cout << "Enter (yes/no - string) if the cow " << i+1 << " is spayed/neutered: ";
		cin >> tempString;
		cowObject.setSpayed(tempString);
		cout << "Enter the registration ID (string) of the cow " << i+1 << ": ";
		cin >> tempString;
		cowObject.setID(tempString);
		cout << "Enter the Color (string) of the cow " << i+1 << ": ";
		cin.ignore();
		getline(cin, tempString);
		animalPointer->animal::setColor(tempString);
		cout << "Enter any other comments (string) of the cow " << i+1 << ": ";
		getline(cin, tempString);
		cowObject.setComments(tempString);
		cowVector.push_back(animalPointer);
	}
	// Output using display
	for(int i = 0; i < cowVector.size(); i++) {
		animal *animalPointerDisplay = cowVector.at(i);
		animalPointerDisplay->animal::display();
		animalPointerDisplay->display();
	}
	cowVector.clear();
	return 0;
}
