class Solution {
public:
    char findTheDifference(string s, string t) {
        string temp = t;
        for(int i=0; i<s.size(); i++) {
            temp.erase(find(temp.begin(), temp.end(), s[i]));
        }
        cout << temp[0] << endl;
        return temp[0];
    }
};