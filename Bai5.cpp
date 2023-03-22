#include <iostream> // Thư viện để sử dụng hàm nhập/xuất dữ liệu vào/ra
#include <cmath>    // Thư viện để sử dụng hàm mũ, logarit tự nhiên

using namespace std; // Khai báo không gian tên namespace

double cubeRoot(double a, double x) { // Khai báo hàm cubeRoot nhận hai đối số là a và x
    double epsilon = 0.00001; // Độ chính xác mong muốn, ở đây là 0.00001
    double x_new = (1.0/3.0)*((a/(x*x))+2*x); // Tính giá trị mới của x theo công thức
    if (abs(x_new - x) < epsilon) { // Nếu độ chênh lệch giữa x_new và x nhỏ hơn epsilon
        return x_new; // Trả về giá trị mới của căn bậc ba của a
    } else { // Nếu độ chênh lệch giữa x_new và x lớn hơn hoặc bằng epsilon
        return cubeRoot(a, x_new); // Đệ quy hàm cubeRoot với giá trị mới của x
    }
}

int main() { // Hàm main, hàm chạy đầu tiên khi chương trình được chạy
    double a = 27; // Khởi tạo giá trị a, cần tính căn bậc ba của số này
    double x = a; // Khởi tạo giá trị x ban đầu, ở đây ta lấy a làm giá trị ban đầu
    double result = cubeRoot(a, x); // Gọi hàm cubeRoot để tính căn bậc ba của a
    cout << "The cube root of " << a << " is " << result << endl; // In kết quả ra màn hình
    return 0; // Kết thúc chương trình, trả về giá trị 0
}
