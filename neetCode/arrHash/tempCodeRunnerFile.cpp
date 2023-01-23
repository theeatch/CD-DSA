#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    vector<string>strs;
    for(int i=0;i<6;i++){
        string word;
        cin>>word;
        strs.push_back(word);
    }
    map<string,string>anagram;
    for(int i=0;i<strs.size();i++){
        string s1=strs[i];
        sort(s1.begin(),s1.end());
        anagram[s1]=strs[i];
    }   
    auto check = anagram.begin()->first;
    vector<string>pushing;
    vector<vector<string>>ans;
    for(auto s:anagram){
        if(s.first == check){
            pushing.push_back(s.second);
        }
        else{
            ans.push_back(pushing);
            pushing.clear();
            check=s.first;
            pushing.push_back(s.second);
        }
    }
}


