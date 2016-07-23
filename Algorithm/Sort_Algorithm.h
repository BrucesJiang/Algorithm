#pragma once
class Sort_Algorithm
{
public:
	Sort_Algorithm();
	~Sort_Algorithm();
private:
	void print(int a[], int n, int cur) {
		printf("%d :",cur);
		int i;
		for (i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}
public:
	//测试方法
	void straightInsertionSortTest();
	void shellSortTest();
	void selectionSortTest();
	void binarySelectionSortTest();
public:
	//直接插入排序
	void straightInsertionSort(int a[], int n) {
		int i, j;
		for (i = 1; i < n; i++) {
			j = i;
			int cur = a[i];
			while (cur < a[j-1]) {
				a[j] = a[j - 1];
				j--;
			}
			a[j] = cur;
			print(a, 8, i);
		}
	}
	//插入排序之希尔排序
	void shellSort(int a[], int n) {
		int i, j;
		int d = n/2;
		//int loop = (int)log(n);
		while(d>=1){ //循环次数
			for (i = d; i < n; i++) { // 以d为增量进行直接插入排序
				int cur = a[i];
				j = i;
				while (j - d >= 0 && cur < a[j - d]) {
					a[j] = a[j - d];
					j -= d;
				}
				a[j] = cur;
				print(a, n, i);
			}
			d /= 2;
		}
	}

	//选择排序——简单选择排序
	void selectionSort(int a[] , int n) {
		int i, j;
		for (i = 0; i < n-1; i++) {
			int k = i;
			int cur = a[i];
			for (j = i + 1; j < n; j++) {
				if (a[k] > a[j]) {
					k = j;
				}
			}
			if (i != k) {
				a[i] = a[k];
				a[k] = cur;
			}
			print(a, n, i);
		}
	}

	void binarySelectionSort(int a[], int n) {
		int i, j, min, max;
		for (i = 0; i <n / 2; i++) {
			min = i; max = i; //记录最大和最小值的位置
			for (j = i + 1; j < n-i; j++) {
				if (a[max] < a[j]) {
					max = j;
				}
				if (a[min] > a[j]) {
					min = j;
				}
			}
			int cur = a[min]; a[min] = a[i]; a[i] = cur;
			//注意这里的处理，当min,max关于中轴对称时，是不能执行第二个交换的
			if ((max+min+1)!=n) {
				cur = a[max]; a[max] = a[n - i - 1]; a[n - i - 1] = cur;
				//printf("%d %d\n", i,n -i-1);
			}
			print(a, n, i);
		}
	}

};

