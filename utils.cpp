//
// Created by adela on 3/2/2022.
//
#include <iostream>
using namespace std;
void readlist(int &n , int x[])
{
    cout<<"Dati un numar de elemente mai mic decat 100, n= ";
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>x[i];
        cout<<endl;
    }

}

void printlist(int n, int x[])
{
    cout<<"Vectorul este: ";
    for(int i=0; i<n;i++)
    {
        if (i<n-1) cout<<x[i]<<", ";
        else cout<<x[i]<<". ";
    }
}

int sum_of_list(int n, const int x[])
{
    int s=0;
    for(int i= 0; i<n; i++)
    {
        s=s+x[i];
    }
    return s;
}
/*
void din_interval(int n, const int x[], int a, int b)
{
    int aux,lung_crt=0,lung_max=0,poz_crt=0,poz_max=0;
    if (a==b) cout<<"Nu exista.";
    else if (a>b) {aux=a;a=b;b=aux;}
    for (int i=0; i< n; i++)
    {
        if ((x[i]>=a)&&(x[i]<=b))
        {
            lung_crt++;
        }
        else if (lung_crt>lung_max)
        {
            poz_max = poz_crt;
            lung_max = lung_crt - 1;
        }
        else
        {
            poz_crt = i;
            lung_crt= 1;
        }
    }
    for (int i = poz_max+1; i <= poz_max+lung_max; i++)
    {
        if (i<poz_max+lung_max-1) cout<<x[i]<<", ";
        else cout<<x[i]<<". ";
    }
}
void din_1_interval(int n, const int x[], int a, int b)
{
    //if ((x[i] <= b) && (x[i] >= a))
    int aux,k=0,j=0;
    int c[100], d[100];
    if (a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    else if (a==b) cout<< "NU EXISTA";
    int startMax = 0, lungMax = 0, startCrt = 0, lungCrt = 0;
    for(int i = 0; i < n; i++) {
        if ((x[i] <= b) && (x[i] >= a)) {
            k++;
        } else {
            if(k > lungMax) {//Verificăm dacă secvența curentă este maximă

                startMax = startCrt;
                lungMax = k - 1;

            }}
        startCrt = i;
        k = 1;
    }
    cout<<"Date ajutor: "<<startMax<<" ii startMax si lungimea maxima ii "<< lungMax;
    cout<<endl;
    for (int i = startMax+1; i <= startMax+lungMax; i++)
    {
        if (i<startMax+lungMax-1) cout<<x[i]<<", ";
        else cout<<x[i]<<". ";
    }
}

void semne(int n, const int x[])
{
    int k=0,j=0;
    int c[100], d[100];
    int startMax = 0, lungMax = 0, startCrt = 1, lungCrt = 0;
    for(int i = 1; i < n; i++) {
        if ((x[i] - x[i - 1] < 0) && (x[i] - x[i + 1])) {
            lungCrt++;
        } else {
            if(lungCrt > lungMax) { //Verificăm dacă secvența curentă este maximă
                startMax = startCrt;
                lungMax = lungCrt - 1;
            }
            startCrt = i;
            lungCrt = 1;
        }
    }
    for (int i = startMax; i < startMax+lungMax; i++)
    {
        if (i<startMax+lungMax-1) cout<<d[i]<<", ";
        else cout<<d[i]<<". ";
    }
}
*/

void longest_sequence_from_interval(int n, const int x[], int a, int b)
{
    //This function searches for the longest subsequence in a (vector) with neighbouring numbers having at least 2 common digits using the hascommondigits() function
    //It prints the sequence
    int aux;
    if (a==b) cout<<"Nu exista.";
    else if (a>b) {aux=a;a=b;b=aux;}
    int l_start = 0;
    int l_end = 0;
    int crt_start = 0;
    int crt_end = 0;
    /*for (int i = 0; i < v.length - 1; i++) //this is not efficient
    {
        for (int j = i; (j < v.length - 1 && hascommondigits(v, j, 2)); j++)
        {
            crt_start = i;
            crt_end = j + 1;
        }
        if (crt_end - crt_start > l_end - l_start)
        {
            l_start = crt_start;
            l_end = crt_end;
        }
    }*/
    for (int i = 0; i < n; i++) {
        if ((x[i] <= b) && (x[i] >= a)) {
            crt_end = i + 1;
            if (l_end - l_start < crt_end - crt_start) {
                l_end = crt_end;
                l_start = crt_start;
            }
        }
        else {
            crt_start = i + 1;
            crt_end = i + 1;
        }
    }
    //printvector(v, l_start, l_end + 1);
    for (int i = l_start; i < l_end; i++)
    {
        if (i<l_end-1) cout<<x[i]<<", ";
        else cout<<x[i]<<". ";
    }
}

void longest_sequence_with_dif_signs(int n, const int x[])
{
    int l_start = 0;
    int l_end = 0;
    int crt_start = 0;
    int crt_end = 0;
    for (int i = 0; i < n; i++) {
        if (((x[i] - x[i+1] < 0) && (x[i+1] - x[i + 2]>0))||((x[i] - x[i+1] > 0) && (x[i+1] - x[i + 2]<0))) {
            crt_end = i-1;
            //cout<<crt_end;
            //cout<<endl;
            if (l_end - l_start < crt_end - crt_start) {
                l_end = crt_end;
                l_start = crt_start;
            }
        }
        else {
            crt_start = i + 1;
            crt_end = i + 1;

        }
    }
    //printvector(v, l_start, l_end + 1);
    for (int i = l_start; i < l_end; i++)
    {
        if (i<l_end-1) cout<<x[i]<<", ";
        else cout<<x[i]<<". ";
    }
}
