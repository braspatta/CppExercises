#pragma once

#include "stdafx.h"

class FIleParser
{
public:
	FIleParser();
	~FIleParser();

	int ReadFile(string filePath);

	string m_fileName;
	string m_fileContent;
};

