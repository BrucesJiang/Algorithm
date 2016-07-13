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

#include <Windows.h>
#include <time.h>
#include <stdlib.h>

// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
//��KMP�㷨��ʹ�õ�ȫ�ֱ���
const int KMPMAX = 1000;

#include "String_Knuth_Morris_Pratt.h"

//��ƥ�䣬 HASH����ȫ�ֱ������Լ�ͷ�ļ�
#define Q 13
#define MOD 5549873
#include "String_Hash_Search.h"


//ͼ���� ����Դ���·���㷨 Dijkstra�㷨������Ǵ���ģ��㷨��ĳ������
//�����Ѿ���ע
#include "Digraph_SSSP_Dijkstra.h"

//ͼ���� ����Դ���·���㷨 Dijkstra�㷨,�Ľ���Ư������
#define INF 99999999 //��inf(infinity����д)�洢һ������Ϊ��������ֵ
#include "Digraph_SSSP_Dijkstra_New.h"