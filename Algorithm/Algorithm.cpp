// Algorithm.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	//��ʼ��Ŀ����
	printf("Hello World \n");
	/*KMP�ַ���ƥ���㷨���� begin*/
	//String_Knuth_Morris_Pratt* kmp = new String_Knuth_Morris_Pratt();
	//kmp->testKMP();
	//kmp->textBuildNext();
	/*KMP�ַ���ƥ���㷨���� end*/

	/*HASH�ַ���ƥ����� begin*/
	//String_Hash_Search* shs = new String_Hash_Search();
	//shs->testHashMatch();
	/*HASH�ַ���ƥ����� end*/

	/*Dijkstra�㷨���� begin*/
	Digraph_SSSP_Dijkstra *dsd = new Digraph_SSSP_Dijkstra();
	dsd->testDijkstra();
	//Digraph_SSSP_Dijkstra_New *dsdn = new Digraph_SSSP_Dijkstra_New();
	//dsdn->testDijkstra();
	/*Dijkstra�㷨���� begin*/
	getchar();
	getchar();
	getchar();
    return 0;
}

