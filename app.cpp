#include <iostream>
#include "utils.h"
#include "test.h"
//Ardelean Andrei
int main()
{
    test_all();
    int l = -1,f,g, start =0, startul = 0;

    int a[100];

    readlist(l, a);

    printlist(l,a);
    std::cout<<std::endl;
    std::cout<<"Suma elementelor vectorului este: "<<sum_of_list(l, a)<<std::endl;

    std::cout<<"a= ";std::cin>>f;std::cout<<std::endl;
    std::cout<<"b= ";std::cin>>g;std::cout<<std::endl;

    //sir bun ca exemplu 1,2,3,4,5,6,7,8,2,10,6,7,8 --> 2,3,4,5,6,7,8,2.
    int sfarsit = longest_sequence_from_interval(l, a, f, g, start);
    afisare_secventelor(a,start,sfarsit);

    //sir bun ca exemplu  0,1,3,2,10,5,5 --> 1,3,2,10,5.
    // si pentru exemplul de la interval   1,2,3,4,5,6,7,8,2,10,6,7,8 --> 7, 8, 2, 10, 6, 7.
    int final = longest_sequence_with_dif_signs(l, a, startul);
    //trebuie +2 deoarece functia verifica si ultimele 2 valori dar nu le adauga
    afisare_secventelor(a,startul,final+2);

    return 0;
}