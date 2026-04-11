#include <iostream>
#include <vector>

int read_num() {
    int num;
    std::cin >> num;
    return num;
}

void print_vec(const std::vector<int>& vec) {
    std::cout << "";
    for (int num : vec) {
        std::cout << num << " ";
    }
}

void bubble_sort(std::vector<int>& vec) {
    auto n = vec.size();

    for(int idx = 0; idx < n - 1; ++idx) {
        bool swap = false;

        for(int jdx = 0; jdx < n - 1 - idx; ++jdx) {
            if (vec[jdx] > vec[jdx+1]) {
                int temp = vec[jdx];
                vec[jdx] = vec[jdx+1];
                vec[jdx+1] = temp;
                swap = true;
            }
        }
    if (!swap) {
        break;
    }
    }
}

void selection_sort(std::vector<int>& vec) {
    auto n = vec.size();

    for (int idx = 0; idx < n -1; ++idx) {
        int min_idx = idx;

        for (int jdx = idx + 1; jdx < n; ++jdx) {
            if (vec[jdx] < vec[min_idx])
                min_idx = jdx;
        }

            if (min_idx != idx) {
                int temp = vec[idx];
                vec[idx] = vec[min_idx];
                vec[min_idx] = temp;
            }
    }
}

int main() {

    std::string str{};
    std::cin >> str;

    int size = read_num();
    std::vector<int> nums{};

    for (int idx = 0; idx < size; ++idx)
        nums.push_back(read_num());

    

    if (str == "burbuja")
        bubble_sort(nums);
    else if (str == "seleccion")

    bubble_sort(nums);
    selection_sort(nums);
    print_vec(nums);
}
