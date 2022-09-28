#pragma once
#include <map>
#include <string>
#include <vector>
class Annuary
{
public:
	Annuary(); // default with 3 entries
private:
	std::map<std::vector<std::string>, std::string> annuary;
public:
	std::string Find(std::string _name, std::string _firstname); // find a person using his name and firstname
	void Add(std::string _phoneNumber, std::string _name, std::string _firstname); // Add a new person in the annuary

	bool IsKey(std::string _name, std::string _firstname); // check if this name and first name (key) is in the annuary
};
