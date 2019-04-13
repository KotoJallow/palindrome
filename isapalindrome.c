#include <stdio.h>

#define truth(a) ((a)?("true"):("false"))

void display(char * s);
bool ispalindrome(char * s,bool flagIgnoreCase=0);
bool ignoreCase(char a,char b);
int size(char * s);

int main()
{
    display("lool");
    display("port");
    display("Develleved");
    return 0;
}

int size(char * s){
    int c = 0;
    while(*s++) c++;
    return c;
}

bool ignoreCase(char a,char b){
    return (a==b) || (a-' '==b) || (b-' '==a);
}

bool ispalindrome(char * s,bool  flagIgnoreCase=0){
    int len = size(s);
    int loop = (len%2) ? len+1 : len;
    loop /= 2;
    for(int i=0,j=len-1;i<loop;i++,j--){
        if(!flag && s[i] != s[j]) return 0;
         if(flag && !ignoreCase(s[i],s[j])) return 0;
    }
    return 1;
}

void display(char * s){
   printf("String: %s\nSize: %d\nispalindrome: %s\nispalindrome(ignoreCase): %s\n",
    s,size(s),truth(p(s)),truth(p(s,1)));  
}
