#include<bits/stdc++.h>
using namespace std;
int luckynumber(int n){
    int x,y=0, count =0;
    while(n){
        x = n%10;
        count++;
        if(x == 4 || x == 7){
            y++;
        }
        n = n/10;
    }
    if(count == y){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
	long long int n;
    cin >> n;
    int count1 = 0;
    for(int i =1 ;i<=n ;i++){
        if(luckynumber(i) == 1){
            if(n%i == 0){
                count1++;
                break;
            }
            
        }
        
    }
    if(count1 == 1){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" << endl;
    }
	
return 0;		
}