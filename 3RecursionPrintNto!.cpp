#include<bits/stdc++.h>
using namespace std;

void PrintName(int i,int num)
{
    if(i<1)
    {
        
        return;
        
    }
    cout<<i<<endl;
    PrintName(i-1,num);

}

int main()
{
    int num;
    cout<<"Enter end number?"<<endl;
    cin>>num;
    PrintName(num,num);
    return 0;
}