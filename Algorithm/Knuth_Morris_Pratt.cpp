#include "stdafx.h"
#include "Knuth_Morris_Pratt.h"


Knuth_Morris_Pratt::Knuth_Morris_Pratt()
{
}


Knuth_Morris_Pratt::~Knuth_Morris_Pratt()
{
}
int* Knuth_Morris_Pratt::buildNext(char* P) {
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
int Knuth_Morris_Pratt::kmp(char* T, char* P) {
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


void Knuth_Morris_Pratt::testKMP() {
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
