
#include "cow.h"

cow::cow() {
	animal();
	Breed = "";
	Spayed = "";
	ID = "";
	Comments = "";
}
cow::cow(string breed, float weight, string name, string gender, string spayed, string id, string color, string comments) {
	animal(weight, name, gender, color);
	Breed = breed;
	Spayed = spayed;
	ID = id;
	Comments = comments;
}
void cow::setBreed(string breed){
	Breed = breed;
}
void cow::setSpayed(string spayed){
	Spayed = spayed;
}
void cow::setID(string id){
	ID = id;
}
void cow::setComments(string comments){
	Comments = comments;
}
string cow::getBreed(){
	return Breed;
};
string cow::getSpayed(){
	return Spayed;
}
string cow::getID(){
	return ID;
}
string cow::getComments(){
	return Comments;
}
void cow::display(){
	cout << "This is from the derived class" << endl;
	cout << "Breed is: " << Breed << ", Spayed is: " << Spayed << ", ID is: " << ID << ", Comments is: " << Comments << endl;
}
