#include<iostream>
using namespace std;
//function for linear search - n = row, m=column
bool isPreseent(int arr[][3],int target,int n, int m){
   
       for (int n = 0; n < 4;n++){
        for (int m = 0; m < 3; m++){

            if(arr[n][m]==target){
                return 1;
            }
        }
        
    }
    return 0;
}


int main(){
    int arra[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // diplaying output for the 2D array - arr;
    cout << "diplaying output for the 2D array - arr"<<endl;

    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 3; j++){
            cout << arra[i][j] << " ";
        }
        cout << endl;
    };

if(isPreseent(arra,2,4,3)){
    cout << "ELEMENT FOUND " << endl;
}
else{
    cout << "ELEMENT NOT FOUND"<<endl;    
}


return 0;
}