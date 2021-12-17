#include <cstdio>
#include <unistd.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <thread>

#include "sample-project/utils.h"

void test1() {
    std::string num_str = "123";
    int num = strToInt(num_str);
    std::cout << num << std::endl;
    int num_2 = 1234;
    std::string num_str_2 = intToStr(num_2);
    std::cout << num_str_2 << std::endl;
}

int main() {
    test1();
    return 0;
}
