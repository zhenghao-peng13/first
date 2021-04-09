#include<iostream>
#include<random>
using namespace std;

int main() {
	//希尔排序声明
	void shell_sort(int a[], int length);

	//test
	srand((unsigned)time(NULL));
	int nums[10];
	for (int i = 0; i < 10; i++) {
		nums[i] = 0 + rand() % 11;
		cout << nums[i] << '\t';
	}
	cout << endl;
	shell_sort(nums, 10);
	for (int i = 0; i < 10; i++) {
		cout << nums[i] << '\t';
	}
	return 0;
}

//希尔排序
void shell_sort(int a[], int length) {
	//确定分组的间距
	int gap = 3;
	int tem;
	//不断缩小间距，直到gap=1，即为插入排序
	for (gap = 3; gap > 0; gap--) {
		for (int i = 0; i < length; i++) {
			
			//if (i == gap) {
				//break;
			//}

			//其中一部分的排序
			for (int j = i + gap; j < length; j += gap) {
				if (a[j - gap] > a[j]) {
					tem = a[j - gap];
					a[j - gap] = a[j];
					a[j] = tem;
				}
			}
		}
	}
}