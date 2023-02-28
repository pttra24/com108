#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

// Định nghĩa cấu trúc SinhVien
typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char maSV[MAX_LEN];
    char ho[MAX_LEN];
    char ten[MAX_LEN];
    Date dob;
    char queQuan[MAX_LEN];
    char gioiTinh[MAX_LEN];
    char maLop[MAX_LEN];
} SinhVien;

int main() {
    // Khởi tạo dữ liệu cho 2 sinh viên
    SinhVien sv1 = {"SV001", "Nguyen", "Van A", {15, 10, 2000}, "Ha Noi", "Nam", "CTK42"};
    SinhVien sv2 = {"SV002", "Tran", "Thi B", {10, 5, 2001}, "Hai Phong", "Nu", "CTK42"};

    // Copy thông tin sinh viên 1 sang sinh viên 3
    SinhVien sv3 = sv1;

    // Thay đổi thông tin của sinh viên 3
    strcpy(sv3.ho, "Le");
    strcpy(sv3.ten, "Van C");
    strcpy(sv3.queQuan, "Hai Duong");

    // In ra thông tin các sinh viên
    printf("Thong tin sinh vien 1:\n");
    printf("Ma SV: %s\n", sv1.maSV);
    printf("Ho ten: %s %s\n", sv1.ho, sv1.ten);
    printf("Ngay sinh: %d/%d/%d\n", sv1.dob.day, sv1.dob.month, sv1.dob.year);
    printf("Que quan: %s\n", sv1.queQuan);
    printf("Gioi tinh: %s\n", sv1.gioiTinh);
    printf("Ma lop: %s\n", sv1.maLop);

    printf("\nThong tin sinh vien 2:\n");
    printf("Ma SV: %s\n", sv2.maSV);
    printf("Ho ten: %s %s\n", sv2.ho, sv2.ten);
    printf("Ngay sinh: %d/%d/%d\n", sv2.dob.day, sv2.dob.month, sv2.dob.year);
    printf("Que quan: %s\n", sv2.queQuan);
    printf("Gioi tinh: %s\n", sv2.gioiTinh);
    printf("Ma lop: %s\n", sv2.maLop);

    printf("\nThong tin sinh vien 3:\n");
    printf("Ma SV: %s\n", sv3.maSV);
    printf("Ho ten: %s %s\n", sv3.ho, sv3.ten);
    printf("Ngay sinh: %d/%d/%d\n", sv3.dob.day, sv3.dob.month, sv3.dob.year);
    printf("Que quan: %s\n", sv3.queQuan);
    printf("Gioi tinh: %s\n", sv3.gioiTinh);
    printf("Ma lop: %s\n", sv3.maLop);

    return 0;
}
