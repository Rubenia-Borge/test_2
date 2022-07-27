
#ifndef ANIMALH
#define ANIMALH

#include <iostream>
#include <string>

using namespace std;

class animal{
	public:
		animal();
		animal(float weight, string name, string gender, string color);
		void setWeight(float weight);
		void setName(string name);
		void setGender(string gender);
		void setColor(string color);
		float getWeight();
		string getName();
		string getGender();
		string getColor();
		virtual void display();
	protected:
		float Weight;
		string Name;
		string Gender;
		string Color; // Make sure to use the getline here
};
#endif
