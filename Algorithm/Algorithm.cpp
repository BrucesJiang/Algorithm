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
	//Digraph_SSSP_Dijkstra *dsd = new Digraph_SSSP_Dijkstra();
	//dsd->testDijkstra();
	//Digraph_SSSP_Dijkstra_New *dsdn = new Digraph_SSSP_Dijkstra_New();
	//dsdn->testDijkstra();
	/*Dijkstra�㷨���� begin*/
	
	/*�ַ���ƥ���㷨String_Boyer_Moore�㷨���� begin*/
	//char * pattern = "NEEDLE";
	//String_Boyer_Moore * sbm = new String_Boyer_Moore(pattern);
	//sbm->testStringBoyerMoore();
	/*�ַ���ƥ���㷨String_Boyer_Moore�㷨���� end*/
	/*ͼ�㷨 Floyd�㷨���� begin*/
	//Digraph_Floyd * df = new Digraph_Floyd(6);
	//df->textFloyd();
	/*ͼ�㷨 Floyd�㷨���� end*/
	/*Sort_Algorithm  �����㷨����  begin*/
	Sort_Algorithm *sa = new Sort_Algorithm();
	//ֱ�Ӳ�������
	//sa->straightInsertionSortTest();
	//��������֮ϣ������
	//sa->shellSortTest();
	//ѡ������֮��ѡ������
	//sa->selectionSortTest();
	//ѡ������֮��Ԫѡ������
	//sa->binarySelectionSortTest();
	//ѡ������֮������
	//sa->heapSortTest();
	//��������֮ð������
	//sa->bubbleSortTest();
	//ð������Ľ�
	sa->bubbleSortImprovement_1Test();
	/*Sort_Algorithm  �����㷨����  end*/
	getchar();
	getchar();
	getchar();
    return 0;
}

