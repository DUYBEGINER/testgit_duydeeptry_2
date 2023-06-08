#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void Nhap_Mang(int A[100], int &n)
{
    do
    {
        cout<<"Nhap so phan tu cua mang: ";
        cin>>n;
        if(n<=0)
            cout<<"Nhap lai!";
    }while(n<=0);
    for(int i=0; i<n ; i++)
    {
        cout<<"Nhap phan tu thu A["<<i<<"]: ";
        cin>> A[i];
    }
}
int Max(int A[100],int n)
{
    int max = A[0];
    for(int i=1; i<n ; i++){
        if(A[i]>max)
            max = A[i];
    }
    return max;
}
int Min(int A[100],int n)
{
    int min = A[0];
    for(int i=1; i<n ; i++){
        if(A[i]<min)
            min = A[i];
    }
    return min;
}
int main()
{
    int A[100];
    int n;
    Nhap_Mang(A,n);
    cout<<"Gia tri lon nhat trong mang la: "<< Max(A,n);
    cout<<"Gia tri nho nhat trong mang la: "<< Min(A,n);
    system("pause");
    return 0;
}

