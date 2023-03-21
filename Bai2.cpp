#include <iostream>
using namespace std;

// Hàm đệ quy tính giai thừa
int giaiThua(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * giaiThua(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    // Gọi hàm đệ quy tính giai thừa và xuất kết quả
    int giai_thua = giaiThua(n);
    cout << n << "! = " << giai_thua;

    return 0;
}
