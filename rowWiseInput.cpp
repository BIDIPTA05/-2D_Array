#include<iostream>
using namespace std;
int main(){


    int arr[4][3] = {{1,2,3},{5,7,9},{12,15,19},{50,80,90}};
  

    // diplaying output for the 2D array - arr;
    cout << "diplaying output for the 2D array - arr"<<endl;

    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }







return 0;
}