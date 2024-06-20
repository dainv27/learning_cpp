/**
Cho cấu trúc Sinh Vien gồm có: MaSinhVien, HoTen, NgaySinh (Ngay, Thang, Nam)
Viết chương trình thực hiện 3 chức năng sau với cấu trúc:
struct DanhSachSinhVien { struct Sinh Vien A[100]; int ts;};
1. Thêm sinh viên mới vào vị trí đầu.
2. Sửa thông tin sinh viên theo Họ tên
3. Sắp xếp Danh sách sinh viên theo Ngày sinh tăng dần và In ra màn hình
Input:
- Dòng thứ nhất là lựa chọn chức năng thực hiện
- Dòng thứ hai: + Nếu lựa chọn ở dòng thứ nhất là 1 thì nhập số sinh viên sẽ thêm mới
+ Nếu lựa chọn ở dòng thứ nhất là 2 thì nhập Họ tên sẽ sửa đổi
- Dòng tiếp theo là thông tin sinh viên
Chức năng 3 cũng là kết thúc của input
Output:
- Nếu lựa chọn là 1 thì in ra số sinh viên được thêm
- Nếu lựa chọn là 2 thì in ra Họ tên được sửa
- Nếu lựa chọn là 3 thì Sắp xếp và in ra danh sách theo mô tả dưới đây
 */



#include <stdio.h>

class SinhVien {

};

class DanhSachSinhVien {
    public:
        int length();
        DanhSachSinhVien() {};
    private:
        SinhVien sinhVien[100]; 
        int ts;
};

int DanhSachSinhVien::length() {
    return ts;
}

int main() {

    return 0;
}

