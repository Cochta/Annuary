#include "Annuary.h"

Annuary::Annuary() // des valeures par default
{
	std::vector<std::string> temp;
	temp.emplace_back("Bichon");
	temp.emplace_back("Alfred");
	annuary.insert(std::pair<std::vector<std::string>, std::string>(temp, "0785416345"));
	temp.clear();
	temp.emplace_back("Levis");
	temp.emplace_back("Bernard");
	annuary.insert(std::pair<std::vector<std::string>, std::string>(temp, "0787359834"));
	temp.clear();
	temp.emplace_back("Verine");
	temp.emplace_back("Constantin");
	annuary.insert(std::pair<std::vector<std::string>, std::string>(temp, "0766930587"));
}

std::string Annuary::Find(std::string _name, std::string _firstname)
{
	std::vector<std::string> temp;
	temp.emplace_back(_name);
	temp.emplace_back(_firstname);
	return "Name: " + _name + "\nFirstname: " + _firstname + "\nPhone number: " + annuary[temp] + "\n";
}

void Annuary::Add(std::string _phoneNumber, std::string _name, std::string _firstname)
{
	std::vector<std::string> temp;
	temp.emplace_back(_name);
	temp.emplace_back(_firstname);
	annuary.insert(std::pair<std::vector<std::string>, std::string>(temp, _phoneNumber));
}

bool Annuary::IsKey(std::string _name, std::string _firstname)
{
	std::vector<std::string> temp;
	temp.emplace_back(_name);
	temp.emplace_back(_firstname);
	if (annuary.count(temp) > 0) {
		return true;
	}
	else {
		return false;
	}
}