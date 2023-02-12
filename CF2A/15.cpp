#include<iostream>
using namespace std;
int unique(string s){
    for(int i=0;i<s.length();i++){
        int j;
        for(j=0;j<s.length();j++){
            if(i!=j && s[i] == s[j]){
                break;
            }
        }
        if(j == s.length()){
                return i;
            }
    }
    return -1;
    // for (int i = 0; i < s.length(); i++) {
	//         int j;
	//          for ( j = 0; j < s.length(); j++) {
	//              if(i!=j && s[i] == s[j]){
	//                 break;
	//              }
	//          }
	//          if(j == s.length()){
	//             return i;
	//          }
	//       }
	//       return -1;
}
int main()
{
    string s;
    cin >> s;
    cout << unique(s) << endl;
    return 0;
}