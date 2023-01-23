#include <iostream>
using namespace std;

int main(){
    char str1[55],str2[55];
    int i=0,j=0;
    cin>>str1;
    cin>>str2;
    while(str1[i]!='\0'){
        i++;
    } 
    str1[i]=' ';
    i++;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    cout<<str1<<endl;
    return 0;
}
