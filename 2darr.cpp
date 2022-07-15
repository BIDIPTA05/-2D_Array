#include<iostream>
using namespace std;
int main(){

    cout << "2d Array: "<<endl;
    //initialising the 2D array- 4 rows and 4 columns
    int arr[4][4];
    // taking input for our 2D array- i = roms; j = columns
    cout << "Enter the values of the 2D Array"<<endl;
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 4;j++){
            cin >> arr[i][j];
        }
    }

    //diplaying output for the 2D array

    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}  