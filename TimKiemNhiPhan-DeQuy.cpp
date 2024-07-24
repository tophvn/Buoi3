#include <iostream>
#include <vector>
using namespace std;

// Hàm tìm kiếm nhị phân đệ quy
int binarySearchRecursive(const vector<int>& arr, int left, int right, int x) {
	if (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearchRecursive(arr, left, mid - 1, x);
		return binarySearchRecursive(arr, mid + 1, right, x);
	}
	return -1;
}

int main() {
	vector<int> arr = { 2, 3, 4, 10, 40 };
	int x = 40;
	int result = binarySearchRecursive(arr, 0, arr.size() - 1, x);
	if (result != -1)
		cout << "Phan tu duocc tim thay tai vi tri: " << result << endl;
	else
		cout << "Phan tu khong co trong mang" << endl;
	std::cin.get();
	return 0;
}