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
	int path[MAX][MAX]; //记录u,v两点之间最短路径所必须经过的点
public:
	void textFloyd();
};

