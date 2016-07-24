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
	void heapSortTest();
	void bubbleSortTest();
	void bubbleSortImprovement_1Test();
	void quickSortTest();
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


	/*选择排序算法之堆排序算法 begin*/
	void heapSort(int a[], int n) {
		int i;
		//print(a, n, 0);
		heapBuild(a, n);
		//printf("是吗？\n");
		print(a, n, 0);
		for (i = 0; i < n; i++) {
			swap(&a[0], &a[n - 1 - i]);
			heapAdjust(a, n - 1 - i, 0);
			print(a, n, i);
		}
	}
	void swap(int *a, int *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}
	/*
	    已知a[cur,n]出元素a[cur]外均满足大顶堆性质，调整使a[cur]满足
		参数列表：
		   a : 元素数组
		   n : 数组长度
		   cur:  待调整元素位置
	*/
	void heapAdjust(int a[], int n, int cur) {
		int c = a[cur];
		//求当前节点的左孩子
		int child = 2 * cur + 1;
		while (child < n) {
			if (child + 1 < n && a[child] < a[child + 1]) {
				child++;
			}
			if (c < a[child]) {
				a[cur] = a[child];
				cur = child;
				child = child * 2 + 1;
			}
			else {
				break;
			}
		}	
		a[cur] = c;
	}

	/*
	     已知原序列a,和序列长度n，建立大顶堆
		   a : 元素数组
		   n : 数组长度
	*/
	void heapBuild(int a[], int n) {
		int loop = n; //记录循环次数
		while (--loop >= 0) {
			heapAdjust(a, n, loop);
		//	print(a, n, loop);
		}
	}

	/*选择排序算法之堆排序算法 end*/

	//交换排序之冒泡排序
	void bubbleSort(int a[], int n) {
		int i, j;
		for (i = 0; i < n - 2; i++) {
			for (j = 0; j < n - 1 - i; j++) {
				if (a[j] > a[j + 1]) {
					swap(&a[j], &a[j+1]);
				}
			}
			print(a, n, i);
		}
	}
	//冒泡排序算法改进
	void bubbleSortImprovement_1(int a[], int n) {
		int i = n - 1;
		int j;
		while (i > 0) {
			int pos = 0;
			for (j = 0; j < i; j++) {
				if (a[j] > a[j + 1]) {
					pos = j;
					swap(&a[j], &a[j + 1]);
				}
			}
			print(a, n, i);
			i = pos;//下一次检测位置
		}
	}

	/*交换排序之快速排序 begin*/
	void quickSort(int a[],int low,  int height) {
		if (low < height) {
			int povit = partition(a, low, height);
			quickSort(a, povit + 1, height);
			quickSort(a, low, povit - 1);
		}
	}
private:
	int partition(int a[], int l, int r) {
		int povit = a[l];
		while (l < r) {
			while (l < r && povit <= a[r]) {
				r--;
			}
			if (l < r) {
				a[l++] = a[r];
				
			}
			while (l < r && povit >= a[l]) {
				l++;
			}
			if (l < r) {
				a[r--] = a[l];
			}
		}
		//注意代码的时候在这里出了错误
		a[l] = povit;
		print(a, 8, l);
		return l;
	}
	/*交换排序之快速排序 begin*/
public:
};

