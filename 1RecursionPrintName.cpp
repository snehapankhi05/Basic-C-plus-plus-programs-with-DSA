#include<bits/stdc++.h>
using namespace std;

void PrintName(int i,int num)
{
    if(i>num)
    {
        return;
    }
    cout<<"Sneha"<<endl;
    PrintName(i+1,num);

}

int main()
{
    int num;
    cout<<"How many times print name?"<<endl;
    cin>>num;
    PrintName(1,num);
    return 0;
}