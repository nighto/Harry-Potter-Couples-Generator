#include <iostream>
#include <cstdlib>
using namespace std;

const int totalMen = 46;
const int totalWomen = 28;
const int totalCreatures = 30;

string man[totalMen] = {"Harry Potter", "James Potter", "Sirius Black", "Remus Lupin", "Albus Dumbledore", "Ron Weasley", "Peter Pettigrew", "Voldemort", "Tom Riddle", "Lucius Malfoy", "Draco Malfoy", "Abraxas Malfoy", "Bill Weasley", "Charlie Weasley", "Percy Weasley", "George Weasley", "Fred Weasley", "Ron Weasley", "Arthur Weasley", "Billius Weasley", "Gideon Prewett", "Fabian Prewett", "Bartemius Crouch", "Bartemius Crouch Jr.", "Rodolphus Lestrange", "Rabastan Lestrange", "Gilderoy Lockhart", "Quirinus Quirrel", "Rubeos Hagrid", "Neville Longbotton", "Dean Thomas", "Seamus Finnigan", "Colin Creevey", "Denis Creevey", "Godric Griffindor", "Salazar Slytherin", "Vincent Crabe", "Gregory Goyle", "Theodore Nott", "Blaise Zabine", "Severus Snape", "Teddy Tonks", "Zacharias Smith", "Cedric Diggory", "Kingsley Shaklebolt", "Victor Krum"};

string woman[totalWomen] = {"Hermione Granger", "Ginny Weasley", "Lily Evans", "Minerva McGonagall", "Milicent Bulstrode", "Pansy Parckson", "Sibila Trelawney", "Dolores Umbridge", "Astoria Greengras", "Olympe Maxime", "Parvati Patil", "Padma Patil", "Lavender Brown", "Cho Chang", "Fleur Delacour", "Grabrielle Delacour", "Molly Weasley", "Astoria Greengrass", "Romilda Vane", "Ana Abbot", "Pomona Sprout", "Bellatrix Black", "Narcissa Black", "Andromedra Black", "Nymphadora Tonks", "Luna Lovegood", "Katie Bell", "Anjelina Johnson"};

string creature[totalCreatures] = {"Firenze", "Buckbeak", "Grope", "Bane", "Magorian", "Ronan", "Norbert", "Aragoge", "Giant Squid", "Merpeople", "Fawkes", "Boggart", "Pufoso", "Dementor", "Dobby", "Kreacher", "Winky", "Veelas", "Nagini", "Unicorn", "Thestral", "Peeves", "Nearly Headless Nick", "Fat Friar", "Grey Lady", "Blody Baron", "Cuthbert Binns", "Moaning Myrtle", "Basilisk", "Golden Pome"};

void ShakeIt() {
	srand(time(NULL)); // seeding randomness
}

void ShowMenu() {
	cout << endl;
	cout << "Harry Potter Ship Generator by Nighto" << endl;
	cout << endl;
	cout << "What kind of couple would you like to pair?" << endl;
	cout << endl;
	cout << "1. Het Couple" << endl;
	cout << "2. Slash Couple" << endl;
	cout << "3. F-Slash Couple" << endl;
	cout << "4. M-Human x Non-Human Couple" << endl;
	cout << "5. F-Human x Non-Human Couple" << endl;
	cout << "6. Non-Human Couple" << endl;
	cout << endl;
}

int GetOption () {
	int option;
	cout << "Enter the desired number or whatever other number for exit: ";
	cin >> option;
	return option;
}

string GetRandomMan() {
	int m;
	m = rand() % totalMen;
	return man[m];
}

string GetRandomWoman() {
	int w;
	w = rand() % totalWomen;
	return woman[w];
}

string GetRandomCreature() {
	int c;
	c = rand() % totalCreatures;
	return creature[c];
}

void GetCouple (int option) {
	ShakeIt();
	switch (option) {
		case 1: // M-F
			cout << GetRandomMan() << " + " << GetRandomWoman() << endl;
			break;
		case 2: // M-M
			cout << GetRandomMan() << " + " << GetRandomMan() << endl;
			break;
		case 3: // F-F
			cout << GetRandomWoman() << " + " << GetRandomWoman() << endl;
			break;
		case 4: // M-C
			cout << GetRandomMan() << " + " << GetRandomCreature() << endl;
			break;
		case 5: // F-C
			cout << GetRandomWoman() << " + " << GetRandomCreature() << endl;
			break;
		case 6: // C-C
			cout << GetRandomCreature() << " + " << GetRandomCreature() << endl;
			break;
		default:
			cout << "Non-valid option. Exiting." << endl;
	}
}

int main() {

	int h, m;
	h = rand() % totalMen;
	m = rand() % totalWomen;

	// Life is made of choices.
	ShowMenu();

	int option = 0;
	while(true) {
		option = GetOption();
		if (option > 0 && option < 7)
			GetCouple(option);
		else
			break;
	}
	
	return 0;
}
