#include "stdafx.h"
#include "Digraph_SSSP_Dijkstra_New.h"


Digraph_SSSP_Dijkstra_New::Digraph_SSSP_Dijkstra_New()
{
}


Digraph_SSSP_Dijkstra_New::~Digraph_SSSP_Dijkstra_New()
{
}

void Digraph_SSSP_Dijkstra_New::dijkstra() {
	int e[10][10], dist[10], flag[10];
	int i, j,E,V;
	printf("�����붨����Ŀ�ͱ���Ŀ");
	scanf_s("%d %d", &V, &E);
	/*
	*��ʼ������
	*/
	for (i = 1; i <= V; i++) {
		for (j = 0; j <= V; j++) {
			if (i == j) {
				e[i][j] = 0;
			}
			else {
				e[i][j] = INF;
			}
		}
	}
	int u, v, t;
	//����߼���uΪ��ʼ�㣬vΪ�յ㣬tΪ�ߵ�Ȩ��
	for (i = 1; i <= E;i++) {
		scanf_s("%d %d %d", &u, &v, &t);
		e[u][v] = t;
	}
	//��ʼ������
	for (i = 1; i <= V; i++) {
		dist[i] = e[1][i];
		flag[i] = 0;
	}
	flag[1] = 1;

	//�㷨�ĺ��Ĳ���
	//������V�����㣬���������V��ѡ��ѡ����ǰ����Դ������ĵ�
	for (i = 1; i < V; i++) {
		//��Q�������ҵ�����Դ������Ľڵ�
		int min = INF;
		for (j = 2; j <= V; j++) {
			if (!flag[j] && min > dist[j]) {
				min = dist[j];
				u = j;
			}
		}
		flag[u] = 1;
		for (v = 1; v <= E; v++) {
			 //��Ҫ�Ĳ������裬��������Խ��Ӱ��
			if (e[u][v] < INF) {
				if (dist[u] + e[u][v] < dist[v]) {
					dist[v] = dist[u] + e[u][v];
				}
			}
		}
	}
	for (i = 1; i <= V; i++) {
		printf("%d ", dist[i]);
	}
}

void Digraph_SSSP_Dijkstra_New::testDijkstra() {
	dijkstra();
}