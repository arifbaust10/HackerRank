#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> one;
    string studentName;
    int marks;
    int qun,chose;
    cin>>qun;
    for(int i=0;i<qun;i++){
        cin>>chose;
        if(chose==1){
        cin>>studentName;
        cin>>marks;
        map<string,int> :: iterator it=one.find(studentName);
        if(it==one.end()){
             one[studentName]=marks;
        }else
        it->second+=marks;

    }else if(chose==2){
        cin>>studentName;
        one.erase(studentName);
    }else if(chose==3){
        cin>>studentName;
        map<string,int> :: iterator it=one.find(studentName);
        if(it==one.end()){
            cout<<"0"<<endl;
        }else{
            cout<<it->second<<endl;
        }
    }
    }
}