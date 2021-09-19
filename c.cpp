#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

map<char, int> mp;
int min(int x, int y){
    return x < y? x : y;
}

bool cmp(string a, string b){
    int i = 0;
    int a_len = a.size(),
        b_len = b.size();
    int low = min(a_len, b_len);
    while(i <= low && a[i] == b[i]) i++;
    if(i == low) return a.size() < b.size();
    return mp[a[i]] < mp[b[i]];
}

int main(){
    //freopen("input.txt", "r", stdin);
    string x;
    cin >> x;
    for(int i = 0; i < 26; i++) mp[x[i]] = i;
    int n;
    scanf("%d", &n);
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    sort(s, s+n, cmp);
    for(int i = 0; i < n; i++) cout << s[i] << endl;
    return 0;
}
