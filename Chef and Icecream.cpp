#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> custMoney(n);
	    vector<int> fives;
	    vector<int> tens;
	    vector<int> fifteens;
	    for(int i=0;i<n;i++){
	        cin>>custMoney[i];
	    }
	    bool cantSell = false;
	    for(int i=0;i<n;i++){
	        if(custMoney[i] == 5){
	            fives.push_back(5);
	        }
	        if(custMoney[i] == 10){
	            if(!fives.empty()){
	                tens.push_back(10);
	                fives.pop_back();
	            }
	            else{
	                cantSell = true;
	                break;
	            }
	        }
	        if(custMoney[i] == 15){
	            if(!tens.empty()){
	                fifteens.push_back(15);
	                tens.pop_back();
	            }
	            else if(fives.size()>=2){
	                fifteens.push_back(15);
	                fives.pop_back();
	                fives.pop_back();
	            }
	            else{
	                cantSell = true;
	                break;
	            }
	        }
	    }
	    if(cantSell){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}