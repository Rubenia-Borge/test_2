#include "animal.h"
animal::animal(){ 
	Weight = 0.0;
	Name = "";
	Gender = "";
	Color = "";
}
animal::animal(float weight, string name, string gender, string color){
	Weight = weight;
	Name = name;
	Gender = gender;
	Color = color;
}
void animal::setWeight(float weight) {
	Weight = weight;
}
void animal::setName(string name) {
	Name = name;
}
void animal::setGender(string gender) {
	Gender = gender;
}
void animal::setColor(string color) {
	Color = color;
}
float animal::getWeight() {
	return Weight;
}
string animal::getName() {
	return Name;
}
string animal::getGender() {
	return Gender;
}
string animal::getColor() {
	return Color;
}
void animal::display() {
	cout << "This is from the base class" << endl; // For demonstration
	cout << "Weight is: " << Weight << ", Name is: " << Name << ", Gender is: " << Gender << ", Color is: " << Color << endl;
}
