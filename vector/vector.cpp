//
// Created by jdp on 22-7-4.
//

#include "vector.h"

using namespace std;

void test_vector() {

    vector<int> values {1,2,3};
    cout << "values 容器首个元素的地址：" << values.data() << endl;
    auto first = values.begin();
    auto end = values.end();

    //增加 values 的容量
    values.reserve(20);
    cout << "values 容器首个元素的地址：" << values.data() << endl;
    first = values.begin();
    end = values.end();
    while (first != end) {
        cout << *first ;
        ++first;
    }
}

void test_vector_capacity_and_size() {
    std::vector<int>value{ 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
    value.reserve(20);
    cout << "value 容量是：" << value.capacity() << endl;
    cout << "value 大小是：" << value.size() << endl;
}