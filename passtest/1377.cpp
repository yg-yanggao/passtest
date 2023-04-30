#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int *a=new int [n];
		for (int i = 0; i < n; i++) {
			a[i] = i + 1; // 初始化数组为1~n
		}
		do {
			int m=0;
			for (int i = 0; i < n; i++) {
				if (m== 0)cout <<a[i];
				else {
					cout <<" "<<a[i];
				}
				m++;
			}
			cout << endl;
		} while (next_permutation(a, a + n)); // 生成下一个排列，直到已经生成所有排列
	}
	return 0;
}

