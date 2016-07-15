#include "stdafx.h"
#include "String_Boyer_Moore.h"


String_Boyer_Moore::String_Boyer_Moore()
{
}
String_Boyer_Moore::String_Boyer_Moore(const char* pattern) {
	size_t t = strlen(pattern);
	int i = 0;
	for (i = 0; i < 256; i++) {
		right[i] = -1;   //不包含在模式串种的字符为-1 
	}
	for (i = 0; i < t; i++) {
		right[pattern[i]] = i; //该字符在模式串种出现的最右位置
	}
}

String_Boyer_Moore::~String_Boyer_Moore()
{
	delete right;
}
/*
 * 核心匹配算法，其中的初始化在构造方法里面
 * text: 文本串
 * pattern: 模式串
*/
int String_Boyer_Moore::match(const char* text , const char* pattern) {
	int tLen = strlen(text), i;
	int pLen = strlen(pattern),j;
	int skip = 0;
	for (i = 0; i <= tLen-pLen; i+=skip) {
		j = pLen;
		skip = 0;
		while (--j >= 0) {
			if (text[i + j] != pattern[j]) {
				skip = j - right[text[i + j]];
				if (skip < 1) skip = 1;
				break;
			}
		}
		if (!skip) return i; //找到匹配值
	}
	return -1; //
}

void String_Boyer_Moore::testStringBoyerMoore() {
	char * text = "FINDINAHAYSATACKNEEDLEE";
	char * pattern = "NEEDLE";
	int re = match(text, pattern);
	if (re == -1) {
		printf("匹配失败\n");
	}
	else {
		printf("匹配成功:%d\n", re);
	}
}
