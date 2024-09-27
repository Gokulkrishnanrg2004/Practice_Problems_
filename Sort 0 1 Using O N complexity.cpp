#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,0,0,1,1,0};
    int left = 0;
    int right = arr.size()-1;
    while(left<=right)
    {
        if(arr[left]>arr[right])
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]==0)
        {
            left++;
        }
        else 
        {
            right--;
        }
    }
    for(int i=0;i<arr.size()-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
