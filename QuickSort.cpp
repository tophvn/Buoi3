#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int Partition(int a[], int left, int right) {
	int k = (left + right) / 2;
	int x = a[k];
	int l = left, r = right;
	do {
		while (a[l] < x)
			l++;
		while (a[r] > x)
			r--;
		if (l <= r) {
			swap(&a[l], &a[r]);
			l++;
			r--;
		}
	} while (l <= r);
	return r;
}

void QuickSort(int a[], int left, int right) {
	if (left < right) {
		int s = Partition(a, left, right);
		QuickSort(a, left, s - 1);
		QuickSort(a, s + 1, right);
	}
}

int main() {
	int a[] = { 6, 5, 3, 1, 8, 7 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	QuickSort(a, 0, n - 1);
	cout << "Mang sau khi sap xep: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	std::cin.get();
	return 0;
}