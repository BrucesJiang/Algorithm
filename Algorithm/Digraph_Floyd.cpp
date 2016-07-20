#include "stdafx.h"
#include "Digraph_Floyd.h"


Digraph_Floyd::Digraph_Floyd()
{
	
}

Digraph_Floyd::Digraph_Floyd(int n) {
	//初始化数组
	int i, j = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j) {
				a[i][j] = 0;
			}
			else {
				a[i][j] = INF;
			}
			path[i][j] = -1;
		}
	}
}

Digraph_Floyd::~Digraph_Floyd()
{
}

void Digraph_Floyd::floyd(int n) {
	int i, j, k;
	for (k = 0; k < n; k++) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (a[i][j] > a[i][k] + a[k][j]) {
					a[i][j] = a[i][k] + a[k][j];
					path[i][j] = k;
				}
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}


void Digraph_Floyd::textFloyd() {
	int n, m;
	int i;
	int x,y,z;
	scanf_s("%d %d", &n,&m);
	for (i=0; i < m; i++) {
		scanf_s("%d %d %d", &x, &y, &z);
		a[x - 1][y - 1] = z;
	}
	printf("OK\n");
	floyd(n);
}
/*
测试数据：
6 12
1 2 2
1 3 5
2 3 7
2 4 1
2 6 8
3 4 4
4 5 3
5 3 2
5 6 3
6 2 5
6 4 2
6 5 4
*/