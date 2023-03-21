#include <cmath>

// Hàm tính căn bậc ba của một số thực x bằng phương pháp lặp
double cube_root(double x, double guess = 1.0) {
  // Đặt sai số cho phép
  const double error = 0.000001;
  
  // Tính giá trị mới của guess
  double new_guess = (2 * guess + x / (guess * guess)) / 3.0;
  
  // Kiểm tra xem sai số có nhỏ hơn sai số cho phép không
  if (fabs(new_guess - guess) < error) {
    // Nếu có, trả về giá trị mới của guess
    return new_guess;
  } else {
    // Ngược lại, gọi lại hàm với giá trị mới của guess
    return cube_root(x, new_guess);
  }
}

// Hàm tính căn bậc ba của một số thực x bằng cách dùng hàm exp và ln
double cube_root_exp_ln(double x) {
  // Sử dụng công thức tính căn bậc ba bằng exp và ln
  return exp(log(x) / 3.0);
}
