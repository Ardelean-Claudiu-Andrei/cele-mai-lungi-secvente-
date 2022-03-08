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

void test_longest_sequence_from_interval()
{
    //13;
    int array[]={1, 2, 3, 4, 5, 6, 7, 8, 2, 10, 6, 7, 8};
    int start_poz = 0;
    assert(longest_sequence_from_interval(13, array, 2, 8, start_poz) == 9);
    assert(start_poz == 1);
}

void test_longest_sequence_with_dif_signs()
{
    int array[]={0,1,3,2,10,5,5};
    int start_poz = 0;
    assert(longest_sequence_with_dif_signs(7,array, start_poz) == 7);
    assert(start_poz == 1);
}

 /*
void test_seq_is_at_start(){

    int array[] = {2, 3, 5, 7, 113, 10, 20, 21, 9};
    int start_poz = 0;

    assert(longest_sequence_from_interval(9, array, 0, start_poz) == 5);
    assert(start_poz == 0);

}

void test_seq_is_at_end(){

    int array[] = {10, 9, 21, 20, 113, 3, 5, 2, 13};
    int start_poz = 0;

    assert(longest_sequence_from_interval(9, array, 0, start_poz) == 5);
    assert(start_poz == 4);

}

void test_seq_is_at_middle(){

    int array[] = {10, 9, 21, 113, 113, 3, 5, 2, 100};
    int start_poz = 0;

    assert(longest_sequence_from_interval(9, array, 0, start_poz) == 5);
    assert(start_poz == 3);

}

void test_multiple_seq(){

    int array[] = {10, 2, 7, 22, 113, 3, 5, 2, 100};
    int start_poz = 0;

    assert(longest_sequence_from_interval(9, array, 0, start_poz) == 4);
    assert(start_poz == 4);
}

void test_no_seq(){

    int array[] = {10, 22, 21, 9, 10002, 135};
    int start_poz = 0;

    assert(longest_sequence_from_interval(9, array, 0, start_poz) == 0);
    assert(start_poz == 0);

}
*/
void test_all(){

    test_sum_of_list();
    test_longest_sequence_from_interval();
    //test_seq_is_at_start();
   //test_seq_is_at_middle();
    //test_seq_is_at_end();
    //test_multiple_seq();
   // test_no_seq();

}
