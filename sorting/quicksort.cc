#include <iostream>
#include "quicksort.h"

using namespace std;

namespace jw {
    void quick_sort(int numbers[], int left, int right) {
        if (left == right)
            return;
        
        srand(time(0));

        int i = left;
        int j = right;
        int temp = 0;

        int count = right - left;
        int pivot_mod = rand() % count;
        int pivot = numbers[left + pivot_mod];

        while (i <= j) {
            while (numbers[i] < pivot) ++i;
            while (numbers[j] > pivot) --j;

            if (i <= j) {
                if (i < j) {
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
                ++i;
                --j;
            }
        }
        if (left < j) quick_sort(numbers, left, i);
        if (right > i) quick_sort(numbers, i, right);
    }

    bool is_sorted(int *numbers, int count) {
        double last_num = -RLIM_INFINITY;
        bool sorted = true;
        
        for (int i = 0; i < count; ++i) {
            if (numbers[i] < (int)last_num) {
                sorted = false;
                break;
            }
            last_num = numbers[i];
        }

        return sorted;
    }

    void print_ints(int numbers[], int count) {
        for (int i = 0; i < count; ++i) {
            cout << numbers[i];
            if (i < count - 1) {
                cout << ", ";
            }
        }
    }
}

int main(int argc, char* argv[]) {
    cout << "Quick Sort" << endl;
    int num_count = 16;
    int original[] = {
        325432, 989, 547510, 3, -93, 189019, 5042, 123,
        597, 42, 7506, 184, 184, 2409, 45, 824
    };
    int numbers[num_count];

    memcpy(numbers, original, sizeof numbers);
    printf("Sorting %d numbers...\n\n", num_count);

    jw::quick_sort(numbers, 0, num_count - 1);

    if (jw::is_sorted(numbers, num_count)) {
        printf("** SUCCESS! **\n");
    } else {
        printf("Uh oh - not in order.\n");
    }

    jw::print_ints(numbers, num_count);
    putchar('\n');

    return 0;
}
