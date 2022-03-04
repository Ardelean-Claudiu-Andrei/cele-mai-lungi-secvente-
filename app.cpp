#include <iostream>
#include "utils.h"
#include "test.h"

int main() {
    int l = -1,f,g;
    int a[100];
    std::cout << "Hello, World!" << std::endl;
    readlist(l, a);
    printlist(l,a);
    test_sum_of_list();
    std::cout<<std::endl;
    std::cout<<"Suma elementelor vectorului este: "<<sum_of_list(l, a);
    std::cout<<std::endl;
    //std::cout<<"a= ";std::cin>>f;
    //std::cout<<"b= ";std::cin>>g;
    //1,2,3,4,5,6,7,8,2,10,6,7,8
    //din_interval(l, a, f, g);
    //din_1_interval(l,a,f,g);
    std::cout<<std::endl;
    //semne(l,a);
    //cautare_de_secventa();
    //longest_sequence_from_interval(l, a, f, g);
    std::cout<<std::endl;
    //1 3 2 10 5      0 1 3 2 10 5 2
    longest_sequence_with_dif_signs(l, a);
    return 0;
}
