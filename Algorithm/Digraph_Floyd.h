#pragma once
#define MAX 10
class Digraph_Floyd
{
public:
	Digraph_Floyd();
	Digraph_Floyd(int n);
	~Digraph_Floyd();
public:
	void floyd(int n);
private:
	int a[MAX][MAX];
	int path[MAX][MAX]; //��¼u,v����֮�����·�������뾭���ĵ�
public:
	void textFloyd();
};

