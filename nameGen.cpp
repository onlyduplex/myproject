#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void genName(string first[], string middle[], string last[]){
	int amount;
	cout << "How many names do you want to generate? -> ";
	cin >> amount;
	cout << endl;
	for(int n = 0; n < amount; n++){

		string name = "";

		for(int i = 0; i < 3; i++){
			int c = rand() % 99;
			switch(i){
				case 0:
					name += first[c] + " ";
					break;
				case 1:
					name += middle[c] + " ";
					break;
				case 2:
					name += last[c];
					break;
			}
		}
		cout << name << endl;
	}
}
int main(){


	srand(time(0));
	int lines = 0;
	int i = 0;
	string line;
	string chin[99];
	string rus[99];
	string turk[99];
	ifstream file("names.csv");


	getline(file, line);

	while (getline(file, line)){
		stringstream ss(line);
		getline(ss, chin[i], ',');
		getline(ss, turk[i], ',');
		getline(ss, rus[i], ',');
		i++;
	}

	genName(chin, turk, rus);


}

