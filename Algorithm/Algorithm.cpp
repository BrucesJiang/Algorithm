// Algorithm.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	//��ʼ��Ŀ����
	printf("Hello World ");
	/*KMP�ַ���ƥ���㷨���� begin*/
	Knuth_Morris_Pratt* kmp = new Knuth_Morris_Pratt();
	kmp->testKMP();
	/*KMP�ַ���ƥ���㷨���� end*/
	getchar();
    return 0;
}

