#pragma once
class String_Knuth_Morris_Pratt
{
public:
	String_Knuth_Morris_Pratt();
	~String_Knuth_Morris_Pratt();
	int kmp(char* T, char* P);
private:
	int* buildNext(char* P);


	//≤‚ ‘∑Ω∑®
public:
	void testKMP();
};

