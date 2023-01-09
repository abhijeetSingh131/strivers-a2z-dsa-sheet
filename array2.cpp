=> Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

code:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++){
          int b=nums[i];
            int a=target-b;
            if(seen.count(a))
                return{seen[a],i};
            seen[b]=i;
            
        }
        return {};
        
    }
=>Find all pairs with a given sum
EasyAccuracy: 23.94%Submissions: 109K+Points: 2
Lamp
This problem is part of GFG SDE Sheet. Click here to view more.  

Given two unsorted arrays A of size N and B of size M of distinct elements, the task is to find all pairs from both arrays whose sum is equal to X.

Note: All pairs should be printed in increasing order of u. For eg. for two pairs (u1,v1) and (u2,v2), if u1 < u2 then
(u1,v1) should be printed first else second.

Example 1:

Input:
A[] = {1, 2, 4, 5, 7}
B[] = {5, 6, 3, 4, 8} 
X = 9 
Output: 
1 8
4 5 
5 4
Explanation:
(1, 8), (4, 5), (5, 4) are the
pairs which sum to 9.

code:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
       
        unordered_map<int,int>mp;
        vector<pair<int,int>>v;
        for(int i=0;i<N;i++)
        mp[A[i]]++;
        
        for(int i=0;i<M;i++){
            int tar=X-B[i];
           if(mp.find(tar)!=mp.end()){
              v.push_back({tar,B[i]});
           }
        }
        sort(v.begin(),v.end());
        return v;
    }

=>Sort an array of 0s, 1s and 2s
EasyAccuracy: 50.58%Submissions: 463K+Points: 2
Lamp
This problem is part of GFG SDE Sheet. Click here to view more.  

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.

code:
void sort012(int a[], int n)
    {
        // code here 
        int count=0,count1=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
            count++;
            if(a[i]==1)
            count1++;
        }
        for(int i=0;i<count;i++)
            a[i]=0;
           int k=count+count1; 
            for(int j=count;j<k;j++)
            a[j]=1;
            for(int i=k;i<n;i++)
            a[i]=2;
            
        
    }

=>169. Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

code:
int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int n=nums.size();
        int k=n/2;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(map[nums[i]]>k){
                return nums[i];
            }
        }
        return -1;
**&& imp method
  moore voting method
  code:
  int majorityElement(vector<int>& nums) {
        int size=nums.size();
               int count =0;
       int ele;
       for(int i=0;i<size;i++){
           if(count==0){
           ele=nums[i];
           count++;
           }
           else if(ele==nums[i])
           count++;
           else
           count--;
       }
       return ele;
    }

=>Kadane's Algorithm

This problem is part of GFG SDE Sheet. Click here to view more.  

Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
Example 2:

Input:
N = 4
Arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)

code:
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=0;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            mx=max(sum,mx);
            if(sum<0)
            sum=0;
            
        }
        return mx;
        
    }

=>121. Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

code:
 int maxProfit(vector<int>& prices) {
      
        int maxpro=0;
        int minstock=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minstock=min(minstock,prices[i]);
            maxpro=max(maxpro,prices[i]-minstock);
        }
        return maxpro;
    }
=>2149. Rearrange Array Elements by Sign

You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 

Example 1:

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
Explanation:
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions. 

code:
   vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>pos;
       vector<int>neg;
       vector<int>ans;
       for(auto x:nums){
           if(x>0)
            pos.push_back(x);
            else 
            neg.push_back(x);
       }
       int i=0,j=0,k=0;
      while(i<pos.size()|| j<neg.size()){
          if(k%2==0)
          ans.push_back(pos[i++]);
          else{
              ans.push_back(neg[j++]);
          }
          k++;

      }
      return ans;
    } 
optimise code:
   vector<int> rearrangeArray(vector<int>& nums) {
      vector<int>ans(nums.size());
      int odd =1,even=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]<0){
          ans[odd]=nums[i];
          odd+=2;
          }
          else{
          ans[even]=nums[i];
          even+=2;
          }
          
      }
      return ans;
    }
=>Next Permutation
  

Implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of numbers. If such arrangement is not possible, it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.

Example 1:

Input: N = 6
arr = {1, 2, 3, 6, 5, 4}
Output: {1, 2, 4, 3, 5, 6}
Explaination: The next permutation of the 
given array is {1, 2, 4, 3, 5, 6}.

code:
vector<int> nextPermutation(int N, vector<int> arr){
        // code he
         int ind=-1;
        int n=N;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
            ind=i;
            break;
            }
        }
        if(ind ==-1){
            reverse(arr.begin(),arr.end());
            return arr;
        }
      
        else{
            int prev=-1;
            for(int i=n-1;i>ind;i--){
                if(arr[i]>arr[ind]){
                   prev=i;
                   break;
                }
            }
            swap(arr[ind],arr[prev]);
            reverse(arr.begin()+ind+1,arr.end());
        }
        return arr;
    }
Leaders in an array
  

Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.

code:
vector<int> leaders(int a[], int n){
        // Code here
      vector<int>ans;
      int ma=INT_MIN;
      for(int i=n-1;i>=0;i--){
          if(a[i]>=ma){
              ma=a[i];
              ans.push_back(a[i]);
          }
          
      }
      reverse(ans.begin(),ans.end());
      return ans;
        
    }
=>Longest consecutive subsequence
MediumAccuracy: 33.0%Submissions: 209K+Points: 4
Lamp
Bag Offers from Top Product Companies. Explore Exclusive Problems Now!  

Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
 

Example 1:

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.

code:
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int>st;
     for(int i=0;i<N;i++)
          st.insert(arr[i]);
          
         int ls=0;
         for(int i=0;i<N;i++){
            
             if(!st.count(arr[i]-1)){
                 int cn=arr[i];
                 int co=1;
                 while(st.count(cn+1)){
                    cn+=1;
                    co+=1;
                 }
                 ls=max(ls,co);
                 
             }
         }
         return ls;
=>73. Set Matrix Zeroes
Medium
10.1K
585
Companies
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1
 

Follow up:

A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?

code:
void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int col0=1;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0)
             col0=0;
            for(int j=1;j<m;j++){
               if(matrix[i][j]==0)
               matrix[i][0]= matrix[0][j]=0;
            }

        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=1;j--){
                if(matrix[i][0]==0||matrix[0][j]==0)
                matrix[i][j]=0;
            }
            if(col0==0)
            matrix[i][0]=0;
        }
        
    }
=>Rotate by 90 degree
EasyAccuracy: 56.88%Submissions: 53K+Points: 2
Lamp
Bag Offers from Top Product Companies. Explore Exclusive Problems Now!  

Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 

Example 1:

Input:
N = 3 
matrix[][] = {{1, 2, 3},
              {4, 5, 6}
              {7, 8, 9}}
Output: 
Rotated Matrix:
3 6 9
2 5 8
1 4 7
Example 2:

Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output: 
Rotated Matrix:
2 4
1 3
code:
approach 1:
 void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        vector<vector<int>>v(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               v[i][j]=matrix[i][j]; 
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[(n-1)-j][i]=v[i][j];
            }
        }
approach 2:
     int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

        
    
118. Pascal's Triangle

Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

code:
 vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>mat(n);
        for(int i=0;i<n;i++){
            mat[i].resize(i+1);
            mat[i][0]=mat[i][i]=1;
            for(int j=1;j<i;j++){
                mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
            }
        }
        return mat;
    }

=>229. Majority Element II
Medium
6.5K
323
Companies
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]

code:
   vector<int> majorityElement(vector<int>& nums) {
         vector<int>ans;
        int count1=0,count2=0;
        int ele=-1,ele2=-1;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(ele==nums[i])
            count1++;
            else if(ele2==nums[i])
            count2++;
            else if(count1==0){
             ele=nums[i];
             count1=1;
            }
             else if(count2==0){
             ele2=nums[i];
             count2=1;
             }
             else{
                 count1--;
                 count2--;
             }
            
        }
        int c=0,c2=0;
        for(auto i:nums){
            if(i==ele)
            c++;
            else if(i==ele2)
            c2++;
        }
        if(c>n/3)
        ans.push_back(ele);
        if(c2>n/3)
        ans.push_back(ele2);
        return ans;
    }
=>15. 3Sum
Medium
23.2K
2.1K
Companies
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

code:
 vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
       if(n<3)
           return { };
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<n-1;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int l=i+1,h=n-1;
            while(l<h){
                if(-nums[i]==nums[l]+nums[h]){
                    vector<int>a={nums[i],nums[l],nums[h]};
                    ans.push_back(a);
                    while(l<h && nums[l]==a[1]) l++;
                    while(l<h && nums[h]==a[2]) h--;
                    
                }
                else if(-nums[i]<nums[l]+nums[h])  h--;
                else  
                    l++;
                
            }
        }
        return ans;
    }
=>18. 4Sum
Medium
8.3K
969
Companies
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
code:
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        if(nums.empty())
            return res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target2=target-nums[i]-nums[j];
                int f=j+1;
                int b=n-1;
                while(f<b){
                    if(nums[f]+nums[b]<target2)
                        f++;
                    else if(nums[f]+nums[b]>target2)
                        b--;
                    else{
                        vector<int>quadlet(4,0);
                        quadlet[0]=nums[i];
                        quadlet[1]=nums[j];
                        quadlet[2]=nums[f];
                        quadlet[3]=nums[b];
                        res.push_back(quadlet);
                        while(f<b&&quadlet[2]==nums[f]) ++f;
                         
                        while(f<b&&quadlet[3]==nums[b]) --b;
                    }
                }
                    while(j+1<n&&nums[j+1]==nums[j])
                        ++j;
            }
                while(i+1<n&&nums[i+1]==nums[i])
                    ++i;
            
            
        }
        return res;
    }
=>Largest subarray with 0 sum
EasyAccuracy: 41.84%Submissions: 169K+Points: 2
Lamp
Land your Dream Job with Mega Job-a-thon. Register Now!  

Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

Example 1:

Input:
N = 8
A[] = {15,-2,2,-8,1,7,10,23}
Output: 5
Explanation: The largest subarray with
sum 0 will be -2 2 -8 1 7.

code:
   int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        int sum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0)
            maxi=i+1;
            else{
            if(mp.find(sum)!=mp.end()){
               maxi=max(maxi,i-mp[sum]);
            }
            else
            mp[sum]=i;
            }
        }
        return maxi;
    }
=>Overlapping Intervals
MediumAccuracy: 57.41%Submissions: 30K+Points: 4
Lamp
Land your Dream Job with Mega Job-a-thon. Register Now!  

Given a collection of Intervals, the task is to merge all of the overlapping Intervals.

Example 1:

Input:
Intervals = {{1,3},{2,4},{6,8},{9,10}}
Output: {{1, 4}, {6, 8}, {9, 10}}
Explanation: Given intervals: [1,3],[2,4]
[6,8],[9,10], we have only two overlapping
intervals here,[1,3] and [2,4]. Therefore
we will merge these two and return [1,4],
[6,8], [9,10].
code:
         vector<vector<int>>merge;
         if(intervals.size()==0)
         return merge;
         sort(intervals.begin(),intervals.end());
         vector<int>inter=intervals[0];
         for(auto it:intervals){
             if(it[0]<=inter[1]){
                 inter[1]=max(inter[1],it[1]);
             }
             else{
                 merge.push_back(inter);
                 inter=it;
             }
         }
         merge.push_back(inter);
         return merge;
         
         
    }
=>88. Merge Sorted Array
Easy
8.7K
800
Companies
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

code:
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int>ans;
        int j=0;
        int k=0;
        while(j<m&&k<n){
            if(nums1[j]<=nums2[k]){
                ans.push_back(nums1[j]);
                j++;
            }
            else{
                ans.push_back(nums2[k]);
                k++;
            }
        }
        while(j<m){
            ans.push_back(nums1[j]);
            j++;
        }
        while(k<n){
            ans.push_back(nums2[k]);
            k++;
        }
        nums1.clear();
        for(int i=0;i<m+n;i++){
            nums1.push_back(ans[i]);
        }
=>Merge Without Extra Space
HardAccuracy: 32.01%Submissions: 141K+Points: 8
Lamp
Land your Dream Job with Mega Job-a-thon. Register Now!  

Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.
 

Example 1:

Input: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation:
After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9

code:
 void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=n-1,j=0;
            while(i>=0&&j<m){
                if(arr1[i]>=arr2[j]){
                    swap(arr1[i],arr2[j]);
                    i--,j++;
                }
                else{
                    break;
                }
                
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
=>Find Missing And Repeating
MediumAccuracy: 24.83%Submissions: 256K+Points: 4
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1.
code:
      int *findTwoElement(int *arr, int n) {
        // code here
        int a,b;
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]<0){
                a=abs(arr[i]);
            }
            else{
               arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
            }
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
            b=i+1;
            break;
            }
        }
        int*ans=new int[2];
        ans[0]=a;
        ans[1]=b;
        return ans;
    }
Count Inversions
MediumAccuracy: 16.93%Submissions: 363K+Points: 4
Lamp
Save Today, Earn More Tomorrow. Get 25% off on Complete Interview Preparation  

Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
code:
long long int merge(long long arr[],long long temp[],int left,int mid,int right){
        long long int inv=0;
        int i=left;
        int j=mid;
        int k=left;
        while((i<=mid-1)&&(j<=right)){
            if(arr[i]<=arr[j]){
               temp[k++]=arr[i++] ;
            }
            else{
                temp[k++]=arr[j++];
                inv+=(mid-i);
            }
        }
        while(i<=mid-1){
            temp[k++]=arr[i++];
        }
        while(j<=right){
            temp[k++]=arr[j++];
        }
        for(int m=left;m<=right;m++){
            arr[m]=temp[m];
        }
        return inv;
    }
    long long int mergesort(long long arr[],long long  temp[],int left,int right){
    long long int inv=0;
    if(left<right){
        int mid=(left+right)/2;
        inv+=mergesort(arr,temp,left,mid);
        inv+=mergesort(arr,temp,mid+1,right);
        inv+=merge(arr,temp,left,mid+1,right);
    }
    return inv;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long temp[N];
    long long int a=mergesort(arr,temp,0,N-1);
    return a;
}

=>Count Reverse Pairs
HardAccuracy: 41.2%Submissions: 386+Points: 8
Lamp
Become a GfG Premium Member at Zero Cost. Explore Courses  

You are given an array of N integers arr, find the count of reverse pairs. 

A pair of indices (i, j) is said to be a reverse pair if both the following conditions are met:

0 <= i < j < N 
arr[i] > 2 * arr[j]
Example 1:
Input:
N = 6
arr = [3, 2, 4, 5, 1, 20]
Output:
3
Explanation:
The Reverse pairs are 
(i)  (0, 4), arr[0] = 3, arr[4] = 1, 3 > 2(1) 
(ii) (2, 4), arr[2] = 4, arr[4] = 1, 4 > 2(1) 
(iii)(3, 4), arr[3] = 5, arr[4] = 1, 5 > 2(1) 

code:
int count;
  void merge(vector<int>&arr,int start,int mid,int end){
      int l=start;
      int r=mid+1;
      while(l<=mid&&r<=end){
          if((long)arr[l]>(long)2*arr[r]){
              count+=(mid-l)+1;
              r++;
          }
          else{
              l++;
          }
      }
      sort(arr.begin()+start,arr.begin()+end+1);
      return;
  }
  void mergesort(vector<int>&arr,int start,int end){
      if(start==end)
      return;
      int mid=(start+end)/2;
      mergesort(arr,start,mid);
      mergesort(arr,mid+1,end);
      merge(arr,start,mid,end);
      
  }
    int countRevPairs(int n, vector<int> arr) {
        // Code here
        int inv=0;
        
        if(arr.size()==0||arr.size()==1)
        return 0;
        count=0;
        mergesort(arr,0,arr.size()-1);
        return count;
        
    }
=>152. Maximum Product Subarray
Medium
14.8K
440
Companies
Given an integer array nums, find a 
subarray
 that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
code:
 int maxProduct(vector<int>& nums) {
      int ans=nums[0];
        int ma=ans;
        int mi=ans;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<0)   swap(ma,mi);
            ma=max(nums[i],ma*nums[i]);
            mi=min(nums[i],mi*nums[i]);
            ans=max(ans,ma);
        }
        return ans;
    }
54. Spiral Matrix
Medium
10.1K
979
Companies
Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
code:
 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
       int ce=matrix.size()-1;
        int re=matrix[0].size()-1;
        vector<int>ans;
        if(matrix.empty()){
            return ans;
        }
        int rs=0;
        int cs=0;
        int count=0;
        int total=(ce+1)*(re+1);
        while(count<total){
            for(int i=cs;i<=ce && count<total;i++){
                ans.push_back(matrix[rs][i]);
                total++;
                
            }
            rs++;
            for(int i=rs;i<=re&& count<total;i++){
                ans.push_back(matrix[i][ce]);
                total++;
            }
            ce--;
            for(int i=ce;i>=cs;i--){
                ans.push_back(matrix[re][i]);
            }
            re--;
            for(int i=re;i>=rs&& count<total;i--){
                ans.push_back(matrix[i][cs]);
                total++;
            }
            cs++;
        }
        return ans;
    }
        
    




