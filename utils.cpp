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

int longest_sequence_from_interval(int n, const int x[], int a, int b, int &start)
{

    int aux;
    if (a==b) cout<<"Nu exista.";
    else if (a>b) {aux=a;a=b;b=aux;}
    int l_start = 0;
    int l_end = 0;
    int crt_start = 0;
    int crt_end;
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
            //crt_end = i + 1;
        }
    }
    start=l_start;
    return l_end;
}

int longest_sequence_with_dif_signs(int n, const int x[], int &startul)
{
    int l_start = 0;
    int l_end = 0;
    int crt_start = 0;
    int crt_end;
    for (int i = 0; i < n-2; i++) {
        if ((((x[i] - x[i+1]) < 0) && ((x[i+1] - x[i + 2])>0))||(((x[i] - x[i+1]) > 0) && ((x[i+1] - x[i + 2])<0))) {
            crt_end = i + 1;
            if (l_end - l_start < crt_end - crt_start) {
                l_end = crt_end;
                l_start = crt_start;
            }
        }
        else {
            crt_start = i + 1;
            //crt_end = i + 1;
        }
    }
    startul = l_start;
    return l_end+2;
}

void afisare_secventelor(const int x[], int start, int sfarsit)
{
    for (int i = start; i < sfarsit; i++)
    {
        if (i<sfarsit-1) cout<<x[i]<<", ";
        else cout<<x[i]<<". ";
    }
    cout<<endl;
}
