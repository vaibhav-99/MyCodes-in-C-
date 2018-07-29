#include <iostream>

using namespace std;

void bigSorting(int a[],int n) {
    // Complete this function
    int i,ptr,temp;
    for(i=0 ; i<n-1 ; i++)
    {
       for(ptr=0 ; ptr<n-1-i ; ptr++)
       {
         if(a[ptr+1] > a[ptr])
         {
           temp = a[ptr+1];
           a[ptr+1] = a[ptr];
           a[ptr] = temp;
         }
       }
    }
    for(i=0 ; i<n ; i++)
      cout << a[i] << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    bigSorting(arr,n);
    /*for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }*/

   // cout << endl;


    return 0;
}
