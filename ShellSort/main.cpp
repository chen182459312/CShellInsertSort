//
//  main.cpp
//  ShellSort
//
//  Created by chentao on 17/2/21.
//  Copyright © 2017年 . All rights reserved.
//

#include <iostream>
#include "CShellSort.hpp"
const int count = 9;
int main(int argc, const char * argv[]) {
    int array[count] = {0};
    for(int index = 0; index < count; index++) {
        array[index] = arc4random()%20;
    }
    ShellInsertSort(array, count);
    return 0;
}
