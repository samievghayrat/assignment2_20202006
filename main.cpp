#include<iostream>
#include "array.h"

using namespace std;




int main() {

    double value1, value2, value3;

    double nums[] = {
    5,
    4,
    9,
    12,
    8,
    25, 26, 27
    };

    size_t size = sizeof nums/sizeof nums[0];
    cout<<"The maximum value is: ";
    cout<<maximum_value(nums, size)<<endl;
    maximum_three_values(nums, size, &value1, &value2, &value3);
    cout<<"Three largest values: "<<value1<<" "<<value2<<" "<<value3<<endl;

  return 0;
}