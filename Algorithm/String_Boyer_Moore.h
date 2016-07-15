#pragma once
class String_Boyer_Moore
{
public:
	String_Boyer_Moore();
	String_Boyer_Moore(const char* pattern);
	~String_Boyer_Moore();

public:
	int match(const char * text, const char* pattern);
private:
	int right[256];

public:
	void testStringBoyerMoore();
};

