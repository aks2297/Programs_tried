#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
 
void change(string s) {
	int found,found2;
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	found=s.find(" ");
	if (found!=std::string::npos)
        {cout<<(char)toupper(s[0])<<". ";}
    else
        {cout<<(char)toupper(s[0])<<s.substr(1,s.length());return;}
	found2=s.find(" ",found+1);
	if (found2!=std::string::npos){
	    cout<<(char)toupper(s[found+1])<<". ";
    }
    else {
        cout<<(char)toupper(s[found+1])<<s.substr(found+2,s.length());return;
        
    }
    cout<<(char)toupper(s[found2+1])<<s.substr(found2+2,s.length());
}
int main(){
    int t;
    std::string s;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++){
    std::getline(std::cin,s);
        change(s);
        cout<<"\n";
    }
    return 0;
}
 
