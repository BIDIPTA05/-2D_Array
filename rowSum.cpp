#include<iostream>
using namespace std;
//printing row sum.
void sum(int arr[][4], int n, int m){
    
    cout << "Printing the Sum: "<<endl;
  
    for (int n = 0; n < 4; n++)
    {
          int sum = 0;
        for (int m = 0; m < 4;m++){
            sum += arr[n][m];
        }
        cout << "The sum is = " << sum<<endl;
    }
}

int main(){

    cout << "2d Array: "<<endl;
    //initialising the 2D array- 4 rows and 4 columns
    int arr[4][4];
    int i, j;
    // taking input for our 2D array- i = roms; j = columns
    cout << "Enter the values of the 2D Array"<<endl;
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 4;j++){
            cin >> arr[i][j];
        }
    }

    //diplaying output for the 2D array
    cout << "The elements of the arrray are "<<endl;
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    sum(arr,i,j);

    return 0;
}  