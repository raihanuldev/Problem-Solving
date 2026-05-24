class Solution {
public:
    bool isPalindrome(string s) {
        string new_s;
        for(int i=0; i<s.size();i++)
        {
            if(isalnum(s[i])){
                char lowercase = towlower(s[i]);
                new_s.push_back(lowercase);
            }
        }
        string converted = new_s;
        reverse(converted.begin(),converted.end());
        return new_s == converted;
    }

    //apporching thinks
    /**
    * at frist localVaribale Initalise new_s;
    
    * traverse of "S"
        if(s[i] within charc then covert it lowercase and push at new_s)


    * now check forward to backword is it equal or NOT.
    *
    *
    *
    *
    *
    */
};