#include<iostream>
#include<stdlib.h>
using namespace std;

#define MAX 20
#define MIN 1

int main() {
	srand((unsigned)time(NULL));
	int a[20];
	for (int i = 0; i < 20; i++) {
		a[i] = MIN + rand() % 20;
		cout << a[i]<<'\t';
	}
	cout << endl;
	//��������
	int j;
	for (int i = 0; i < 20; i++) {
		int tem = a[i];
		for (j = i - 1; j >= 0 && tem < a[j]; j--) {
			a[j + 1] = a[j];
		}
		//j+1������������a[i]ǰ���Ǹ���
		a[j + 1] = tem;
		//Ϊʲôa[j]=tem�ᱨ��
	}
	for (int i = 0; i < 20; i++) {
		cout << a[i] << '\t';
	}
}