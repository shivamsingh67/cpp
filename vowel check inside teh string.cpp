#include<iostream>
#include<string.h>
using namespace std;
int check_vowel(char);
int main()
{
    char s[100], t[100];
    int i, j = 0;
 
    printf("Enter a string to delete vowels\n");
    gets(s);
    
    for(i = 0; s[i] != '\0'; i++) {
        if(check_vowel(s[i]) == 0) {       //not a vowel
            t[j] = s[i];
            j++;
        }
    }
    
    t[j] = '\0';
    
    strcpy(s, t);    //We are changing initial string
    
    printf("String after deleting vowels: %s\n", s);

}


int check_vowel(char *c)
{
   for(int i=0;c[i]!='\0';i++)
   {
   	if(c[i]=='a'|| c[i]=='e' ||c[i]=='i' ||c[i]=='o' || c[i]=='u')
   	return 1;
   
   }
}
