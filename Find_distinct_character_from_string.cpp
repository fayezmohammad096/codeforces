# include <iostream>//use for sort() function
#include<string>//use for string function
#include<algorithm>
using namespace std;//use for printing function
int main(){
	string s;
	cin>>s;
	cout<<"Before :";
	cout<<s<<"\n";
	int count=0,i=0, l= s.length();
	sort(s.begin(),s.end());
	cout<<"After sorting: "<<s<<"\n";
	for(i;i<l;i++){
		if(s[i]!=s[i+1]){
			count++;
		}
	}
	cout<<"Distinct character :"<< count;
	
}
