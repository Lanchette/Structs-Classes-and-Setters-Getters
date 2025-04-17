// Lan Anh Huynh Week 12: Structures, Classes, and Getters & Setters


/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enemyType {GRUNT, MINIBOSS, BOSS};

// POD structures
// A custom variable type

struct enemy {
	int health = 10;
	int damage = 4;
	string name = "Enemy";
	enemyType type = GRUNT;

};
struct address {
	string streetName;
	int streetNumber;
	string city;
	string stateCode;
	int zipCode;
};

struct employee {
	int Id = 0;
	string name;
	int age;
	// String address;
	address addr;
	float wage;

};

string AddressOneLine(address addr) {
	string oneLine = "";
	oneLine += to_string(addr.streetNumber);
	oneLine += " " + addr.streetName;
	oneLine += ", " + addr.city;
	oneLine += ", " + addr.stateCode;
	oneLine += ", " + to_string(addr.zipCode);

	return oneLine;
}


int main() {
	cout << "Structures!\n";

	enemy brandon; 
	brandon.health = 10;
	brandon.damage = 4;
	brandon.name = "Evil Brandon";
	brandon.type = GRUNT;

	cout << "Here's " << brandon.name << "! His health is " << brandon.health << ".\n";

	enemy tom;
	tom.damage = 6;
	tom.name = "Skinny Tom";

	cout << tom.name << " is attacking " << brandon.name << "!\n";
	brandon.health -= tom.damage;

	if (brandon.health < 1) {
		cout << brandon.name << " has been killed!\n";
	}
	else {
		cout << brandon.name << " has " << brandon.health << " health left!\n";
	}

	vector<enemy> enemies;

	enemies.push_back(brandon);
	enemies.push_back(tom);

	cout << "Status of all enemies:\n";
	for (int i = 0; i < enemies.size(); i++) {
		cout << enemies[i].name << " has " << enemies[i].health << "health.\n";
		cout << "Their damage is " << enemies[i].damage << " and their type is";
		switch (enemies[i].type)
		{
		case GRUNT:
			cout << "grunt";
			break;
		case MINIBOSS:
				cout << "mini-boss";
				break;
		case BOSS:
				cout << "boss";
				break;
		default:
				cout << "unknown";
				break;
					
		}
		cout << ".\n";
	}

	employee lan;
	lan.Id = 2456;
	lan.name = "Lan Anh Huynh";
	lan.age = 19;
	lan.wage = 7.25f;
	lan.addr.streetNumber = 1234;
	lan.addr.streetName = "Main Street";
	lan.addr.city = "Wichita";
	lan.addr.stateCode = "KS";
	lan.addr.zipCode = 12345;

	cout << lan.name << " lives at " << AddressOneLine(lan.addr) << ".\n";

	return 0;
}
*/

// Classes + Getters & Setters
/*
#include <iostream>
#include <string>
using namespace std;


class robot {
private:

	// Data members		
	string name; 
	string phrase;
	int charge;

public:			// Anyone can see this, call this, change this.
	robot(string, string, int);
	robot();
	void SayHello();

	// Setters and Getters give access to private variables
	SetCharge(int givenCharge) {

	}
	// Constructor, has to be named the same as the class, and doesn't have a return type
	
protected:		
};	
robot(string givenName, string givenPhrase, int givenCharge) {
		name = givenName;
		phrase = givenPhrase;
		charge = givenCharge;
		cout << "A new robot has been constructed!\n";
}

	robot() {
		cout << "Using the DEFAULT constructor.\n";
		cout << "Hey programmer Richard, please fix this in the source code.\n";
	}

	void SayHello() {
		cout << "My name is " << name << " and my charge is " << charge << ".\n";
		cout << phrase << "\n";
	}

			





int main() {
	cout << "Classes, yeah?\n";

	robot bobert;			// Constructor runs here.
	bobert.name = "Bobert Jr.";
	bobert.charge = 5;

	cout << "Have a look at my new robot! Their name is " << bobert.name << ".\n";
	cout << "I am currently charging them, their charge is " << bobert.charge << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);
	cout << "My new robot was very expensive! They worked on my nuclear reactor.\n";
	cout << "They can introduce themselves, watch!\n";
	rob.SayHello();

	return 0;
}*/