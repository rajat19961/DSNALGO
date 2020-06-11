#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int initSum = 0;
	    int ar[n];
	    for(int i=0;i<n;i++){
	        cin>>ar[i];
	        initSum+=ar[i];
	    }
	    int afterSum = 0;
	    for(int i=0;i<n;i++){
	        if(ar[i]>k){
	            ar[i]=k;
	        }
	        afterSum+=ar[i];
	    }
	    cout<<initSum-afterSum<<endl;
	}
	return 0;
}