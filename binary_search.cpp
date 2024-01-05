#include <iostream>
using namespace  std;
int binary(int arr[],int n,int k)
{
  int s=0;
  int e=n-1;
  int mid=(s+e)/2;
  while(s<=e)
    {
      if(arr[mid]==k)
        return mid;
      else if(arr[mid]>k)
        e=mid-1;
      else
        s=mid+1;
      mid=(s+e)/2;
    }
  return -1 ;
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
  int ans=binary(arr,n,k);
  if(ans== -1)
    cout<<"not found";
  else
  cout<<"element found "<<ans;
  return 0;
}
