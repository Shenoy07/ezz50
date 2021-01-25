

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{

int n,c,s,r;

cin>>n>>c;
int a[n];
int sum = 0;
for(int i=0;i<n;i++)
{
	cin>>a[i];
	sum += a[i];
}

sort(a,a+n);

s = sum/c;

r= sum%c;

if(r>=a[0])
{
	cout<<-1<<endl;
}
else
{
cout<<s<<endl;
}
}
return 0;
}
