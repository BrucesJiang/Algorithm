#pragma once
class String_Hash_Search
{
public:
	String_Hash_Search();
	~String_Hash_Search();
private:
	unsigned long initializeHashValue(const char* str ,int len);
	unsigned long reHashValue(const char* T,int pos, unsigned long oldHash,int len);
	int isverify(const char* text, const char* pattern, int pos);
public:
	int match(const char* T, const char* P);
	//≤‚ ‘∑Ω∑®
	void testHashMatch();
};

