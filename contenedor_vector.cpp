#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(8);
	v.push_back(2);
	v.push_back(3);
	cout<<"Pos 0: "<< v[0] <<endl;
	cout<<"Pos 3: "<< v[3] <<endl;
	
	cout<<"Tama"<<char(164)<<"o de v: "<<v.size() <<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<"Pos "<<i<<": "<<v[i]<<endl;
	}
	v.pop_back();
	cout<<"tama"<<char(164)<<"o de v: "<<v.size()<<endl;
}
