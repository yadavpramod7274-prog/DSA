#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int arr[10] = {5, 4, 8, 9, 1, 3, 4, 6, 1, 2};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    int n=10;
    // for(int i=0;i<n-1;i++){ // n-1 passes
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){ //swap
    //             // int temp=arr[i];
    //             // arr[j]=arr[j+1];
    //             // arr[j+1]=temp;

    //             swap(arr[j],arr[j+1]); // cpp me in build fun hai
    //         }

    //         }
    //     }
    //     cout<<endl;
    //         for(int i=0;i<10;i++){
    // cout<<arr[i]<<" ";
    //     }

    // bubble sort optimized

    for (int i = 0; i < n - 1; i++)
    { // n-1 passes

        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            { // swap

                swap(arr[j], arr[j + 1]); // cpp me in build fun hai
                flag = false;
            }
        }
        if (flag == true)
        {
            // swap did not happen
            break;
        }
    }

    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}

//     5 4 8 9 1 3 4 6 1 2
// 1 1 2 3 4 4 5 6 8 9

// 5 4 8 9 1 3 4 6 1 2 
// 1 1 2 3 4 4 5 6 8 9 