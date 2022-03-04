//
// Created by Andrei on 3/2/2022.
//

#include <cassert>
#include "test.h"
#include "utils.h"

void test_sum_of_list()
{
    int a[3]={1,2,3};
    assert(sum_of_list(3,a)== 6);
    //int b[];
    //assert(sum_of_list(0,b)==0);
    int c[1]={7};
    assert(sum_of_list(1,c)==7);
}