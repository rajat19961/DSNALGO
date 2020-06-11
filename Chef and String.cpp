#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string alignment;
        cin>>alignment;
        int currentPtr = 0;
        int numPairs=0;
        while(currentPtr<alignment.size()-1){
            int nextPtr = currentPtr+1;
            if(alignment[currentPtr] != alignment[nextPtr]){
                numPairs++;
                currentPtr=nextPtr+1;
            }
            else{
                currentPtr++;
            }
        }
        cout<<numPairs<<endl;
    }

    return 0;
}
