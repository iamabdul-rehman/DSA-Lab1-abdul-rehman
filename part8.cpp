#include <iostream>
#include <string>
using namespace std;

int findPattern(string text,string pat){
if(pat=="" ) return -1;
int n=text.size();
int m=pat.size();
for(int i=0;i<=n-m;i++){
    int j=0;
    while(j<m && text[i+j]==pat[j]){
         j++;
    }
    if(j==m) return i;
}
    return -1;
}

int main(){
cout<<"Test 1"<<endl;
string t1="hello world";
string p1="hello";
cout<<"Result: "<<findPattern(t1,p1)<<endl;

cout<<"Test 2"<<endl;
string t2="this is a test";
string p2="test";
cout<<"Result: "<<findPattern(t2,p2)<<endl;

cout<<"Test 3"<<endl;
string t3="abcdef";
string p3="gh";
cout<<"Result: "<<findPattern(t3,p3)<<endl;

cout<<"Test 4"<<endl;
string t4="sample";
string p4="";
cout<<"Result: "<<findPattern(t4,p4)<<endl;

return 0;
}
