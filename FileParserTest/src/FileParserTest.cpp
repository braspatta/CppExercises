// FileParserTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FIleParser.h"

int main()
{
	FIleParser FileParserObj;

	FileParserObj.ReadFile("Simple_1.vhdl");



	system("pause");
	return 0;
}

