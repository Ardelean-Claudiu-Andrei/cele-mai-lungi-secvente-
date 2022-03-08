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
    int c[1]={7};
    assert(sum_of_list(1,c)==7);
}

void test_longest_sequence_from_interval()
{
    int array[]={1, 2, 3, 4, 5, 6, 7, 8, 2, 10, 6, 7, 8};
    int start_poz = 0;
    assert(longest_sequence_from_interval(13, array, 2, 8, start_poz) == 9);
    assert(start_poz == 1);
}

void test_longest_sequence_with_dif_signs()
{
    int array[]={0,1,3,2,10,5,5};
    int start_poz = 0;
    assert(longest_sequence_with_dif_signs(7,array, start_poz) == 6);
    assert(start_poz == 1);
}

void test_no_seq()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start_poz = 0;

    assert(longest_sequence_from_interval(9, array, 10, 11, start_poz) == 0);
    assert(start_poz == 0);

    int array2[] = {1,2,3,4,5,6,7};
    int start_poz2 = 0;
    assert(longest_sequence_with_dif_signs(7, array2, start_poz2) == 2);
    assert(start_poz2 == 0);

}

void test_all(){

    test_sum_of_list();
    test_longest_sequence_from_interval();
    test_longest_sequence_with_dif_signs();
    test_no_seq();

}
