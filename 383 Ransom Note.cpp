Problem_link: https://leetcode.com/problems/ransom-note/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str;
}
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int p = magazine.size();
        int count=0;
        sortString(ransomNote);
        sortString(magazine);
        int i = 0;
        int j = 0;
        while(j < magazine.size()) {
            if(ransomNote[i] == magazine[j]) {
                count++;
                i++;
                j++;
            }
            else j++;
        }

        if(count==n){
            return true;
        }else{
            return false;
        }
    }
};
