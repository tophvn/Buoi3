#include <iostream>
using namespace std;

// Hàm tính tổng mảng không đệ quy
int tinhTongKhongDeQuy(int arr[], int n) {
	int sum_total = 0;
	for (int i = 0; i < n; ++i) {
		sum_total += arr[i];
	}
	return sum_total;
}

// Hàm tính tổng mảng đệ quy
int tinhTongDeQuy(int arr[], int left, int right) {
	if (left > right) {
		return 0; 
	}
	if (left == right) {
		return arr[left];
	}
	int mid = left + (right - left) / 2;
	int leftSum = tinhTongDeQuy(arr, left, mid);
	int rightSum = tinhTongDeQuy(arr, mid + 1, right);
	return leftSum + rightSum;
}

int main() {
	const int n = 6;
	int arr[n] = { 7, 5, 3, 9, 1, 8 }; 
	std::cout << "Tong mang khong de quy: " << tinhTongKhongDeQuy(arr, n) << std::endl;
	std::cout << "Tong mang de quy: " << tinhTongDeQuy(arr, 0, n - 1) << std::endl;
	std::cin.get();
	return 0;
}
