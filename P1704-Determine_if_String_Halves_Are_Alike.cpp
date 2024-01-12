class Solution {
public:
    bool halvesAreAlike(string s) {
        int h=((s.size()-1)/2);
        int c1=0,c2=0;
        for(int i=0;i<=h;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                c1++;
            }
        }
        for(int i=h+1;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                c2++;
            }
        }

        if(c1==c2){
            return true;
        }
        else{
            return false;
        }
        
    }
};