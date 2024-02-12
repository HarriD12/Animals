#include <iostream>

using namespace std;

class Animals {
public:
	string species;
	string name;
	string colour; 
	int Age;
	int Weight;
	string Noise;

	void sayHello(){
		cout << "Hello my name is" << name << endl;
	}

	void makeNoise() {
		cout << Noise << endl;
	}

	void eat(string eat) {
		cout << eat << "Yummy" << endl;
	}

	void Details() {
		cout << "Here are the details" << endl;
	}
	// Defualt constructor
	
	Animals() {
		cout << "Animal has been created" << endl;
	};

	// Paramaeter Contructor 

	Animals(string s, string n, string c, int a, int w, string N) {
		species = s;
		name = n;
		colour = c;
		Age = a;
		Weight = w;
		Noise = N;
	}
};


int main() {

	Animals Cat;
	Animals Dog;

	Cat.eat("Bill loves kibble");
	Dog.eat("Bob loves Bones");

	//Species
	Dog.species = "BullDog";
	Cat.species = "Persian";

	// name
	Cat.name = " Bill";
	Dog.name = " Bob";

	//colour
	Cat.colour = "Black";
	Dog.colour = "White";

	Cat.makeNoise();
	Dog.makeNoise();



	//Age
	Cat.Age = 10;
	Dog.Age = 6;

	//Weight1
	Cat.Weight = 5;
	Dog.Weight = 110;

	int choice;
	cin >> choice;

	int sub_choice;

	cout << "Main Menu" << endl;

	cout << "Pick an Animal" << endl;
	cout << "--------------" << endl;

	cout << "1. Cat" << endl;
	cout << "2. Dog" << endl;

	//Say hello
	if (choice == 1) {
		cout << "you have selected Cat" << endl;
	}
	else if (sub_choice == 1) {
		Cat.sayHello();
	}

	if (choice == 2) {
		cout << "you have selected Dog" << endl;

	}
	else if (sub_choice == 2) {
		Dog.sayHello();
	}

	//noise
	if (choice == 1) {
		cout << "you have selected Cat" << endl;
	}
	else if (sub_choice == 3) {
		Cat.makeNoise();
	}

	if (choice == 2) {
		cout << "you have selected Dog" << endl;

	}
	else if (sub_choice == 4) {
		Dog.makeNoise();

	}

	//Details
	if (choice == 1) {
		cout << "you have selected Cat" << endl;
	}
	else if (sub_choice == 5) {
		
		
	}

	if (choice == 2) {
		cout << "you have selected Dog" << endl;

	}
	else if (sub_choice == 6) {
		

	}
		cout << "Sub-Menu" << endl;

		cout << "Pick an Interaction" << endl;
		cout << "--------------" << endl;

		cout << " 1.Say Hello" << endl;
		cout << " 2.Say Hello" << endl;

		cout << " 3.Make a noise" << endl;
		cout << " 4.Make a noise" << endl;

		cout << " 5.View details" << endl;
		cout << " 6.View details" << endl;

		cout << " 7.Eat" << endl;


		cin >> sub_choice;

		return 0;
	
}
