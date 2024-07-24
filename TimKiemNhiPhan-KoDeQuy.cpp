#include <iostream>
#include <vector>
using namespace std;

// Hàm tìm kiếm nhị phân không đệ quy
int binarySearchIterative(const vector<int>& arr, int x) {
	int left = 0, right = arr.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] < x)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1; // không tìm thấy x trong mảng
}

int main() {
	vector<int> arr = { 2, 3, 4, 10, 40 };
	int x = 10;
	int result = binarySearchIterative(arr, x);
	if (result != -1)
		cout << "Phan tu duoc tim thay tai vi tri: " << result << endl;
	else
		cout << "Phan tu khong co trong mang" << endl;
	std::cin.get();
	return 0;
}
