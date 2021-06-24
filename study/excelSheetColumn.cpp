
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        int count = 0;
        int aux = 0;
        int aux2 = 0;
        
        string ans = "";
        string resu = "";
        char abc[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
                      'H', 'I', 'J', 'K', 'L', 'M', 'N',
                      'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                      'V', 'W', 'X', 'Y', 'Z'};

        while(columnNumber != 0){

            aux = columnNumber%26;
            ans.push_back(abc[aux]);
            columnNumber = columnNumber/26;
        }

        for(int i = 0; i < ans.size(); i++){

            resu.push_back(ans[i]);
            

        }

        return resu;
    }
};