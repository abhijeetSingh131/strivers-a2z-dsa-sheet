array 

##easy##
=>Largest Element in Array
Given an array A[] of size n. The task is to find the largest element in it.
 

Example 1:

Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
code:
    int largest(vector<int> &arr, int n)
    {
        int ans=0;
        for(int i=0;i<n;i++){
           ans=max(ans,arr[i]) ;
        }
        return ans;
    }

=>Second Largest

Given an array Arr of size N, print second largest distinct element from an array.

Example 1:

Input: 
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the 
array is 35 and the second largest element
is 34.
code:
	int print2largest(int arr[], int n) {
	    // code here
	    int ans=INT_MIN;
	    int ans2=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>ans){
	        ans2=ans;
	        ans=arr[i];
	        
	        }
	        else if(arr[i]<ans&&arr[i]>ans2)
	        ans2=arr[i];
	    }
	    if(ans2==INT_MIN)
	     return -1;
	    return ans2;
	}

=>Check if array is sorted

Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 

Example 1:

Input:
N = 5
arr[] = {10, 20, 30, 40, 50}
Output: 1
Explanation: The given array is sorted.
code:
   bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
            return 0;
        }
        return 1;
    }

=>1752. Check if Array Is Sorted and Rotated
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
code:
 bool check(vector<int>& nums) {
        int n=nums.size();
        int c=0;
       for(int i=0;i<n;i++){
           if((i!=0)&&nums[i-1]>nums[i])
           c++;


       }
       if(nums[n-1]>nums[0])
       c++;
       return (c>1)?0:1;
    }
=>Remove duplicate elements from sorted Array

Given a sorted array A[] of size N, delete all the duplicated elements from A[]. Modify the array such that if there are X distinct elements in it then the first X positions of the array should be filled with them in increasing order and return the number of distinct elements in the array.

Note:
1. Don't use set or HashMap to solve the problem.
2. You must return the number of distinct elements(X) in the array, the generated output will print all the elements of the modified array from index 0 to X-1.

Example 1:

Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: {2}
Explanation: After removing all the duplicates 
only one instance of 2 will remain.
Example 2:

Input:
N = 3
Array = {1, 2, 2}
Output: {1, 2}

Your Task:  
You don't need to read input or print anything. Complete the function remove_duplicate() which takes the array A[]
 and its size N as input parameters and modifies it in place to delete all the duplicates. The function must return an integer X denoting the new modified size of the array. 
code:
nt remove_duplicate(int a[],int n){
        // code here
        if(n==0)
        return 0;
        int j=0;
        for(int i=1;i<n;i++){
            if(a[i]!=a[j]){
                j++;
                a[j]=a[i];
            }
            
        }
        return j+1;
    } 
=>Quick Left Rotation
BasicAccuracy: 34.84%Submissions: 30K+Points: 1
Given an array arr[] of size N and an integer K, the task is to left rotate the array K indexes

Example 1:

Input: N = 7, K = 2
arr[] = {1, 2, 3, 4, 5, 6, 7}
Output: 3 4 5 6 7 1 2
Explanation: Rotation of the above 
array by 2 will make the output array .

code:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	  if(k>n)
	  k=k%n;
	  int ar[k];
	  for(int i=0;i<k;i++){
	      ar[i]=arr[i];
	  }
	  int j=0;
	  for(int i=k;i<n;i++){
	      arr[j++]=arr[i];
	  }
	  int i=0;
	  for(int j=n-k;j<n;j++){
	      arr[j]=ar[i++];
	  }
	  
	  
	} 
=>189. Rotate Array

Given an array, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
code:
 void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
=>Rotating an Array

Given an array of size N. The task is to rotate array by D elements where D ≤ N.

Example 1:

Input:
N = 7
Arr[] = {1, 2, 3, 4, 5, 6, 7}
D = 2
Output: 3 4 5 6 7 1 2
Explanation: 
Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
Rotate by 2: [3, 4, 5, 6, 7, 1, 2]
code:
   void leftRotate(int arr[], int n, int d) {
        // code here
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
    }

=>283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

code:
void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        for(int i=j;i<n;i++){
            nums[i]=0;
        }

    }
=>Searching an element in a sorted array

Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.


Example 1:

Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1
Exlpanation: Since, 6 is present in 
the array at index 4 (0-based indexing),
output is 1.

code:
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
      int i=0,j=N-1;
      while(i<=j){
          int mid=i+(j-i)/2;
          if(arr[mid]==K)
          return 1;
          else if(arr[mid]>K)
           j=mid-1;
           else
           i=mid+1;
          
      }
      return -1;
       
    }
=>Missing number

Vaibhav likes to play with numbers and he has N numbers. One day he was placing the numbers on the playing board just to count that how many numbers he has. He was placing the numbers in increasing order i.e. from 1 to N. But when he was putting the numbers back into his bag, some numbers fell down onto the floor. He picked up all the numbers but one number, he couldn't find. Now he has to go somewhere urgently, so he asks you to find the missing number.
NOTE: Don't use Sorting


Example 1:

Input:                                                       
N = 4                                        
A[] = {1, 4, 3}
Output:
2     
Explanation:
Vaibhav placed 4 integers but he picked
up only 3 numbers. So missing number
will be 2 as it will become 1,2,3,4.

code:
int missingNumber(int A[], int N)
{
    // Your code goes here
    // to find sum of 0 to n :formula is (n(n+1))/2;
    int sum=(N*(N+1))/2;
    for(int i=0;i<N-1;i++){
        sum-=A[i];
    }
    return sum;
}
=>Find the element that appears once

Given a sorted array A[] of N positive integers having all the numbers occurring exactly twice, except for one number which will occur only once. Find the number occurring only once.

Example 1:

Input:
N = 5
A = {1, 1, 2, 5, 5}
Output: 2
Explanation: 
Since 2 occurs once, while
other numbers occur twice, 
2 is the answer.
code:
	int search(int A[], int N){
	    //code
	    int ans=0;
	    for(int i=0;i<N;i++){
	        ans^=A[i];
	    }
	    return ans;
	    
	}
=>Row with max 1s

Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).
code:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code hereint 
	    int row=-1;
	    int i=0;
	    int j=m-1;
	    while(i<n&&j>=0){
	        if(arr[i][j]==1){
	            j--;
	            row=i;
	        }
	        else if(arr[i][j]==0){
	            i++;
	        }
	    }
	    return row ;
	}
=>Search in a matrix

//when row and column is sorted.

Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order, and a number X is given. The task is to find whether element X is present in the matrix or not.


Example 1:

Input:
N = 3, M = 3
mat[][] = 3 30 38 
         44 52 54 
         57 60 69
X = 62
Output:
0
Explanation:
62 is not present in the
matrix, so output is 0
 code:
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int i=0,j=M-1;
	    while(i<N&&j>=0){
	        if(mat[i][j]==X)
	        return 1;
	        if(mat[i][j]>X)
	        j--;
	        else{
	            i++;
	        }
	    }
	    return 0;
	}

=>74. Search a 2D Matrix
// in this if we write the every row one by one ,so it automatically sorted for ex:- 
123
456
789 
(so in this we use best optimize code).
Companies
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
code:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int j=(m*n)-1;
        int i=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            int k=mid/m;
            int l=mid%m;
            if(matrix[k][l]==target)
            return 1;
            else if(matrix[k][l]>target)
            j=mid-1;
            else{
               i=mid+1; 
            }
        }
        return 0;
    }
=>560. Subarray Sum Equals K
Medium
16.5K
486
Companies
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
code:   
int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       int cnt=0;
       unordered_map<int,int>mp;
       int px=0;
       mp[0]=1;
       for(int i=0;i<n;i++) {
           px+=nums[i];
             if(mp.find(px-k)!=mp.end()){
               cnt+=mp[px-k];
           }
         else if(px==k){
           cnt++;
           }
           
       
           mp[px]++;
            

       }
       return cnt;
    }
=>Longest Sub-Array with Sum K

Given an array containing N integers and an integer K., Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

 

Example 1:
 

Input :
A[] = {10, 5, 2, 7, 1, 9}
K = 15
Output : 4
Explanation:
The sub-array is {5, 2, 7, 1}
code:
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        
       int ans=0;
       unordered_map<int,int>mp;
       int px=0;
  
       for(int i=0;i<N;i++) {
           px+=A[i];
           if(px==K){
           ans=i+1;
           }
            else if(mp.find(px-K)!=mp.end()){
              ans=max(ans,(i-mp[px-K]));
           }
         
          if(mp.find(px)==mp.end())
               mp[px]=i;
            
       }
       return ans;
    
    }
=>Maximize Number of 1's
MediumAccuracy: 39.46%Submissions: 31K+Points: 4
Given a binary array arr of size N and an integer M. Find the maximum number of consecutive 1's produced by flipping at most M 0's.
 

Example 1:

Input:
N = 3
arr[] = {1, 0, 1}
M = 1
Output:
3
Explanation:
Maximum subarray is of size 3
which can be made subarray of all 1 after
flipping two zeros to 1.

code:
int findZeroes(int arr[], int n, int m) {
        // code here
        int i=0,j=0,ans=0,cnt=0;
        while(j<n){
            if(arr[j]==0)
            cnt++;
            while(cnt>m){
                if(arr[i]==0)
                cnt--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
        
    }  
=>Union of Two Sorted Arrays

Union of two arrays can be defined as the common and distinct elements in the two arrays.
Given two sorted arrays of size n and m respectively, find their union.


Example 1:

Input: 
n = 5, arr1[] = {1, 2, 3, 4, 5}  
m = 3, arr2 [] = {1, 2, 3}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
code1:
 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
        v.push_back(arr1[i]);
       for(int i=0;i<m;i++)
        v.push_back(arr2[i]);
        sort(v.begin(),v.end());
        
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
 }
2nd approach
code:
 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
      
        vector<int>v;
        int i=0,j=0;
        while(i<n&&j<m){
            if(arr1[i]<=arr2[j]){
                if(v.size()==0||v.back()!=arr1[i]){
                    v.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(v.size()==0||v.back()!=arr2[j]){
                    v.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(i<n){
            if(v.back()!=arr1[i])
            v.push_back(arr1[i]);
            i++;
        }
         while(j<m){
            if(v.back()!=arr2[j])
            v.push_back(arr2[j]);
            j++;
        }
        return v;
        
    }
