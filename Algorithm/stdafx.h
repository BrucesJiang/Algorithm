// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <string.h>
#include <math.h>
// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
//��KMP�㷨��ʹ�õ�ȫ�ֱ���
const int KMPMAX = 1000;

#include "String_Knuth_Morris_Pratt.h"

//��ƥ�䣬 HASH����ȫ�ֱ������Լ�ͷ�ļ�
#define Q 13
#define MOD 5549873
#include "String_Hash_Search.h"