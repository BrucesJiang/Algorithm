// Algorithm.cpp : ¶¨Òå¿ØÖÆÌ¨Ó¦ÓÃ³ÌĞòµÄÈë¿Úµã¡£
//

#include "stdafx.h"


int main()
{
	//³õÊ¼ÏîÄ¿²âÊÔ
	printf("Hello World \n");
	/*KMP×Ö·û´®Æ¥ÅäËã·¨²âÊÔ begin*/
	//String_Knuth_Morris_Pratt* kmp = new String_Knuth_Morris_Pratt();
	//kmp->testKMP();
	//kmp->textBuildNext();
	/*KMP×Ö·û´®Æ¥ÅäËã·¨²âÊÔ end*/

	/*HASH×Ö·û´®Æ¥Åä²âÊÔ begin*/
	//String_Hash_Search* shs = new String_Hash_Search();
	//shs->testHashMatch();
	/*HASH×Ö·û´®Æ¥Åä²âÊÔ end*/

	/*DijkstraËã·¨²âÊÔ begin*/
	//Digraph_SSSP_Dijkstra *dsd = new Digraph_SSSP_Dijkstra();
	//dsd->testDijkstra();
	//Digraph_SSSP_Dijkstra_New *dsdn = new Digraph_SSSP_Dijkstra_New();
	//dsdn->testDijkstra();
	/*DijkstraËã·¨²âÊÔ begin*/
	
	/*×Ö·û´®Æ¥ÅäËã·¨String_Boyer_MooreËã·¨²âÊÔ begin*/
	//char * pattern = "NEEDLE";
	//String_Boyer_Moore * sbm = new String_Boyer_Moore(pattern);
	//sbm->testStringBoyerMoore();
	/*×Ö·û´®Æ¥ÅäËã·¨String_Boyer_MooreËã·¨²âÊÔ end*/
	/*Í¼Ëã·¨ FloydËã·¨²âÊÔ begin*/
	//Digraph_Floyd * df = new Digraph_Floyd(6);
	//df->textFloyd();
	/*Í¼Ëã·¨ FloydËã·¨²âÊÔ end*/
	/*Sort_Algorithm  ÅÅĞòËã·¨²âÊÔ  begin*/
	Sort_Algorithm *sa = new Sort_Algorithm();
	//Ö±½Ó²åÈëÅÅĞò
	//sa->straightInsertionSortTest();
	//²åÈëÅÅĞòÖ®Ï£¶ûÅÅĞò
	//sa->shellSortTest();
	//Ñ¡ÔñÅÅĞòÖ®¼òµ¥Ñ¡ÔñÅÅĞò
	//sa->selectionSortTest();
	//Ñ¡ÔñÅÅĞòÖ®¶şÔªÑ¡ÔñÅÅĞò
	//sa->binarySelectionSortTest();
	//Ñ¡ÔñÅÅĞòÖ®¶ÑÅÅĞò
	//sa->heapSortTest();
	//½»»»ÅÅĞòÖ®Ã°ÅİÅÅĞò
	//sa->bubbleSortTest();
	//Ã°ÅİÅÅĞò¸Ä½ø
  	//sa->bubbleSortImprovement_1Test();
	//½»»»ÅÅĞòÖ®¿ìËÙÅÅĞò
	//sa->quickSortTest();
	//¹é²¢ÅÅĞòµü´ú
	sa->mergeSortInterationTest();
	//¹é²¢ÅÅĞòµİ¹é
	sa->mergeSortRecursiveTest();
	/*Sort_Algorithm  ÅÅĞòËã·¨²âÊÔ  end*/
	getchar();
	getchar();
	getchar();
    return 0;
}

