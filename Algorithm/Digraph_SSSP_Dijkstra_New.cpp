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
	printf("请输入定点数目和边数目");
	scanf_s("%d %d", &V, &E);
	/*
	*初始化工作
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
	//读入边集，u为起始点，v为终点，t为边的权重
	for (i = 1; i <= E;i++) {
		scanf_s("%d %d %d", &u, &v, &t);
		e[u][v] = t;
	}
	//初始化操作
	for (i = 1; i <= V; i++) {
		dist[i] = e[1][i];
		flag[i] = 0;
	}
	flag[1] = 1;

	//算法的核心步骤
	//由于有V个定点，所以最多做V次选择，选出当前距离源点最近的点
	for (i = 1; i < V; i++) {
		//从Q集合中找到距离源点最近的节点
		int min = INF;
		for (j = 2; j <= V; j++) {
			if (!flag[j] && min > dist[j]) {
				min = dist[j];
				u = j;
			}
		}
		flag[u] = 1;
		for (v = 1; v <= E; v++) {
			 //必要的操作步骤，否则会产生越界影响
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