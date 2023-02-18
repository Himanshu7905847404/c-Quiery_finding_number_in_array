#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"\n\tEnter the size of array\n";
    cin>>n;
    cout<<"\n\tEnter the elements\n";
    for(int i = 0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<"\n\n\tEntered array is: \n";
    for(int a : v){
        cout<<a<<" ";
    }
    const int N = 1e5 + 10;
    vector<int>frearr(N,0);// in this array declared all value are 0 upto size 1e5 + 10
    for(int i = 0 ; i < v.size() ; i++){
        frearr[v[i]]++;// here i add +1 on the position of v[i] , v[i] take as a index of frearr 
    }
    cout<<"\n\tEnter How many Quiery you want\n";
    int q;
    cin>>q;
    for(int i = 0 ; i < q ; i++){
        cout<<"\n\tEnter your Quiery to find your number is present in the array or not:\n";
        int quiery;
        cin>> quiery;
        bool bool1=frearr[quiery];
        if(bool1){
            cout<<"\n\t\tYes this number is present in the array\n";
        }
        else{
            cout<<"\n\t\tSorry,this number is not  present in the array\n";
        }
    }
    return 0;
}
