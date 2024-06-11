class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Trim leading and trailing spaces
        int left = 0, right = s.size() - 1;
        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;

        // Step 2: Reverse the words
        string temp = "";
        string ans = "";

        while (left <= right) {
            char ch = s[left];

            if (ch != ' ') {
                temp += ch;
            } else if (ch == ' ' && temp != "") {
                if (ans != "")
                    ans = temp + " " + ans;
                else
                    ans = temp;
                temp = "";
            }

            left++;
        }

        // Add the last word if temp is not empty
        if (temp != "") {
            if (ans != "")
                ans = temp + " " + ans;
            else
                ans = temp;
        }

        return ans;
    }
};
