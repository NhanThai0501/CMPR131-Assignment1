// optionOne.h

#ifndef	OPTIONONE_LOCK
#define OPTIONONE_LOCK

#include <string>

std::string asciiConverter(std::string userInput)
{
	std::string temp = "";
	for (int i = 0; i < userInput.length(); i++)
	{
		temp += std::to_string(int(userInput[i])) + " ";
	}
	return temp;
}

#endif
