#pragma once
class String_Knuth_Morris_Pratt
{
public:
	String_Knuth_Morris_Pratt();
	~String_Knuth_Morris_Pratt();
	int kmp(char* T, char* P);
private:
	int* buildNext(char* P);

	
	//≤‚ ‘∑Ω∑®
public:
	void testKMP();

	void textBuildNext();
public:
	void buildNext0(const char* P, int n) {
		int* next = new int[n+1];
		//memset(next, 0, sizeof(next));
		for(int m=0;m<n+1;m++){
			next[m] = 0;
		}
		int i = 0, t = 0;
		next[1] = 0;
		while (++i <= n) {
			if (P[i] == P[t]) {
				next[i+1] = ++t;
			}else
				t = next[t+1];
			
		}
		for (int i = 1; i <= n; i++) {
			printf("%2d ", next[i]);
		}
		printf("\n");
	
	}
	void buildNext1(const char* P, int n) {
		//int next[KMPMAX];
		int* next = new int[n], j = 0;
		//int lenP = strlen(P);
		int t = next[0] = -1;
		while (j < n - 1) {
			if (0 > t || P[j] == P[t]) next[++j] = ++t;
			else t = next[t];
		}
		for (int i = 0; i < n; i++) {
			printf("%2d ", next[i]);
		}
		delete next;
		printf("\n");
	}

};

