#include<iostream>
#include<random>
using namespace std;

int main() {
	//快速排序
	void rapid_sorted(int a[],int start,int end);
	srand((unsigned)time(NULL));
	//a是以地址的形式传递的
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = 0 + rand() % 10;
		cout << a[i] << '\t';
	}
	cout << endl;

	rapid_sorted(a,0,9);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << '\t';
	}

	return 0;
}

void rapid_sorted(int a[], int start, int end) {

	//如果不添加这个if语句就会无限执行rapid_sorted
	if (start < end) {
		int i = start;
		int j = end;
		//找出基准数
		int based = a[i];
		while (i < j) {
			//从右边开始比较
			while (i < j && based <= a[j]) {
				j--;
			}
			if (i < j) {
				a[i] = a[j];
			}
			//从左边开始比较
			while (i < j && based > a[i]) {
				i++;
			}
			if (i < j) {
				a[j] = a[i];
			}
		}
		a[i] = based;
		rapid_sorted(a, start, i - 1);
		rapid_sorted(a, i + 1, end);
	}
}