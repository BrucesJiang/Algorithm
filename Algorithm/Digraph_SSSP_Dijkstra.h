#pragma once
class Digraph_SSSP_Dijkstra
{
public:
	Digraph_SSSP_Dijkstra();
	~Digraph_SSSP_Dijkstra();

public:
	void dijkstra(int grap[100][100], int n);
	int randomGenerator();
private:
	/*
	 *判断未确定最小路径的结点集合中是否为空，如果不为空返回该结点下标
	 * dist  : 记录每个结点到源点的最短路径值
	 * flag : 记录某个结点最短路径是否已经确定  1： 已经确定  0： 没有确定
	*/
	int search(const int dist[], const int flag[], int n) {
		int i = 0;
		int min = INT_MAX;
		int cur = -1;
		for (i = 2; i <= n; i++) {
			if (!flag[i] && dist[i]!=-1 && min > dist[i]) {
				min = dist[i];
				cur = i;
			}
		}
		return cur;
	}
public:
	void testDijkstra();
};

