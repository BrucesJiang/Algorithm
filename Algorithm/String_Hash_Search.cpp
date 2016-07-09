#include "stdafx.h"
#include "String_Hash_Search.h"


String_Hash_Search::String_Hash_Search()
{
}


String_Hash_Search::~String_Hash_Search()
{
}

/*
 *初始化哈希值
 *str ：要计算哈希数值的字符串
 *len : 字符串长度
*/
unsigned long String_Hash_Search::initializeHashValue(const char* str,int len) {
	unsigned long hash = 0;
	for (int i = 0; i<len; i++)
		hash = (hash*Q + str[i]) % MOD;
	return hash%MOD;
}

/*
 * 迭代下一个字符串HASH值
 * T : 待匹配字符串
 * pos : 当前对其位置
 * oldHash: 上一个对其位置Hash值
 * len: 模式串长度
*/
unsigned long String_Hash_Search::reHashValue(const char* T, int pos, unsigned long oldHash,int len) {
	unsigned long newHash = 0;
	unsigned long cur = 1;
	int i = -1;
	while (++i < len-1) {
		cur  = (cur*Q)%MOD;
	}
	newHash = ((oldHash +MOD - (T[pos - len] * cur) % MOD) % MOD*Q + T[pos]) % MOD;
	return newHash;
}
/*
 *校验阶段
 *text：带匹配文本
 *pattern：模式
 *pos:模式在文本中最后一个字符的位置
 */

int String_Hash_Search::isverify(const char* text, const char* pattern , int pos) {
	int len = strlen(pattern);
	int i = -1;
	while (++i < len) {
		if (text[pos - len  + i+1] != pattern[i]) {
			return 0;
		}
	}
	return 1;
}

/*
 *text: 待匹配字符串
 *pattern: 模式串
*/
int String_Hash_Search::match(const char* text, const char* pattern) {
	int tlen = strlen(text);
	int plen = strlen(pattern);
	if (tlen < plen) {
		return -1;
	}
	unsigned long pHash = initializeHashValue(pattern,plen);
	unsigned long tHash = initializeHashValue(text,plen);
	int pos = plen;
	if (tHash == pHash && isverify(text, pattern, pos)) {
		printf("%d", pos);
	}
	unsigned long exp = 1;
	for (int i = 0; i<plen - 1; i++)
		exp = (exp*Q) % MOD;
	while(pos<tlen){
		tHash = reHashValue(text, pos, tHash, plen);
		//printf("PO");
		if (tHash == pHash && isverify(text,pattern,pos)) {
			printf("%d\n", pos-plen);
		}
		pos++;
	}	
	return 0;
}


void String_Hash_Search::testHashMatch() {
	char* pattern = "ab";
	char* text = "bacbababaabcbab";
	match(text, pattern);
}