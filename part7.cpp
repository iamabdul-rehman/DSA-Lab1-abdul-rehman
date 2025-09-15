#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(int arr[],int n,int key){
vector<int> ans;
for(int i=0;i<n;i++){
    if(arr[i]==key){
ans.push_back(i);
}
}
return ans;
}
int main(){
cout<<"Test 1"<<endl;
int a1[]={6,7,8,9,4,5,8,5};
int s1=sizeof(a1)/sizeof(a1[0]);
vector<int> r1=findIndices(a1,s1,8);
cout<<"Indices of 8: ";
if(r1.empty()){
    cout<<"none";
}
else{
for(int i=0;i<r1.size();i++){
    cout<<r1[i]<<" ";
}
}
cout<<endl;

cout<<"Test 2"<<endl;
int a2[]={3,6,8,4,5};
int s2=sizeof(a2)/sizeof(a2[0]);
vector<int> r2=findIndices(a2,s2,9);
cout<<"Indices of 9: ";
if(r2.empty()){
cout<<"none";
}
else{
for(int i=0;i<r2.size();i++){
    cout<<r2[i]<<" ";
}
}
cout<<endl;

cout<<"Test 3"<<endl;
int a3[]={};
int s3=sizeof(a3)/sizeof(a3[0]);
vector<int> r3=findIndices(a3,s3,3);
cout<<"Indices of 3: ";
if(r3.empty()){
    cout<<"none";
}
else{
for(int i=0;i<r3.size();i++){
    cout<<r3[i]<<" ";
}
}
cout<<endl;
return 0;
}
