// Algorithm.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	//��ʼ��Ŀ����
	printf("Hello World ");
	/*KMP�ַ���ƥ���㷨���� begin*/
	//String_Knuth_Morris_Pratt* kmp = new String_Knuth_Morris_Pratt();
	//kmp->testKMP();
	/*KMP�ַ���ƥ���㷨���� end*/

	/*HASH�ַ���ƥ����� begin*/
	String_Hash_Search* shs = new String_Hash_Search();
	shs->testHashMatch();
	/*HASH�ַ���ƥ����� end*/
	getchar();
    return 0;
}

