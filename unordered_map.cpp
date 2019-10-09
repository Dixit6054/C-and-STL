#include<iostream>
#include<bits/stdc++.h>
//#include<unordered_map>
using namespace std;
void display(unordered_map<string, vector<string> >& M)
{
    for(auto it=M.begin(); it!=M.end(); ++it)
    {
        cout << it->first << " --> ";
        for(auto iv=(it->second).begin();iv!=(it->second).end(); ++iv)
            cout << *iv <<" ";
        cout << endl;
    }
    cout <<endl;
}
int main()
{
	unordered_map<string, vector<string> > m;
	vector<string> v = {"loves","hot","girls"};
	m.insert(make_pair("Dixit",v));
	m["Charul"].push_back("likes");
	m["Charul"].push_back("Dixit");
	m["Mr. X"].push_back("boys");
	vector<string>v1(v.begin()+1,v.end());
	m.insert(make_pair("Stupid",v1));
	display(m);
	auto i = m.find("Charul");
	//m.erase(i);
	//display(m);
	for(int k=0;k<(i->second).size();k++)
	cout << (i->second)[k] <<" ";
	
	
}
