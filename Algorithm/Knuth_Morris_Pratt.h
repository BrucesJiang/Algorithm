#pragma once
class Knuth_Morris_Pratt
{
public:
	Knuth_Morris_Pratt();
	~Knuth_Morris_Pratt();
	int kmp(char* T, char* P);
private:
	int* buildNext(char* P);


	//≤‚ ‘∑Ω∑®
public:
	void testKMP();
};

