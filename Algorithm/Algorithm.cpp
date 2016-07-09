// Algorithm.cpp : ¶¨Òå¿ØÖÆÌ¨Ó¦ÓÃ³ÌĞòµÄÈë¿Úµã¡£
//

#include "stdafx.h"


int main()
{
	//³õÊ¼ÏîÄ¿²âÊÔ
	printf("Hello World ");
	/*KMP×Ö·û´®Æ¥ÅäËã·¨²âÊÔ begin*/
	//String_Knuth_Morris_Pratt* kmp = new String_Knuth_Morris_Pratt();
	//kmp->testKMP();
	/*KMP×Ö·û´®Æ¥ÅäËã·¨²âÊÔ end*/

	/*HASH×Ö·û´®Æ¥Åä²âÊÔ begin*/
	String_Hash_Search* shs = new String_Hash_Search();
	shs->testHashMatch();
	/*HASH×Ö·û´®Æ¥Åä²âÊÔ end*/
	getchar();
    return 0;
}

