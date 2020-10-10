// https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string str) {
        
        if(str.empty())
            return 0;
        
        int n=str.size(),r=0;
        bool flag=false,neg=false;
        string s;
        
        for(int i=0;i<n;i++)
        {
            if(str[i]==' ' && !flag)
                continue;
            else
                if(!flag && !(str[i]>=48 && str[i]<=57))
                {
                    if(str[i]=='-')
                        neg=true;
                    else
                        if(str[i]!='+')
                        {
                            break;
                        }  
                    flag=true;
                }
            else
                if(flag && !(str[i]>=48 && str[i]<=57))
                {
                    break;
                }
            else
            {
                flag=true;
                
                if(s.empty() && str[i]==48)
                    continue;
                
                s.push_back(str[i]);
            }
        }
        
        string min="2147483648",max="2147483647";
        
        cout<<s;
        
        if(neg && (s.size()>10 || (s.size()==10 && s.compare(min)>=0)))
            return INT_MIN;

        if(!neg && (s.size()>10 || (s.size()==10 && s.compare(max)>=0)))
            return INT_MAX;
            
        for(int i=0;i<s.size();i++)
            r=r*10+(s[i]-48);
        
        if(neg)
            return -r;
        
        return r;
    }
};