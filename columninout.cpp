#include<iostream>
using namespace std;
int main(){

    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 10};
    

    // diplaying output for the 2D array - arr;
    cout << "row-wise"<<endl;
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


//we need to see here cout properly
    cout << "column-wise"<<endl;
    for (int j = 0; j < 4;j++){
        for (int i = 0; i < 4; i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



return 0;
}