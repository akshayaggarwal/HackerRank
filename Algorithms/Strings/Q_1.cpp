#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    if(s.size()<1)
        return 0;
    map<char,int> mymap;
    set<int> myset;
    int n,i;
    
    for(i=0;i<s.size();i++){
        if(i>0)
            if(s[i]!=s[i-1] && mymap.find(s[i])!=mymap.end())
                mymap[s[i]] = 0;
        mymap[s[i]] += ((s[i]-'a')+1);
        myset.insert(mymap[s[i]]);
    }
    
    cin >> n;
    
    if(n>100000)
        return 0;
    
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        if(x<1 || x> 10000000)
            continue;
        if(myset.find(x)!=myset.end())
            printf("Yes\n");
        else
            printf("No\n");
        // your code goes here
    }
    return 0;
}
