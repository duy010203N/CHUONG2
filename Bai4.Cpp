#include <iostream> // Thư viện nhập xuất dữ liệu trong C++
using namespace std; // Không gian tên standard namespace

int countPositive(float arr[], int n) // Hàm đếm số lượng giá trị dương trong mảng
{
    if (n == 0) { // Nếu độ dài của mảng là 0
        return 0; // Trả về 0
    }
    if (arr[0] > 0) { // Nếu phần tử đầu tiên của mảng là số dương
        return 1 + countPositive(arr + 1, n - 1); // Trả về 1 cộng với đệ quy của hàm với mảng bỏ đi phần tử đầu tiên
    }
    else { // Nếu phần tử đầu tiên của mảng không phải số dương
        return countPositive(arr + 1, n - 1); // Trả về đệ quy của hàm với mảng bỏ đi phần tử đầu tiên
    }
}

int main() // Hàm chính
{
    float arr[] = { -1.5, 2.5, -3.0, 4.0, 5.5 }; // Khởi tạo mảng các số thực
    int n = sizeof(arr) / sizeof(arr[0]); // Độ dài của mảng
    int count = countPositive(arr, n); // Đếm số lượng giá trị dương trong mảng
    cout << "The number of positive values in the array is: " << count << endl; // Xuất kết quả
    return 0; // Trả về giá trị 0 để kết thúc chương trình
}
