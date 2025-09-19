class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        };

        long int temp=x;
        long int r=0;
        while(temp!=0){
            int d=temp%10;
            r=r*10+d;
            temp/=10;
            
        };
        if(x==r){
            return true;

        }
        else{
            return false;
        }


        
    }
};