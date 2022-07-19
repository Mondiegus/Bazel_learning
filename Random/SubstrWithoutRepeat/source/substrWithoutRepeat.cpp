// Given a string s, find the length of the longest substring without repeating characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

// Constraints:

// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.

#include <substrWithoutRepeat.h>
#include <iostream>

int Solution::lengthOfLongestSubstring(string s)
{
    int strLen = s.length();
    int maxLen = 0;

    if (strLen < 2)
        maxLen = strLen;
    else
    {
        string substr = "";
        int currLen = 0;

        for (int j = 0; j < strLen; j++)
        {
            substr = s[0];
            currLen = 1;
            for (int i = 1; i < s.length(); i++)
            {
                if (substr.find(s[i]) != std::string::npos)
                {
                    break;
                }
                else
                {
                    currLen++;
                    substr = substr + s[i];
                }
            }
            if (currLen > maxLen)
            {
                maxLen = currLen;
            }
            s.erase(0, 1);
            if (maxLen > s.length())
                break;
        }
    }
    return maxLen;
}