#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int>&temp){
  for(int i=1;i<=temp.size();i++){
    for(int j=0;j<temp.size()-i;j++){
      if(temp[i]>temp[i+1]){
        swap(temp[i],temp[i+1]);
      }
    }
  }
  return;

}
int main(){
  vector<int>arr;
  bubble(arr);
  return;
}