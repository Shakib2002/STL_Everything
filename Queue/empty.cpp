#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    queue<<string>>languages;
    cout<<"Is the queue Empty? ";

    if(languages.empty()){
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
    cout<<"Pushing Elements..."<<endl;
    languages.push("C++");
    languages.push("Python");
    cout<<"Is the queue empty? ";
    if(languages.empty()){
      cout<<"Yes";
    }else{
      cout<<"No";
    }
return 0;
 }