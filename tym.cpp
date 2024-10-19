#include <iostream>
#include <cstdlib>
#include <cstdio>

int main() {
    float x, y, a;
    for (y = 1.5; y > -1.5; y -= 0.1) {
        for (x = -1.5; x < 1.5; x += 0.05) {
            a = x * x + y * y - 1;
            putchar(a * a * a - x * x * y * y * y <= 0 ? '*' : ' ');
        }
        std::cout << "\n";
    }
    std::cout << "Chuc em 20/10 vui ve ben nguoi minh thuong...\n"; 
    std::cout << "nhap nut bat ky de thoat.\n";
    std::cin.get(); // Đợi em ấn nhấn phím
    return 0;
}
