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
	//���Է���
	void straightInsertionSortTest();
	void shellSortTest();
	void selectionSortTest();
	void binarySelectionSortTest();
	void heapSortTest();
	void bubbleSortTest();
	void bubbleSortImprovement_1Test();
	void quickSortTest();
	void mergeSortInterationTest();
	void mergeSortRecursiveTest();
public:
	//ֱ�Ӳ�������
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
	//��������֮ϣ������
	void shellSort(int a[], int n) {
		int i, j;
		int d = n/2;
		//int loop = (int)log(n);
		while(d>=1){ //ѭ������
			for (i = d; i < n; i++) { // ��dΪ��������ֱ�Ӳ�������
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

	//ѡ�����򡪡���ѡ������
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
			min = i; max = i; //��¼������Сֵ��λ��
			for (j = i + 1; j < n-i; j++) {
				if (a[max] < a[j]) {
					max = j;
				}
				if (a[min] > a[j]) {
					min = j;
				}
			}
			int cur = a[min]; a[min] = a[i]; a[i] = cur;
			//ע������Ĵ�����min,max��������Գ�ʱ���ǲ���ִ�еڶ���������
			if ((max+min+1)!=n) {
				cur = a[max]; a[max] = a[n - i - 1]; a[n - i - 1] = cur;
				//printf("%d %d\n", i,n -i-1);
			}
			print(a, n, i);
		}
	}


	/*ѡ�������㷨֮�������㷨 begin*/
	void heapSort(int a[], int n) {
		int i;
		//print(a, n, 0);
		heapBuild(a, n);
		//printf("����\n");
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
	    ��֪a[cur,n]��Ԫ��a[cur]�������󶥶����ʣ�����ʹa[cur]����
		�����б�
		   a : Ԫ������
		   n : ���鳤��
		   cur:  ������Ԫ��λ��
	*/
	void heapAdjust(int a[], int n, int cur) {
		int c = a[cur];
		//��ǰ�ڵ������
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
	     ��֪ԭ����a,�����г���n�������󶥶�
		   a : Ԫ������
		   n : ���鳤��
	*/
	void heapBuild(int a[], int n) {
		int loop = n; //��¼ѭ������
		while (--loop >= 0) {
			heapAdjust(a, n, loop);
		//	print(a, n, loop);
		}
	}

	/*ѡ�������㷨֮�������㷨 end*/

	//��������֮ð������
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
	//ð�������㷨�Ľ�
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
			i = pos;//��һ�μ��λ��
		}
	}

	/*��������֮�������� begin*/
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
		//ע������ʱ����������˴���
		a[l] = povit;
		print(a, 8, l);
		return l;
	}
	/*��������֮�������� begin*/
public:
	/*�鲢���� begin*/
	void mergeSortInteration(int arr[], int len) {
		int* a = arr;
		int* b = (int*)malloc(len * sizeof(int*));
		int seg, start;
		for (seg = 1; seg < len; seg += seg) {
			for (start = 0; start < len; start += seg + seg) {
				int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
				int k = low;
				int start1 = low, end1 = mid;
				int start2 = mid, end2 = high;
				while (start1 < end1 && start2 < end2)
					b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
				while (start1 < end1)
					b[k++] = a[start1++];
				while (start2 < end2)
					b[k++] = a[start2++];
			}
			int* temp = a;
			a = b;
			b = temp;
		}
		if (a != arr) {
			int i;
			for (i = 0; i < len; i++)
				b[i] = a[i];
			b = a;
		}
		free(b);
	}
	/*
	 *�ݹ�棬�鲢�����㷨
	 *����
	 *arr: ����������
	 *reg: �м�����
	 *start: ��ʼλ��
	 *end :����λ��
	*/
	void mergeSortRecursive(int arr[], int reg[], int start, int end) {
		if (start >= end)
			return;
		int len = end - start, mid = (len >> 1) + start;
		int start1 = start, end1 = mid;
		int start2 = mid + 1, end2 = end;
		mergeSortRecursive(arr, reg, start1, end1);
		mergeSortRecursive(arr, reg, start2, end2);
		int k = start;
		while (start1 <= end1 && start2 <= end2)
			reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
		while (start1 <= end1)
			reg[k++] = arr[start1++];
		while (start2 <= end2)
			reg[k++] = arr[start2++];
		for (k = start; k <= end; k++)
			arr[k] = reg[k];
	}
	/*�鲢���� end*/

};

