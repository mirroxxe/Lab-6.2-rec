#include <iostream>
#include <vector>

int countnumbersRecursive(const std::vector<int>& a, int index) {
    if (index < 0) {
        return 0;
    }

    int count = countnumbersRecursive(a, index - 1);
    if (a[index] % 2 != 0) {
        count++;
    }

    return count;
}

int countnumbers(const std::vector<int>& a) {
    return countnumbersRecursive(a, a.size() - 1);
}

int main() {
    std::vector<int> a = { 2, 4, 7, 1, 9, 6, 3 };

    int oddCount = countnumbers(a);

    std::cout << "count of numbers: " << oddCount << std::endl;

    return 0;
}
