#include <iostream>


int main()
{
    setlocale(LC_ALL, "rus");
    float x;
    std::cin >> x;
    if (x < 0) {
        std::cerr << "error";
        return 1;
    }
    else  if (x < 50) {
        x = x * 0.3;
        std::cout << x << " рублей";
    }
    else if (50 < x < 75) {
        x = x * 0.5;
        std::cout << x << " рублей";
    }
    else if (75 < x < 90) {
        x = x * 0.65;
        std::cout << x << " рублей";
    }
    else {
        x = (x * 0.7) + 20;
        std::cout << x << " рублей";
    }
    return 0;
}
