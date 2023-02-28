#include<iostream>
#include<string.h>
#include<map>

using namespace std;

int main()
{
    map<int, string> mp;
    mp[1] = "hello";
    mp[2] = "I";
    mp[3] = "am";
    mp[4] = "Akanksha Joshi";
    cout << "size : " <<  mp.size() << endl;
    for(map<int, string> :: iterator i = mp.begin(); i != mp.end(); ++i){
        cout << (*i).first << " " << (*i).second << endl;
    }
    cout << endl;
    for(map<int, string> :: reverse_iterator i = mp.rbegin(); i != mp.rend(); ++i){
        cout << (*i).first << " " << (*i).second << endl;
    }
    cout << endl;

    // To find whether a key exists in a map or not:
    int ourkey = 4;
    map<int,string>::iterator z;
    z = mp.find(ourkey);
    if(z == mp.end()){
        cout << ourkey << " doesnt exist" << endl;
    }
    else{
        cout << ourkey << " exist" << endl;
        cout << z->first << " " << z->second << endl;
    }
    return 0;
}