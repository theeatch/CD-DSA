/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    char prev=' ';
    int64_t count=0,best=0;
    for (auto c: input)
    {
        if(c==prev){
            count++;
            best=max(count,best);
        }
        else{
            count=0;
            prev=c;
        }
    }
    cout<<best+1;
    
}