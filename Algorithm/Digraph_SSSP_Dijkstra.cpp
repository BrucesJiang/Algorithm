#include "stdafx.h"
#include "Digraph_SSSP_Dijkstra.h"


Digraph_SSSP_Dijkstra::Digraph_SSSP_Dijkstra()
{
}


Digraph_SSSP_Dijkstra::~Digraph_SSSP_Dijkstra()
{
}

/*
 * �������·��ֵ
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
	//��ʼ��dist�����flag����
	for (i = 1; i <= n; i++) {
		dist[i] = grap[1][i];
		flag[i] = 0;
	}
	int cur = 0;
	flag[1] = 1;
	while ((cur = search(dist, flag,n))!=-1) {
		//������뵽P����
		flag[cur] = 1;
		for (i = 1; i <= n; i++) {
			//grap[cur][i]+dist[cur]������INT_MAX ����˸�ֵ
			if (grap[cur][i] != INT_MAX) { //�ؼ��޸�
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