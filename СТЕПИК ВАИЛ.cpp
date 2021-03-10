#include <unordered_map>
#include <iostream>
#include <cassert>

class Fibonacci final {
public:
    static int get_last_digit(int n) {
        assert(n >= 1);
        static std::unordered_map < int, int > cache;
        cache[0] = 0;
        cache[1] = 1;
        for (int i = 2; i <= n; i++) {
            cache[i] = (cache[i - 2] + cache[i - 1]) % 10;
        }
        return cache [n];
    }
};

int main(void) {
    int n;
    std::cin >> n;
    std::cout << Fibonacci::get_last_digit(n) << std::endl;
    return 0;
}