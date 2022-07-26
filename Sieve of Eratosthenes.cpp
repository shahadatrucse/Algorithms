#include<bits/stdc++.h>
using namespace std;

void seive(int n){

}

int main()
{
    int m=1000100;
    bool prime[m+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=m;p++){
        if(prime[p]==true){
            for(int i=p*p;i<=m;i+=p){
                prime[i]=false;
            }
        }
    }
    return 0;
}