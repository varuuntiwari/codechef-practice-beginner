#include <iostream>
#include <string>
using namespace std;

int main() {
	int i, t;
	string r1, r2;
	int min, max;
	cin>>t;
	while(t-- > 0) {
	  min = 0, max = 0;
	  cin>>r1>>r2;
	  if (r1.length() < 1 || r1.length() > 100) {
	    cout<<0<<" "<<0<<endl;
	    continue;
	  }
    for(i = 0;i < r1.length();i++) {
      if(r1[i] != r2[i] && r1[i] != '?' && r2[i] != '?') {
        min++; max++;
	    } else if(r1[i] == '?' && r2[i] == '?') {
	      max++;
	    } else if(r1[i] == '?' || r2[i] == '?') {
	      max++;
	    }
	  }
	  cout<<min<<" "<<max<<endl;
	}
	return 0;
}