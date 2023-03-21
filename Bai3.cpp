#include <iostream>
using namespace std;

// Hàm đệ quy tính tổng các số chẵn trong mảng
int tongChan(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        int tong = tongChan(arr, n - 1);
        if (arr[n - 1] % 2 == 0) {
            tong += arr[n - 1];
        }
        return tong;
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> arr[i];
    }

    // Gọi hàm đệ quy tính tổng các số chẵn và xuất kết quả
    int tong_chan = tongChan(arr, n);
    cout << "Tong cac so chan trong mang la: " << tong_chan;

    return 0;
}
