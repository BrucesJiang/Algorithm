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
public:
	void textFloyd();
};

