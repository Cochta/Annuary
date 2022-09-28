#pragma once
bool isAllNumber(const std::string _str)
{
	for (const char c : _str)
	{
		if (!std::isdigit(c))
			return false;
	}
	return true;
}

bool isNoneNumber(const std::string _str)
{
	for (const char c : _str)
	{
		if (std::isdigit(c))
			return false;
	}
	return true;
}

std::string EnterPhoneNumber()
{
	std::string phoneNumber;
	std::cout << "Enter a phone number: " << std::endl;
	while (std::cin >> phoneNumber) {// allows the user to only input numerical values and string length of 10 
		if (phoneNumber.length() == 10 && isAllNumber(phoneNumber))
			break;

		std::cout << "Invalid input.  Try again: ";
	}
	return phoneNumber;
}

std::string EnterStr()
{
	std::string str;
	while (std::cin >> str) {// allows the user to only input alphabetical values and string length is min 1 
		if (str.length() >= 1 && isNoneNumber(str))
			break;

		std::cout << "Invalid input.  Try again: ";
	}
	return str;
}

void AddToAnnuary(Annuary& _annuary)
{
	std::cout << "Enter last name: " << std::endl;
	std::string name = EnterStr();
	std::cout << "Enter first name: " << std::endl;
	std::string firstName = EnterStr();
	_annuary.Add(EnterPhoneNumber(), name, firstName);
}

void FindInAnnuary(Annuary& _annuary)
{
	std::cout << "Enter last name: " << std::endl;
	std::string name = EnterStr();
	std::cout << "Enter first name: " << std::endl;
	std::string firstName = EnterStr();

	if (_annuary.IsKey(name, firstName))
	{
		std::cout << _annuary.Find(name, firstName);
	}
	else
	{
		std::cout << "This person is not in the annuary..." << std::endl;
	}
}