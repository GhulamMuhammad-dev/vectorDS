#include<iostream>
#include<vector>

using namespace std;

int main(){
   
   vector<int> firstVec={1,2,3,4,5};
   
    
    for(int i:firstVec){
        cout<<i<<endl;
    }
   cout<<endl;
    firstVec.push_back(10);

    for(int i:firstVec){
        cout<<i<<endl;
    }

cout<<endl;

cout<<firstVec.capacity()<<endl;

firstVec.pop_back();

for(int i:firstVec){
    cout<<i<<endl;
}


// linear search with vectors

vector<string> fruits={"apple","mango","banana","pineapple","orange"} ;

string target="coconut";

for(string i:fruits){

    if(i==target){
        cout<<"Your fruit is found"<<endl;
        break;
    }
    

}

    return 0;
}