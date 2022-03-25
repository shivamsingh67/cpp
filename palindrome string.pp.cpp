#include <iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[20];
    int i, length;
    int flag = 1;
    
    cout << "Enter a string: "; cin >> s1;
    
    length = strlen(s1);
    
    for(i=0;i < length ;i++){
        if(s1[i] != s1[length-i]){
            flag = 0;
            break;
   }
}
  if (flag) {
        cout << s1 << " is a palindrome" << endl; 
    }    
    else {
        cout << s1 << " is a not palindrome" << endl; 
    }
    return 0;
}

