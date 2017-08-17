#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    map<char,int> mymap;
    string str = "hackerrank";
    
    int i,st = 0;
    
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        st = 0;
        string s;
        cin >> s;  
        // your code goes here
        for(i=0;i<s.size() && st<s.size();i++){
            if(s[i] == str[st])
                st++;
        }
        
        if(st == str.size())
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
