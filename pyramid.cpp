#include <iostream>

using namespace std;


int main() {
    int rows=0;
    cout<<"Rows of the Pyramid: ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
