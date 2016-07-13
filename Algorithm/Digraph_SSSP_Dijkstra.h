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
	 *�ж�δȷ����С·���Ľ�㼯�����Ƿ�Ϊ�գ������Ϊ�շ��ظý���±�
	 * dist  : ��¼ÿ����㵽Դ������·��ֵ
	 * flag : ��¼ĳ��������·���Ƿ��Ѿ�ȷ��  1�� �Ѿ�ȷ��  0�� û��ȷ��
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

