#include<iostream>
#include<random>
using namespace std;

int main() {
	//��������
	void rapid_sorted(int a[],int start,int end);
	srand((unsigned)time(NULL));
	//a���Ե�ַ����ʽ���ݵ�
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

	//�����������if���ͻ�����ִ��rapid_sorted
	if (start < end) {
		int i = start;
		int j = end;
		//�ҳ���׼��
		int based = a[i];
		while (i < j) {
			//���ұ߿�ʼ�Ƚ�
			while (i < j && based <= a[j]) {
				j--;
			}
			if (i < j) {
				a[i] = a[j];
			}
			//����߿�ʼ�Ƚ�
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