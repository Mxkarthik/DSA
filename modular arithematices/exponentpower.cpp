/***
 Your given four numbers A,B,C and P . P is a Prime Number . Find A power B power C % P
 test cases :
3
2 4 2 7
1 6 20 5
3 1 200 3
***/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll exponent (ll base , ll exp , ll P)
{
    if( exp == 0) return 1;

    if ( exp % 2 == 0)
    {
        // even case
        ll half = exponent(base , exp/2 , P);
        ll result = (half * half) % P;
        return result;
    }
    else
    {
        //  odd case
        ll half = exponent(base , (exp-1)/2 , P);
        ll result = (half * half) % P;
        result = (result * (base % P)) % P;
        return result;
    }

}

void solve ()
{
    ll A , B ,  C , P;
    cin>>A; cin>>B; cin>>C; cin>>P;
    if(A == 0 && B == 0 ) cout<< 0 <<"\n";
    if(B == 0 && C == 0 ) cout<<A % P<<"\n";
    if(A % P == 0) cout<< 0 <<"\n";
    if(A== 0 && B == 0 && C == 0) cout<< 0 <<"\n";
    if(A == 0) cout<< 0 <<"\n";
    if(B == 0) cout<< 1 << "\n";
    else {
    ll temp = exponent(B,C,P-1);
    ll temp2 = exponent(A,temp,P);
    cout<<temp2;
    }
}
int main ()
{
    int n;cin>>n;
    while (n--)
    {
        solve();
    }
}