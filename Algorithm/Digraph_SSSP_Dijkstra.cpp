#include "stdafx.h"
#include "Digraph_SSSP_Dijkstra.h"


Digraph_SSSP_Dijkstra::Digraph_SSSP_Dijkstra()
{
}


Digraph_SSSP_Dijkstra::~Digraph_SSSP_Dijkstra()
{
}

/*
 * 随机生成路径值
*/
int Digraph_SSSP_Dijkstra::randomGenerator() {
	time_t t = time(NULL);
	srand((unsigned)t);
	int value = rand() % 20;
	if (value > 10) {
		return -1;
	}
	else {
		return value;
	}
}

void Digraph_SSSP_Dijkstra::dijkstra(int grap[100][100], int n) {
	int flag[100 + 1];
	int dist[100 + 1];
	int i;
	//初始化dist数组和flag数组
	for (i = 1; i <= n; i++) {
		dist[i] = grap[1][i];
		flag[i] = 0;
	}
	int cur = 0;
	flag[1] = 1;
	while ((cur = search(dist, flag,n))!=-1) {
		//将其加入到P集合
		flag[cur] = 1;
		for (i = 1; i <= n; i++) {
			//grap[cur][i]+dist[cur]超出了INT_MAX 变成了负值
			if (grap[cur][i] != INT_MAX) { //关键修改
				if (dist[cur] + grap[cur][i] < dist[i]) {
					dist[i] = dist[cur] + grap[cur][i];
				}
			}
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", dist[i]);
	}
}


void Digraph_SSSP_Dijkstra::testDijkstra() {
	int n =0;
	int grap[100][100];
	while (scanf_s("%d",&n)==1 && n)
	{	
		int num;
		int i = 1;
		for (; i <= n; i++) {
			for (int j=1; j <= n; j++) {
				grap[i][j] = randomGenerator();
				scanf_s("%d", &num);
				if (num == -1) {
					grap[i][j] = INT_MAX;
				}
				else {
					grap[i][j] = num;
				}
			}
		}
		dijkstra(grap, n);
	}
}