#include "stdafx.h"
#include "FIleParser.h"


FIleParser::FIleParser()
{
	m_fileContent = "";
}


FIleParser::~FIleParser()
{
}

int FIleParser::ReadFile(string filePath)
{
	m_fileName = filePath;
	string line;
	ifstream myfile(filePath);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
			m_fileContent += line + "\n";
		}
		myfile.close();
	}

	else cout << "Unable to open file";

	return 0;
}
