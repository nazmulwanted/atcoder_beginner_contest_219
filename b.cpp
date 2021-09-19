#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2, s3, st, s_res;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cin >> st;
    int len = st.size();
    for(int i = 0; i < len; i++){
        if(st[i] == '1') s_res += s1;
        else if(st[i] == '2') s_res += s2;
        else if(st[i] == '3') s_res += s3;
    }
    cout << s_res << endl;
    return 0;
}
