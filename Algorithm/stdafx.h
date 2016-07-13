// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <string.h>
#include <math.h>

#include <Windows.h>
#include <time.h>
#include <stdlib.h>

// TODO:  在此处引用程序需要的其他头文件
//在KMP算法中使用的全局变量
const int KMPMAX = 1000;

#include "String_Knuth_Morris_Pratt.h"

//串匹配， HASH方法全局变量，以及头文件
#define Q 13
#define MOD 5549873
#include "String_Hash_Search.h"


//图搜索 ，单源最短路径算法 Dijkstra算法，结果是错误的，算法的某个部分
//有误，已经标注
#include "Digraph_SSSP_Dijkstra.h"

//图搜索 ，单源最短路径算法 Dijkstra算法,改进的漂亮代码
#define INF 99999999 //用inf(infinity的缩写)存储一个被认为的正无穷值
#include "Digraph_SSSP_Dijkstra_New.h"