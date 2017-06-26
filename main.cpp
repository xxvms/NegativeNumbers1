#include <iostream>
#include <vector>

std::vector<int>invert(std::vector<int> values);

int main() {

    std::vector<int> values {-1, -2 , -3, -4, -5, -6};
    invert(values);
	return 0;
}

std::vector<int> invert(std::vector<int> values) {
    for (int i = 0; i < values.size(); i++) {
        if (values[i] < 0) {
            values[i] *= -1;
            std::cout << values[i] << std::endl;
        } else if (values[i] > 0) {

            values[i] -= values[i]+ values[i];
            std::cout << values[i] << std::endl;
        }
    }
    return values;
}
