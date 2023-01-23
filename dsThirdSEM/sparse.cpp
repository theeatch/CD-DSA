#include<bits/stdc++.h>
using namespace std;
 
class sparse {
    public:
    int row;
    int col;
    int val;
};

void read(sparse s[], int a,int b){
    s[0].row=a;
    s[0].col=b;
    int k=1;
    cout<<"enter the elements of the matrix"<<endl;
    for(int i=0;i<a;i++){
        for (int j = 0; j < b; j++)
        {
            int temp;
            cin>>temp;
            if(temp!=0){
                s[k].row=i;
                s[k].col=j;
                s[k].val=temp;
                k++;
            }
        }
    }
    s[0].val=k-1;
}

void Transpose(sparse s[],sparse sT[]){
    sT[0].row=s[0].col;
    sT[0].col=s[0].row;
    sT[0].val=s[0].val;
    int freq[s[0].col]={0};
    for(int i=1;i<s[0].val;i++){
        freq[s[i].col]++;
    }
    int startIndex[s[0].row]={0};
    startIndex[0]=1;
    for(int i=1;i<s[0].val;i++){
        startIndex[i]=freq[i-1]+startIndex[i-1];
    }
    for(int i=1;i<=s[0].val;i++){
        sT[startIndex[s[i].col]].col=s[i].row;
        sT[startIndex[s[i].col]].row=s[i].col;
        sT[startIndex[s[i].col]].val=s[i].val;
        startIndex[s[i].col]++;
    }

}

void display(sparse s[]){
    cout<<"Row\t"<<"Column\t"<<"Value"<<endl;
    for(int i=0;i<=s[0].val;i++){
        cout<<s[i].row<<"\t"<<s[i].col<<"\t"<<s[i].val<<endl;
    }
}



int main(){
    sparse s[100]; 
    sparse sT[100];
    cout<<"enter the rows and columns of the matrix: ";
    int x,y;
    cin>>x>>y;
    read(s,x,y);
    display(s);
    Transpose(s,sT);
    display(sT);
}


