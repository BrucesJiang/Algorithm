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
	Digraph_SSSP_Dijkstra *dsd = new Digraph_SSSP_Dijkstra();
	dsd->testDijkstra();
	//Digraph_SSSP_Dijkstra_New *dsdn = new Digraph_SSSP_Dijkstra_New();
	//dsdn->testDijkstra();
	/*DijkstraËã·¨²âÊÔ begin*/
	getchar();
	getchar();
	getchar();
    return 0;
}

