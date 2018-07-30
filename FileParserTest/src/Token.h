#pragma once
#include "stdafx.h"

enum BasicTokens {
	StartOfDocumentToken,
	LinebreakToken,
	SpaceToken,
	IndentationToken,
	StringToken,
	CharacterToken,
	FusedCharacterToken,
	SingleLineCommentToken,
	MultiLineCommentToken,
	EndOfDocumentToken,
};

class Token
{
public:
	Token();
	~Token();
	BasicTokens type;
	string text;
	int start;
	int stop;
	int line;
	int len;
};

