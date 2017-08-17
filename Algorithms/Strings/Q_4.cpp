#include <bits/stdc++.h>

using namespace std;
int check_pali(string s){
    int i,j;
    for(i=0,j=s.size()-1;i<j;i++,j--){
        if(s[i]!=s[j])
            return 0;
    }    
    return 1;
}

int palindromeIndex(string s){
    
    string str;
    int j,i;
    
    for(i=0,j=s.size()-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            str = s;
            str.erase(i,1);
          
            if(check_pali(str) == 1)
                return i;

            str = s;
            str.erase(j,1);
  
            if(check_pali(str) == 1)
                return j;
            
            return -1;
        }
    }
    
    return -1;
    // Complete this function
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}
