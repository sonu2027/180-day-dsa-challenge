/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of row"<<endl;
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}