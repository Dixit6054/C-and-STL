#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;
void display(vector<int> v)
{
	vector<int>::iterator it;
	for(it=v.begin(); it< v.end(); ++it)
		cout << *it << " ";
	cout<<endl;
	
}
int main()
{
	vector<int> v;
	v.push_back(12);
	v.push_back(21);
	v.push_back(1);
	display(v);//12 21 1
	vector<int>::iterator it=v.begin()+1;
	//Now the uses of insert function
	v.insert(it,9);//12 9 21 1
	display(v);
	//cout << *it;
	//second use
	//v.insert(v.begin(),2,88);
	v.insert(it,2,88);
	display(v);
	//cout << *it; does not point anywhere
	//third use
	vector<int> v1(10,5);
	display(v1);
	//it = v.end()-4;
	vector<int>::iterator i1=v1.begin()+2,i2=v1.end()-3;
	v.insert(v.begin(),i1,i2);
	display(v);
	//cout << *it;
	//Now we move on to erase()
	//erase first
	it = v.end()-4;
	//cout << *it;
	v.erase(it);
	display(v);
	//cout << *it;
	//second way
	v.erase( v.begin()+3 , v.end()-2);
	display(v);
	//changing value with help of iterator
	it = v.end()-1;
	*i
	t = 111;
	display(v);
}

