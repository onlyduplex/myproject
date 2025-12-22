#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "functions.h"
using namespace std;



struct Zone 
{
	int id;
	int amount = 0;
	vector<int> slots;
};

int main(){
	ifstream file("trips_5000.csv");
	string dummy, depzone, date_time, line;
	getline(file, line);
	
	vector<Zone> zones;
	int zonesLength = 0;

	for (int i = 0; i < zonesLength; i++){
	cout << zones[i].id << endl;
	}
	
	while (getline(file, line)){
		stringstream ss(line);
		getline(ss, dummy, ',');
		getline(ss, depzone, ',');
		getline(ss, dummy, ',');
		getline(ss, date_time, ',');
		Zone z;
		z.id = zoneFormat(depzone);
		z.amount += 1;
		z.slots.push_back(timeFormat(date_time));
		zonesLength += 1;
		zones.push_back(z);
	}

	for (int i = 0; i < zonesLength; i++){
	cout << zones[i].id << " " << zones[i].amount << " " << endl;
	}
	return 0;
}

