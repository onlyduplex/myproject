#include "functions.h"
#include <string>

int timeFormat(const std::string& timeString){
	std::string time = timeString.substr(11,2);
	return std::stoi(time);

}

int zoneFormat(const std::string& zoneString){
	std::string zoneID = zoneString.substr(4,3);
	return std::stoi(zoneID);

}

bool isin(vector
