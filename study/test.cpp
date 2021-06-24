#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        bool palin = true;
        bool flagTen = false;
        if(x < 0)
        {
            palin = false;
            return palin;
        }
        
        int ans = 0;
        int temp = x;
        
        while(temp != 0){
            
            if(temp%10 == 0 && temp >= 10){
                ans = ans * 10;
                flagTen = true;
            }else{
                ans = temp%10 + ans;
            }
            
            if(temp > 10 && !flagTen)
            {
                ans = ans * 10;
            }
            else{
                ans = ans;
            }
            temp = temp/10;
            cout << ans << " "  << temp << endl;
        }
        

        cout << ans << " " << x << endl;

        if(x == ans){
            palin = true;
            cout << palin;
            return palin;
        }
        else{
            palin = false;
            cout << palin;
            return palin;
        }
        
       // return palin;
    }
};
int main(){

    Solution s1;
    s1.isPalindrome(88888);

    return 0;
}