#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s="";
    s1="123";
    s2="4321";
    reverse(s1.begin(), s1.end()); //321
    reverse(s2.begin(), s2.end()); //1234
    cout<<s1[0]-48+s2[0]-48<<endl;
    s+=char((s1[0]-48+s2[0]-48)+48);
    //reverse(s.begin(),s2.end());
    cout<<s;
}
