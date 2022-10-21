/*#include<iostream>
using namespace std;

int main(){
    int arr[5],n,i,sum=0;
    cout<<"size : ";
    cin>>n;
    cout<<"enter the elements of the array ";
    for ( i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    for ( i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<"the sum of the array is "<<sum<<endl;
return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int size, i;
    int sum = 0;
    int arr[5] = {size};
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= size; i++)
    {

        sum += arr[i];
    }
    cout << "the sum is " << sum << endl;
    return 0;
}*/

#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int evenindex = binarysearch(even, 6, 6);
    cout << "index of 6 is " << evenindex << endl;
    int oddindex = binarysearch(odd, 5, 14);
    cout << "index of 14 is " << oddindex << endl;
    return 0;
}