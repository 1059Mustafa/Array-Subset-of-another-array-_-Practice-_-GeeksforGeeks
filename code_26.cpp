#include<bits/stdc++.h>
#include <iostream>
using namespace std;

string find(int a[],int b[],int n,int m)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(s.find(b[i])==s.end())
        {
            return "No";
        }
    }
    return "Yes";
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2;
	    cin>>n1>>n2;
	    int arr1[n1],arr2[n2];
	    for(int i=0;i<n1;i++)
	    {
	        cin>>arr1[i];
	    }
	    for(int i=0;i<n2;i++)
	    {
	        cin>>arr2[i];
	    }
	    cout<<find(arr1,arr2,n1,n2)<<endl;
	}
	return 0;
}
