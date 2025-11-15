#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int max_count=1,current_count=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){  
            current_count++;
            if(current_count>max_count){
                max_count=current_count;
            }
        }
        else{
            current_count=1;
        }
    }
    cout<<max_count<<endl;
    return 0;
}