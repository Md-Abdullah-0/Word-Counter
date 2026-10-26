#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int w=0;
    cout<<"Enter Your Line: ";
    getline(cin,n);
    int x=n.length();
    for(int i=0;i<x;i++)
    {
        if(n[i]!=' ' && (i==0 || n[i-1]==' '))
        {
            w++;
        }
    }
    

    cout<<"Word = "<<w<<endl;
}