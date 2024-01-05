#include <iostream>
using namespace  std;
int first_found(int arr[],int n,int k)
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
      }
      else if(arr[mid]>k)
        e=mid-1;
      else
        s=mid+1;
      mid=(s+e)/2;
    }
  return ans;
}
int last_found(int arr[],int n,int k)
{
  int s=0;
  int e=n-1;
  int mid=(s+(e-s))/2;
  int ans=-1;
  while(s<=e)
    {
      if(arr[mid]==k)
      {
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
  int last= last_found(arr,n,k);
    int first= first_found(arr,n,k);
  int total=(last-first)+1;
  if(a== -1)
    cout<<"not found";
  else
  cout<<"total ocuurance="<< total;
  return 0;
}
