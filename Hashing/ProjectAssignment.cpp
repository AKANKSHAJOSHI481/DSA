#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n, k;
    cin >> n >> k;
    ll skill[n+1];
    ll i = 1;
    while(i <= n){
        cin >> skill[i];
        i++;
    }
    sort(skill+1, skill+n+1);
    i = 1 ;
    while(i<=n){
        cout<<skill[i]<<" ";
        i++;
    }

    cout<<"\n";
    ll prefix[n+1] = {0};
    i = 1;
    while(i <= n){
        prefix[i] = prefix[i-1]+skill[i];
        i++;
    }
    i = 1 ;
    while(i<=n){
        cout<<prefix[i]<<" ";
        i++;
    }

    cout<<"\n";

    ll mx = 1e18;
    i =1;
    while(i <= n-k+1){
        ll start = i;
        ll d = k + i -1;
        if(k%2 != 0){
             ll md = (start + d)/2;
             ll l1 = abs(md-start);
             ll sum1 = prefix[md-1]-prefix[start-1];
             ll ans1 = abs(l1*skill[md] - sum1);

             ll l2 = abs(d - md);
             ll sum2 = prefix[d] - prefix[md];
             ll ans2 = abs(l2*skill[md] - sum2);

             ll final_ans = ans1+ans2;
             mx = min(mx, final_ans);
        }
        else{
            ll md1 = (start+d)/2;
            ll md2 = md1+1;
           
            ll l1 = abs(md1-start);
            ll sum1 = prefix[md1-1]-prefix[start-1];
            ll ans1 = abs(l1*skill[md1] - sum1);

            ll l2 = abs(d - md1);
            ll sum2 = prefix[d] - prefix[md1];
            ll ans2 = abs(l2*skill[md1] - sum2);

            ll final_ans = ans1+ans2;
             mx = min(mx, final_ans);


             l1 = abs(md2-start);
            sum1 = prefix[md2-1]-prefix[start-1];
            ans1 = abs(l1*skill[md2] - sum1);

            l2 = abs(d - md2);
            sum2 = prefix[d] - prefix[md2];
            ans2 = abs(l2*skill[md2] - sum2);

            final_ans = ans1+ans2;
             mx = min(mx, final_ans);
        }
    i++;
    }
    cout << mx << endl;
    return 0;
}