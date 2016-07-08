// Algorithm.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	//初始项目测试
	printf("Hello World ");
	/*KMP字符串匹配算法测试 begin*/
	Knuth_Morris_Pratt* kmp = new Knuth_Morris_Pratt();
	kmp->testKMP();
	/*KMP字符串匹配算法测试 end*/
	getchar();
    return 0;
}

