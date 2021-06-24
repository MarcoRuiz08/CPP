#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        int sizeVector = strs.size();
        cout << sizeVector << endl;
        bool firstTime = true;
        int count = 0;
        
        string st = strs[0];
        cout << st << endl;

        int sizeString = st.size();
        
        
        for(int j = 0; j < sizeString; j++){
            
            for(int i = sizeVector-1; i > 0; i--){
            
                string temp2 = strs[i];
                cout << temp2 << endl;
                if(st[j] == temp2[j]){

                    if( i == 1){

                        ans.push_back(st[j]);
                        cout << ans << endl;
                    }
                }
                else
                    return ans;
            }
        }
        
        return ans;
    } 
};

int main(){

    vector<string> s1 = {"flower", "flow", "flight"};
    vector<string> s2 = {"dog", "racecar", "car"};
    vector<string> s3 ={"flower", "flower", "flower", "flower"};
    vector<string> s4 = {"cir", "car"};
    Solution obj1;

    obj1.longestCommonPrefix(s4);

    return 0;
}