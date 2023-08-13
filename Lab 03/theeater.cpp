#include <bits/stdc++.h>
using namespace std;

int main(){

    long long  n,m,a;
    cin>>n>>m>>a;

    long long height =(m + a - 1) / a;
    long long width = (n + a - 1) / a;

        long long stone = height * width;


        cout<<stone;


}
