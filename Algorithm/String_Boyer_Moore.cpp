#include "stdafx.h"
#include "String_Boyer_Moore.h"


String_Boyer_Moore::String_Boyer_Moore()
{
}
String_Boyer_Moore::String_Boyer_Moore(const char* pattern) {
	size_t t = strlen(pattern);
	int i = 0;
	for (i = 0; i < 256; i++) {
		right[i] = -1;   //��������ģʽ���ֵ��ַ�Ϊ-1 
	}
	for (i = 0; i < t; i++) {
		right[pattern[i]] = i; //���ַ���ģʽ���ֳ��ֵ�����λ��
	}
}

String_Boyer_Moore::~String_Boyer_Moore()
{
	delete right;
}
/*
 * ����ƥ���㷨�����еĳ�ʼ���ڹ��췽������
 * text: �ı���
 * pattern: ģʽ��
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
		if (!skip) return i; //�ҵ�ƥ��ֵ
	}
	return -1; //
}

void String_Boyer_Moore::testStringBoyerMoore() {
	char * text = "FINDINAHAYSATACKNEEDLEE";
	char * pattern = "NEEDLE";
	int re = match(text, pattern);
	if (re == -1) {
		printf("ƥ��ʧ��\n");
	}
	else {
		printf("ƥ��ɹ�:%d\n", re);
	}
}
