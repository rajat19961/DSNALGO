#include <iostream>
#include <algorithm>
using namespace std;
bool compareFun(pair<int,int> &a, pair<int,int> &b){
    return(a.second < b.second);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<pair<int,int>> distPairs(n);
	    for(int i=0;i<n;i++){
	        cin>>distPairs[i].first;
	    }
	    for(int i=0;i<n;i++){
	        cin>>distPairs[i].second;
	    }	    
        sort(distPairs.begin(),distPairs.begin()+n,compareFun);
        int count = 1;
        pair<int,int> pickedPair = distPairs[0];
        for(int i=1;i<n;i++){
            if(distPairs[i].first>= pickedPair.second){
                count++;
                pickedPair = distPairs[i];
            }
        }
        cout<<count<<endl;

	}
	return 0;
}