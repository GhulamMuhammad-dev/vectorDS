#include<iostream>
#include<vector>

using namespace std;

 vector<int> reverseArray(vector<int> &arry){
   
vector<int> newArray;
int i=arry.size()-1;
while(i>=0){
    newArray.push_back(arry[i]);
    i--;
}

for(int i=0;i<=arry.size();i++){
    arry[i]=newArray[i];
}



 }




int main(){
   

   vector<int> arry={1,2,3,4,5};
 
 reverseArray(arry);

for(int i:arry){
    cout<<i<<endl;
}
  
 


    return 0;
}