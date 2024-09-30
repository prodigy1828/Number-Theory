#include <bits/stdc++.h>
using namespace std;
using lli = long long;
const int N = 10000100;//for cases where the value of N is <=10^7
bool is_prime[N];
void solve(){
    for(int i=0;i<=N;i++) is_prime=true;//mark all the numbers as prime initially
    for(int i=2;i<=N;i++){
        if(is_prime[i]){//only visit if the number is prime 
            for(int j=1LL*i*i;j<=N;j+=i){//optimised 
                is_prime[j]=false;//mark all the multiples of the prime as false
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    //int tc=1;while(tc--)
    solve();

    return 0;
}








