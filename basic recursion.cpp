=>Print 1 To N Without Loop
Input:
N = 10
Output: 1 2 3 4 5 6 7 8 9 10
code:
void printNos(int N)
    {
        //Your code here
        if(N>0)
        {
            printNos(N-1);
            cout<<N<<" ";
        }
    }
=>Print GFG n times
Input:
5
Output:
GFG GFG GFG GFG GFG
code:
 void printGfg(int N) {
        // Code here
        if(N>0){
        cout<<"GFG"<<" ";
        printGfg(N-1);
        }
    }
=>Print N to 1 without loop
Example 1:

Input:
N = 10
Output: 10 9 8 7 6 5 4 3 2 1

code:
void printNos(int N) {
        // code here
        if(N>0){
            cout<<N<<" ";
            printNos(N-1);
            
        }
        
    }
=>Sum of first n terms 
Input:
N=5
Output:
225
Explanation:
13+23+33+43+53=225
code:
long long sum=0;
    long long sumOfSeries(long long N) {
        // code here
        if(N<1)
        return 0;
        return (N*(N+1)/2)*(N*(N+1)/2);
    }
=>Find all factorial numbers less than or equal to N
A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number N, the task is to return the list/vector of the factorial numbers smaller than or equal to N.

Example 1:

Input: N = 3
Output: 1 2

code:
long long fact(long long n){
    return (n==1||n==0)?1:n*fact(n-1);
}
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long>ans;
        int i=1;
        while(fact(i)<=N){
            ans.push_back(fact(i));
            i++;
        }
        return ans;
        
    }
=>Palindrome String
Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome

int isPalindrome(string S)
	{
	    int i=0;
	    int j=S.length()-1;
	    while(i<j){
	        if(S[i]!=S[j])
	         return 0;
	         i++;
	         j--;
	    }
	    return 1;
	    
	    
	}
=>Print first n Fibonacci Numbers
Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:

Input:
N = 5
Output: 1 1 2 3 5


 vector<long long> printFibb(int n) 
    {
       
        vector<long long>v(n);
        v[0]=1;
        v[1]=1;
        for(int i=2;i<n;i++){
            v[i]=v[i-1]+v[i-2];
        }
        return v;
    }

=>Frequencies of Limited Range Array Elements
Given an array A[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all elements from 1 to N.
Note: The elements greater than N in the array can be ignored for counting and do modify the array in-place.


Example 1:

Input:
N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
Output:
0 2 2 0 1
code:
void frequencyCount(vector<int>& arr,int N, int P)
    { 
         unordered_map<int,int>freq;
         for(int i=0;i<N;i++){
             freq[arr[i]]++;
         }
         
         for(int i=1;i<=N;i++)
         arr[i-1]=freq[i];
        
        }
        
    