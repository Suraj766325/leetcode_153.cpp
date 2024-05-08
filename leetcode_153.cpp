#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={4,6,8,1,2,3};
    int n=v.size(),l=0,r=n-1,mid,high,low,minimum;
    if(n==1)
    minimum=v[0];
    else
    {
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(mid+1==n) high=0;
            else         high=mid+1;
            if(mid-1==-1) low=n-1;
            else          low=mid-1;
            if(v[mid]>v[high] && v[mid]>v[low]) minimum=v[high];
            else if(v[mid]<v[high] && v[mid]<v[low]) minimum=v[mid];
            else if(v[mid]<v[r]) r=low;
            else if(v[mid]>v[r]) l=high; 
        }
    }
    cout<<"minimum = "<<minimum;
}