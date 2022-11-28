Given a number N. Count the number of digits in N which evenly divides N.
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly
code:
int evenlyDivides(int N){
        //code here
       int num=N;
        int counter=0;
        while(N!=0){
            int digit=N%10;
            if(digit!=0 && num%digit==0){
                counter++;
            }
            N/=10;
        }
        return counter;
    }
Reverse Bits

Given a 32 bit number X, reverse its binary form and print the answer in decimal.
code:

long long reversedBits(long long X) {
        // code here
        long long int sum=0;
        int p=31;
        while(X!=0){
            int r=X%2;
            if(r==1)
            sum=sum+(pow(2,p));
            X=X/2;
            p--;
        }
        return sum;
    }
Palindrome:
Example 1:

Input: n = 55555
Output: Yes

Example 2:

Input: n = 123
Output: No

code:
 string is_palindrome(int n)
		{
		    // Code here.
		    int num=n;
		    int sum=0;
		    while(n!=0){
		       int rem=n%10;
		       sum=10*sum+rem;
		       n=n/10;
		    }
		    return (sum==num)?"Yes":"No";
		}

-->LCM And GCD
Given two numbers A and B. The task is to find out their LCM and GCD.
code:
  int hcf(int a,int b){
      if(a==0)
      return b;
      if(b==0)
      return a;
     while(a!=b){
         if(a>b)
         a=a-b;
         else
         b=b-a;
     }
     return a;
      
  }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        // code here
        long long gcd=hcf(A,B);
        long long lcm=(A*B)/gcd;
        return {lcm,gcd};
        
    }

Armstrong Numbers:
For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371

Example 1:

Input: N = 153
Output: "Yes"
Explanation: 153 is an Armstrong number
since 13 + 53 + 33 = 153.
Hence answer is "Yes".

code:
 string armstrongNumber(int n){
        // code here
        int num=n;
        int sum=0;
    
        while(n!=0){
            int digit=n%10;
            int d=pow(digit,3);
            sum=sum+d;
            n=n/10;
            
        }
        return (sum==num)?"Yes":"No";
    }
Prime Number:
For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.
 

Example 1:

Input:
N = 5
Output:
1
Explanation:
5 has 2 factors 1 and 5 only.

code:
int isPrime(int N){
        // code here
        if(N<2)
        return 0;
        for(int i=2;i<=sqrt(N);i++)
        {
            if(N%i==0)
            return 0;
        }
        return 1;
    }

