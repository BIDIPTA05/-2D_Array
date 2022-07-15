#include<iostream>
using namespace std;
int main(){

    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 10};
    int arr2[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // diplaying output for the 2D array - arr;
    cout << "diplaying output for the 2D array - arr"<<endl;
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    // diplaying output for the 2D array - arr2; 
    cout << "diplaying output for the 2D array - arr2"<<endl;
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


return 0;
}