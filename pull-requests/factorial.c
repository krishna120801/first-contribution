#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
    cout<<"enter a number: ";
    cin>>n;
    long long int i=n-1;
    cout<<"factorial of these nu. is: ";
    while(i!=0)
    {
        n=n*(i);
        i--;
    }
    cout<<n;
}
