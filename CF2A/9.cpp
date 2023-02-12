#include<iostream>
#include <string>
using namespace std;


int main()
{
    string s = "WUB" ,ss;
    cin >> ss;
    
    int pos = s.length();
    
    for(int i = ss.find(s);i != string::npos;i = ss.find(s)){
        ss.replace(i,pos," ");
    }

    string space = "  ";
    int pos2 = space.length();
     for(int i = ss.find(space);i != string::npos;i = ss.find(space)){
        ss.replace(i,pos2," ");
    }

   cout << ss << endl;
    return 0;
}