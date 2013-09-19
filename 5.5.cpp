#include<iostream>
using namespace std;
int fff(int i)
{
	int s;
	if(i==0||i==1)
		s=1;
	else
	s=fff(i-1)*i;
	return s;
}
int main()
{
	int m;
	cout<<"please input m"<<endl;
	cin>>m;
	cout<<"please input n(n<m)"<<endl;
	int n;
	cin>>n;
	cout<<fff(m)/fff(n)*fff(m-n)<<endl;
	return 0;
}