#include "stdafx.h"
#include "String_Hash_Search.h"


String_Hash_Search::String_Hash_Search()
{
}


String_Hash_Search::~String_Hash_Search()
{
}

/*
 *��ʼ����ϣֵ
 *str ��Ҫ�����ϣ��ֵ���ַ���
 *len : �ַ�������
*/
unsigned long String_Hash_Search::initializeHashValue(const char* str,int len) {
	unsigned long hash = 0;
	for (int i = 0; i<len; i++)
		hash = (hash*Q + str[i]) % MOD;
	return hash%MOD;
}

/*
 * ������һ���ַ���HASHֵ
 * T : ��ƥ���ַ���
 * pos : ��ǰ����λ��
 * oldHash: ��һ������λ��Hashֵ
 * len: ģʽ������
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
 *У��׶�
 *text����ƥ���ı�
 *pattern��ģʽ
 *pos:ģʽ���ı������һ���ַ���λ��
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
 *text: ��ƥ���ַ���
 *pattern: ģʽ��
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