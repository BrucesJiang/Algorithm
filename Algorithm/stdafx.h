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
// TODO:  在此处引用程序需要的其他头文件
//在KMP算法中使用的全局变量
const int KMPMAX = 1000;

#include "String_Knuth_Morris_Pratt.h"

//串匹配， HASH方法全局变量，以及头文件
#define Q 13
#define MOD 5549873
#include "String_Hash_Search.h"