class Solution {
public:
    string removeStars(string s) {
        
        int remains =0;
        string str= "";
        int i=s.size()-1;
        while(i>=0)
        {
            
            if(s[i]=='*')
            {
                remains++;
                i--;
            }
            else if(s[i]!='*' && remains==0)
            {
                str+=s[i];
                i--;
            }
            
            else if(s[i]!='*' && remains>0)
            {
                i--;
                remains--;
            }
            
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
