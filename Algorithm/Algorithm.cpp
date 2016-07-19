// Algorithm.cpp : ∂®“Âøÿ÷∆Ã®”¶”√≥Ã–Úµƒ»Îø⁄µ„°£
//

#include "stdafx.h"


int main()
{
	//≥ı ºœÓƒø≤‚ ‘
	printf("Hello World \n");
	/*KMP◊÷∑˚¥Æ∆•≈‰À„∑®≤‚ ‘ begin*/
	//String_Knuth_Morris_Pratt* kmp = new String_Knuth_Morris_Pratt();
	//kmp->testKMP();
	//kmp->textBuildNext();
	/*KMP◊÷∑˚¥Æ∆•≈‰À„∑®≤‚ ‘ end*/

	/*HASH◊÷∑˚¥Æ∆•≈‰≤‚ ‘ begin*/
	//String_Hash_Search* shs = new String_Hash_Search();
	//shs->testHashMatch();
	/*HASH◊÷∑˚¥Æ∆•≈‰≤‚ ‘ end*/

	/*DijkstraÀ„∑®≤‚ ‘ begin*/
	//Digraph_SSSP_Dijkstra *dsd = new Digraph_SSSP_Dijkstra();
	//dsd->testDijkstra();
	//Digraph_SSSP_Dijkstra_New *dsdn = new Digraph_SSSP_Dijkstra_New();
	//dsdn->testDijkstra();
	/*DijkstraÀ„∑®≤‚ ‘ begin*/
	
	/*◊÷∑˚¥Æ∆•≈‰À„∑®String_Boyer_MooreÀ„∑®≤‚ ‘ begin*/
	//char * pattern = "NEEDLE";
	//String_Boyer_Moore * sbm = new String_Boyer_Moore(pattern);
	//sbm->testStringBoyerMoore();
	/*◊÷∑˚¥Æ∆•≈‰À„∑®String_Boyer_MooreÀ„∑®≤‚ ‘ end*/
	/*ÕºÀ„∑® FloydÀ„∑®≤‚ ‘ begin*/
	Digraph_Floyd * df = new Digraph_Floyd(6);
	df->textFloyd();
	/*ÕºÀ„∑® FloydÀ„∑®≤‚ ‘ end*/
	getchar();
	getchar();
	getchar();
    return 0;
}

