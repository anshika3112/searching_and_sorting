#include <iostream>
using namespace  std;
int found(int arr[],int n,int k)
{
  int s=0;
  int e=n-1;
  int mid=(s+(e-s))/2;
  int ans=-1;
  while(s<=e)
    {
      if(arr[mid]==k)
      {
        // for first
        ans=mid;
        e=mid-1;
        // for last occurance
        ans=mid;
        s=mid+1;
      }
      else if(arr[mid]>k)
        e=mid-1;
      else
        s=mid+1;
      mid=(s+e)/2;
    }
  return ans;
}
int main()
{
  int n,k;
  cin>>n;
  int arr[10];
  cin>>k;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int a=found(arr,n,k);
  if(a== -1)
    cout<<"not found";
  else
  cout<<"first ocuurance="<<a;
  return 0;
}
