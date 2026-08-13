#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;
int main()
{
    int arr[] = {5, 3, 1, 4, 2};
    int n = 5;
    //  for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";  //5 3 1 4 2
    //  }
    for (int ele : arr)
    {
        cout << ele << " "; // 5 3 1 4 2  also give samme result
    }
    cout << endl;
    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        // minimum element calculate in orenge(1st) box
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}
// 5 3 1 4 2
// 1 2 3 4 5
// 5 3 1 4 2
// 1 2 3 4 5