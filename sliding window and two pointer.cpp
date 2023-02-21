Length of the longest substring
MediumAccuracy: 27.88%Submissions: 78K+Points: 4
Lamp
Don't Get Left Behind in the Rapidly Growing Data Science Industry. Try this course!

Given a string S, find the length of the longest substring without repeating characters.


Example 1:

Input:
S = "geeksforgeeks"
Output:
7
Explanation:
Longest substring is
"eksforg".
Example 2:

Input:
S = "abdefgabef"
Output:
6
Explanation:
Longest substring are
"abdefg" , "bdefga" and "defgab".
 

Your Task:
You don't need to take input or print anything. Your task is to complete the function longestUniqueSubsttr() which takes a string S as and returns the length of the longest substring.

 

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(K) where K is constant.


Constraints:
1 ≤ |S| ≤ 105
It is guaranteed that all characters of the String S will be lowercase letters from 'a' to 'z'
code:
int longestUniqueSubsttr(string S){
        //code
        int arr[256]={0};
        int i=0,j=0;
        int ans=0;
        while(j<S.size()){
            arr[S[j]]++;
            while(arr[S[j]]>1){
                arr[S[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
=>1004. Max Consecutive Ones III
Medium
5.9K
69
Companies
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.
0 <= k <= nums.length
code:
 int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int ans=0;
        int count=0;
        while(i<n){
        if(nums[i]==0)
           count++;
           while(count>k){
               if(nums[j]==0)
               count--;
               j++;
           }
         
           ans=max(ans,i-j+1);
           i++;
        }
        return ans;
    }
=>904. Fruit Into Baskets
Medium
3.7K
265
Companies
You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.

You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
Given the integer array fruits, return the maximum number of fruits you can pick.

 

Example 1:

Input: fruits = [1,2,1]
Output: 3
Explanation: We can pick from all 3 trees.
Example 2:

Input: fruits = [0,1,2,2]
Output: 3
Explanation: We can pick from trees [1,2,2].
If we had started at the first tree, we would only pick from trees [0,1].
Example 3:

Input: fruits = [1,2,3,2,2]
Output: 4
Explanation: We can pick from trees [2,3,2,2].
If we had started at the first tree, we would only pick from trees [1,2].
 

Constraints:

1 <= fruits.length <= 105
0 <= fruits[i] < fruits.length
code:
int totalFruit(vector<int>& fruits) {
        int i=0,j=0;
        int n=fruits.size();
        int ans=0;
        unordered_map<int,int>mp;
        while(i<n){
            mp[fruits[i]]++;
            while(mp.size()>2){
               if(mp[fruits[j]]==1) 
               mp.erase(fruits[j]);
               else{
                   mp[fruits[j]]--;
               }
               j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;

    }
=>424. Longest Repeating Character Replacement

You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

 

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
code:
    int characterReplacement(string s, int k) {
          int i=0,j=0,ans=0,cnt[26]={};
       
       for(i=0;i<s.size();i++){
           cnt[s[i]-'A']++;
           while(i-j+1-*max_element(cnt,cnt+26)>k){
               cnt[s[j]-'A']--;
               j++;
           }
           ans=max(ans,i-j+1);
         
       }
       return ans;
        
    }
=>930. Binary Subarrays With Sum
Medium
1.9K
61
Companies
Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
Example 2:

Input: nums = [0,0,0,0,0], goal = 0
Output: 15
 

Constraints:

1 <= nums.length <= 3 * 104
nums[i] is either 0 or 1.
0 <= goal <= nums.length
code 1:
int numSubarraysWithSum(vector<int>& nums, int goal) {
     
        unordered_map<int,int>mp;
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==goal)
            ans++;
            if(mp.find(sum-goal)!=mp.end())
               ans+=mp[sum-goal];
               mp[sum]++;
        }
        return ans;
    }
=>1248. Count Number of Nice Subarrays
Medium
2.6K
56
Companies
Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

Return the number of nice sub-arrays.

 

Example 1:

Input: nums = [1,1,2,1,1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
Example 2:

Input: nums = [2,4,6], k = 1
Output: 0
Explanation: There is no odd numbers in the array.
Example 3:

Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
Output: 16
code 1: int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0)
            nums[i]=1;
            else
            nums[i]=0;

        }
        int sum=0;
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k)
             ans++;
             if(mp.find(sum-k)!=mp.end())
              ans+=mp[sum-k];
              mp[sum]++;
        }
        return ans;
    }
code2:
unordered_map<int,int>mp;
       int j=0,ans=0,sum=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]%2!=0)
            sum++;
            if(sum==k)
            ans++;
            if(mp.find(sum-k)!=mp.end())
             ans+=mp[sum-k];
             mp[sum]++;
       }
       return ans;
    }
=>1358. Number of Substrings Containing All Three Characters
Medium
2.2K
37
Companies
Given a string s consisting only of characters a, b and c.

Return the number of substrings containing at least one occurrence of all these characters a, b and c.

 

Example 1:

Input: s = "abcabc"
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
Example 2:

Input: s = "aaacb"
Output: 3
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 
Example 3:

Input: s = "abc"
Output: 1
code1:
 int numberOfSubstrings(string s) {
      int j=0;
      int ans=0;
      vector<int>arr(3,0);
      for(int i=0;i<s.size();i++){
          arr[s[i]-'a']++;
          while(arr[0]>0&&arr[1]>0&&arr[2]>0&&j<=i){
              arr[s[j]-'a']--;
              ans+=(s.length()-i);
              j++;
          }

      }
      return ans;
    }
=>1423. Maximum Points You Can Obtain from Cards
Medium
5.1K
185
Companies
There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.

In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.

Your score is the sum of the points of the cards you have taken.

Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

 

Example 1:

Input: cardPoints = [1,2,3,4,5,6,1], k = 3
Output: 12
Explanation: After the first step, your score will always be 1. However, choosing the rightmost card first will maximize your total score. The optimal strategy is to take the three cards on the right, giving a final score of 1 + 6 + 5 = 12.
Example 2:

Input: cardPoints = [2,2,2], k = 2
Output: 4
Explanation: Regardless of which two cards you take, your score will always be 4.
Example 3:

Input: cardPoints = [9,7,7,9,7,7,9], k = 7
Output: 55
Explanation: You have to take all the cards. Your score is the sum of points of all cards.

code:
    int maxScore(vector<int>& cardPoints, int k) {
        int i=0,j=cardPoints.size()-1;
        int n=cardPoints.size();
      int sum=0,ans=0;
      for(;i<k;i++){
          sum+=cardPoints[i];
      }
      ans=sum;
      if(k==n)
      return ans;
      i--;
      while(i>=0){
          sum-=cardPoints[i--];
          sum+=cardPoints[j--];
          ans=max(ans,sum);
      }
      return ans;
    }  


=>Longest K unique characters substring
MediumAccuracy: 34.65%Submissions: 67K+Points: 4
Lamp
Don't Get Left Behind in the Rapidly Growing Data Science Industry. Try this course!

Given a string you need to print the size of the longest possible substring that has exactly K unique characters. If there is no possible substring then print -1.


Example 1:

Input:
S = "aabacbebebe", K = 3
Output: 7
Explanation: "cbebebe" is the longest 
substring with K distinct characters.
Example 2:

Input: 
S = "aaaa", K = 2
Output: -1
Explanation: There's no substring with K
distinct characters.

Your Task:
You don't need to read input or print anything. Your task is to complete the function longestKSubstr() which takes the string S and an integer K as input and returns the length of the longest substring with exactly K distinct characters. If there is no substring with exactly K distinct characters then return -1.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(|S|).


Constraints:
1 ≤ |S| ≤ 105
1 ≤ K ≤ 105
code 1:
int longestKSubstr(string s, int k) {
        unordered_map<char,int>mp;
    // your code here
    int i=0,n=s.size();
    int j=0;
    int ans=-1;
    while(i<n){
       mp[s[i]]++;
       if(mp.size()==k)
       ans=max(ans,i-j+1);
       while(mp.size()>k&&j<=i){
           if(mp[s[j]]==1)
           mp.erase(s[j]);
           else
           mp[s[j]]--;
           j++;
       }
       i++;
       
    }
    return ans;
    }
=>Smallest window in a string containing all the characters of another string
HardAccuracy: 30.19%Submissions: 99K+Points: 8
Lamp
Don't Get Left Behind in the Rapidly Growing Data Science Industry. Try this course!

Given two strings S and P. Find the smallest window in the string S consisting of all the characters(including duplicates) of the string P.  Return "-1" in case there is no such window present. In case there are multiple such windows of same length, return the one with the least starting index. 

Example 1:

Input:
S = "timetopractice"
P = "toc"
Output: 
toprac
Explanation: "toprac" is the smallest
substring in which "toc" can be found.
Example 2:

Input:
S = "zoomlazapzo"
P = "oza"
Output: 
apzo
Explanation: "apzo" is the smallest 
substring in which "oza" can be found.

code: string smallestWindow (string s, string p)
    {
        // Your code here
        int n=p.size();
        int m=s.size();
        int count=0;
        int ans=INT_MAX;
        int start=0;
        char mp[256]={0};
        for(int i=0;i<n;i++){
            if(mp[p[i]]==0)
            count++;
            mp[p[i]]++;
        }
        int j=0;
        for(int i=0;i<m;i++){
            mp[s[i]]--;
            if(mp[s[i]]==0){
                count--;
            }
                while(count==0){
                   if(i-j+1<ans){
                       start=j;
                       ans=i-j+1;
                   }
                   mp[s[j]]++;
                   if(mp[s[j]]==1)
                     count++;
                     j++;
                
            }
        }
        if(ans!=INT_MAX)
         return s.substr(start,ans);
         return "-1";
      
        
    }
=>992. Subarrays with K Different Integers

Given an integer array nums and an integer k, return the number of good subarrays of nums.

A good array is an array where the number of different integers in that array is exactly k.

For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [1,2,1,2,3], k = 2
Output: 7
Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]
Example 2:

Input: nums = [1,2,1,3,4], k = 3
Output: 3
Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].
 

Constraints:

1 <= nums.length <= 2 * 104
1 <= nums[i], k <= nums.length
code:
int atmost(vector<int>&nums,int k){
    int count=0;
    int i=0,j=0;
    unordered_map<int,int>mp;
    while(i<nums.size()){
        mp[nums[i]]++;
        while(mp.size()>k){
            mp[nums[j]]--;
            if(mp[nums[j]]==0)
            mp.erase(nums[j]);
            j++;
        }
        count+=i-j+1;
        i++;

    }
    return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }

=>Minimum Window Subsequence
HardAccuracy: 47.95%Submissions: 290+Points: 8
Lamp
Don't Miss Out on the Chance to Work with Leading Companies! Visit the GFG Job Fair Now!  

Given strings str1 and str2, find the minimum (contiguous) substring W of str1, so that str2 is a subsequence of W.

If there is no such window in str1 that covers all characters in str2, return the empty string "". If there are multiple such minimum-length windows, return the one with the left-most starting index.
 

Example 1:

Input: 
str1: geeksforgeeks
str2: eksrg
Output: 
eksforg
Explanation: 
Eksforg satisfies all required conditions. str2 is its subsequence and it is longest and leftmost among all possible valid substrings of str1.
Example 2:

Input: 
str1: abcdebdde
str2: bde
Output: 
bcde
Explanation: 
"bcde" is the answer and "deb" is not a smaller window because the elements of T in the window must occur in order.
Your Task:

Complete the function string minWindow(string str1, string str2), which takes two strings as input and returns the required valid string as output.

Expected Time Complexity: O(N2).

Expected Auxiliary Space: O(N2).

code :    string minWindow(string str1, string str2) {
        // Write your Code here
        int n=str1.size();
        int m=str2.size();
        if(n==0||m==0)
        return "";
        string minstr="";
        int mins=INT_MAX;
        int right=0;
        while(right<n){
            int i=0;
            // go right
            while(right<n){
                if(str1.at(right)==str2.at(i))
                 i++;
                 
                 if(i==m)
                 break;
                 
                 right++;
            }
            if(right==n)
            break;
           // go left
          int left=right;
           i=m-1;
           while(left>=0){
               if(str1.at(left)==str2.at(i)){
                   i--;
               }
               if(i<0)
               break;
               
               left--;
           }
           if(right-left + 1<mins){
               mins=right-left + 1;
               minstr=str1.substr(left,mins);
           }
           right=left + 1;
        }
        return minstr;
        
    }

