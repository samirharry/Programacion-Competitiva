#include <bits/stdc++.h>
 
#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;
 
typedef long long ll;
typedef long double ld;
using namespace std;
 
int main(){
	int w;
	cin>>w;
	string answ;
	if(w%2==0 && w!=2){
	answ = "YES";
	}else{
	answ = "NO";
	}
	cout<<answ<<endl;
	return 0;
}