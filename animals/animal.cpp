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

	void Details(string detials) {
		cout << "Here are the details" << endl;
		cout << "Name " << name << endl;
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

	Animals Cat("Persian", "Bill", "Black", 20, 120, "Meeow");
	Animals Dog("BullDog", "Bob", "White", 30, 100, "Woof");


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

	int sub_choice;
	cout << "Main Menu" << endl;

	cout << "Pick an Animal" << endl;
	cout << "--------------" << endl;

	cout << "1. Cat" << endl;
	cout << "2. Dog" << endl;

	int choice;
	cin >> choice;
	//Say hello

	if (choice == 1) {
		cout << "you have selected Cat" << endl;

		cout << "Pick an interaction" << endl;
		cout << "-------------------" << endl;
		cout << "1. Say Hello" << endl;
		cout << "2. Make a noise" << endl;
		cout << "3. View details" << endl;
		cin >> sub_choice;
		if (sub_choice == 1) {
			Cat.sayHello();
		}
		else if (sub_choice == 2) {
			Cat.makeNoise();
		}
	}

	if (choice == 2) {
		cout << "you have selected Dog" << endl;

		cout << "Pick an interaction" << endl;
		cout << "-------------------" << endl;
		cout << "1. Say Hello" << endl;
		cout << "2. Make a noise" << endl;
		cout << "3. View details" << endl;
		cin >> sub_choice;
		if (sub_choice == 1) {
			Dog.sayHello();
		}
		else if (sub_choice == 2) {
			Dog.makeNoise();
		}



		return 0;

	}
}
