// optionOne.h

#ifndef	OPTIONONE_LOCK
#define OPTIONONE_LOCK

#include <string>
#include <fstream>

std::string asciiConverter(std::string userInput)
{
	std::string temp = "";
	for (int i = 0; i < userInput.length(); i++)
	{
		temp += std::to_string(int(userInput[i])) + " ";
	}
	return temp;
}

void saveToFile(std::string inputText)
{
	ofstream outfile("test.bin", ofstream::binary);
	int size = inputText.size();
	outfile.write(reinterpret_cast<char*>(&size), sizeof(size));
	outfile.write(inputText.c_str(), inputText.size());
	outfile.close();
}

std::string readFromFile(void)
{
	ifstream inFile("test.bin", ios::in | ios::binary);
	if (!inFile) return "cannot open file";
	int size = 0;
	char* buffer;
	std::string returnText = "";

	inFile.read(reinterpret_cast<char*>(&size), sizeof(int));
	buffer = new char[size];
	inFile.read(buffer, size);
	returnText.append(buffer, size);

	return returnText;
}



#endif
