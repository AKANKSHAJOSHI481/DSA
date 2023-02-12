#include<bits/stdc++.h>
// using namespace std;
// #include <string.h>
// #include <conio.h>
// #include <cstring>

// int vowelChk(char ch){
//    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U' || ch == 'Y' || ch == 'y')
//       return 1;
//    else
//       return 0;
// }
// int main()
// {
//     char s[100],t[100];

//     cin >> s;
//     int d =0;
//     for(int i=0;s[i]!='\0';i++)
// 	{
//         if(vowelChk(s[i]) == 0){
//          t[d] = s[i];
//          d++;
//       }
// 	}
//      t[d] = '\0';
//    strcpy(s, t);
//     for(int j=0;s[j]!='\0';j++){
//         if (s[j] >= 'A' && s[j] <= 'Z'){
//                 s[j] = s[j] + 32;
//         }
//         cout << "." << s[j];
//     }
    
//     return 0;
// }

#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();

    //freopen("input.txt","r", stdin);

    ll n;
    string s,t;
    cin>>s;
    n = s.length();
    transform(s.begin(),s.end(),s.begin(), ::tolower);

    for(ll i=0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else{
            t += '.';
            t += s[i];
        }
    }
    cout<<t<<endl;

    return 0;
}