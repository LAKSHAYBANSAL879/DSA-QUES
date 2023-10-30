#include<bits/stdc++.h>
using namespace std;
// reverse string
void reverseString(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
         }

}
// find length of string
int getLength(char ch[]){
    int count=0;
    for (int i = 0;ch[i]!='\0'; i++)
    {
       count++;
    }
   return count; 
}
// check palindrome
// palindrome means that from front and back both is same
#include <bits/stdc++.h> 
bool isAlphanumeric(char c) {
    return isalnum(c);
}

bool checkPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;
    
    while (start < end) {
        while (start < end && !isAlphanumeric(s[start])) {
            start++;
        }
        
        while (start < end && !isAlphanumeric(s[end])) {
            end--;
        }
        
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        
        start++;
        end--;
    }
    
    return true;
}
// replace spaces
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	string temp="";
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			temp.push_back('@');
		temp.push_back('4');
			temp.push_back('0');

		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}
// remove some part from string

    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }

int main(){
    char ch[20];
    cin>>ch;
    int len=getLength(ch);
    cout<<"your name is :"<<ch<<endl;
    cout<<"lenth of name is :"<<len<<endl;
    reverseString(ch,len);
    cout<<"reversed name is :"<<ch<<endl;
}