/*Problem- First Unique character in string*/
/*Approach-2 using array 
T.C->O(n)
S.C->O(n)*/
// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int count[26];
//         int n=s.size();
//         for(int i=0;i<n;i++)
//         {
//             int ind=s[i]-'a';
//             count[ind]++;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(count[s[i]-'a'] == 1)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };


/*Approach-1 using unordered maps
T.C->O(n)
S.C->O(n)
*/
// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int n=s.size();
//         unordered_map<char,int>mp(26);
//         for(int i=0;i<n;i++)
//         {
//             mp[s[i]]++;
//         }
//         for(int j=0;j<n;j++)
//         {
//             if(mp[s[j]] == 1)
//             {
//                 return j;
//             }
//         }
//         return -1;
//     }
// };