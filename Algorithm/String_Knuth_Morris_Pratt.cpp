#include "stdafx.h"


String_Knuth_Morris_Pratt::String_Knuth_Morris_Pratt()
{
}


String_Knuth_Morris_Pratt::~String_Knuth_Morris_Pratt()
{
}
int* String_Knuth_Morris_Pratt::buildNext(char* P) {
	//int next[KMPMAX];
	size_t  lenP = strlen(P);
	int* next = new int[lenP], j = 0;
	//int lenP = strlen(P);
	int t = next[0] = -1;
	while (j < lenP - 1) {
		if (0 > t || P[j] == P[t]) next[++j] = ++t;
		else t = next[t];
	}
	return next;
}


/*
对返回值的分析：
1> 返回-1 失败
2> 其他 成功
*/
int String_Knuth_Morris_Pratt::kmp(char* T, char* P) {
	int lenT = strlen(T), i = 0;
	int lenP = strlen(P), j = 0;
	if (lenT < lenP) {
		return -1;
	}
	int* next = buildNext(P);
	while (j < lenP && i < lenT - lenP + 1) {
		if (0 > j || T[i] == P[j]) {
			++i; ++j;
		}
		else {
			j = next[j];
		}
	}
	int re = i - j;
	if (re >= lenT - lenP) {
		return -1;
	}
	else {
		return i - j;
	}
}


void String_Knuth_Morris_Pratt::testKMP() {
	char* P = "abab";
	char* T = "bacbababaabcbab";
	printf("输出生成的NEXT表：\n");
	int*next = buildNext(P);
	int len = strlen(P);
	int i = 0;
	for (; i < len - 1; i++)
		printf("%d ", next[i]);
	printf("%d\n", next[i]);
	int re = kmp(T, P);
	printf("%d\n", re);
}


void String_Knuth_Morris_Pratt::textBuildNext(){
	String_Knuth_Morris_Pratt *skmp = new String_Knuth_Morris_Pratt();
	int i = 0;
	while (++i <= 20) {
		srand((unsigned)time(NULL));
		int j = -1;
		char  c[100];
		while (++j < i) {
			int cur = rand() % 25;
			char ch = 'a' + cur;
			c[j] = ch;
		}
		for (j= 0; j<i; j++) {
			printf("%2c ", c[j]);
		}
		printf("\n");
		skmp->buildNext0(c,i);
		skmp->buildNext1(c,i);
		printf("\n");
	}
}