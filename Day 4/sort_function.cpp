#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> numbers = {5, 2, 8, 1, 3};
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
