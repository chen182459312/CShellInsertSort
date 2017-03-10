//
//  CShellSort.hpp
//  ShellSort
//
//  Created by chentao on 17/2/23.
//  Copyright © 2017年 iFengLian. All rights reserved.

#ifndef CShellSort_hpp
#define CShellSort_hpp

#include <stdio.h>

template<class T>
void Swap(T &first, T &second) {
    T tmp(first);
    first  = second;
    second = tmp;
}

template<class T>
void ShellInsertSort(T array[], int count) {
    int index, cursor, interval;
    for(interval = count/2; interval>= 1; interval /= 2) {
        for (index = interval; index < count; index+=interval) {
            for (cursor = index - interval; cursor >= 0 && array[cursor] > array[cursor+interval]; cursor -= interval) {
                Swap(array[cursor], array[cursor+interval]);
            }
        }
    }
}

#endif /* CShellSort_hpp */
