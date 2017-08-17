#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s){
    // Complete this function
    map<char,int> mymap;
    int flag,i;
    
    for(i=0;i<s.size();i++){
        mymap[s[i]]++;    
    }
    
    if(s.size()%2 == 0)
        flag = 1;
    else
        flag = 0;
    
    for(map<char,int>::iterator it = mymap.begin();it!=mymap.end();it++){
        if(it->second %2 != 0){
            if(flag == 0)
                flag = 1;
            else
                return "NO";
        }
    }
    
    return "YES";
    
}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}
