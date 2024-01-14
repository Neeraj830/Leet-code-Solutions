class Solution {
public:
    int minSteps(string s, string t) {

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(s[i]==t[j]){
        //             count++;
        //             t[j]='$';
        //             break;
        //         }
        //     }
        // }
        int n=s.length();
        int count=0;

        for(int i=0;i<n;i++){
            unsigned int k = t.find(s[i]);
            if(k<n){
                count++;
                t[k]='$';
            }
        }
        return n-count;
    }
};


// class Solution {
// public:
//     int minSteps(string s, string t) {
//         int count[26] = {0};
//         int i = 0;

        
//         while (i < s.size()) {
//             count[t[i] - 'a']++;
//             count[s[i] - 'a']--;
//             i++;
//         }

//         int ans = 0;
//         i = 0;

//         while (i < 26) {
//             ans += max(0, count[i]);
//             i++;
//         }

//         return ans;
//     }
// }; 


