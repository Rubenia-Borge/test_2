#ifndef COWH
#define COWH

#include <iostream>
#include <string>

#include "animal.h"
using namespace std;

class cow: public animal{
	public:
		cow();
		cow(string breed, float weight, string name, string gender, string spayed, string id, string color, string comment);
		void setBreed(string breed);
		void setSpayed(string spayed);
		void setID(string id);
		void setComments(string comments);
		string getBreed();
		string getSpayed();
		string getID();
		string getComments();
		void display();
	private:
		string Breed;
		string Spayed;
		string ID;
		string Comments; // Be sure to use getline here
};
#endif
