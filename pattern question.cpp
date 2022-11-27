**pattern question**
////

1st question
sample code
Input: 5

Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
code:
void printSquare(int n) {
       
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }


2 question:

Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
code:
void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

pattern 3:
Input: 5

Output:
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
code:
void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
                
            }
            cout<<endl;
        }
    }

pattern 4:

Input: 5

Output:
1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5

code:

 void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
pattern 5:

Input: 5

Output:
* * * * *
* * * * 
* * * 
* *  
* 
code:
	void printTriangle(int n) {
	    // code here
	    for(int i=n;i>=1;i--){
	        for(int j=i;j>=1;j--){
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
	}

pattern 6:

Input: 5

Output:
1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1 

code:
void printTriangle(int n) {
	    // code here
	    for(int i=n;i>=1;i--){
	        for(int j=1;j<=i;j++){
	            cout<<j<<" ";
	        }
	        cout<<endl;
	    }
	}
pattern 7:

Input: 5

Output:
    *
   ***  
  *****
 *******
*********

code:
void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=n-1;j>=i;j--){
                cout<<" ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
pattern 8:
Input: 5

Output:

*********
 *******
  *****
   ***
    *
code:
void printTriangle(int n) {
	    // code here
	    for(int i=n;i>=1;i--){
	        for(int j=i;j<n;j++){
	            cout<<" ";
	            
	        }
	        for(int j=2*i-1;j>=1;j--){
	            cout<<"*";
	        }
	        cout<<endl;
	    }
	}
pattern 9:
 
code:
void printDiamond(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=n-i;j>=1;j--){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
            }
            
            cout<<endl;
        }
        for(int i=n;i>=1;i--){
            for(int j=n-i;j>=1;j--){
                cout<<" ";
            }
            for(int j=i;j>=1;j--){
                cout<<"*"<<" ";
                
            }
            cout<<endl;
        }
    }
pattern 10:
nput: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*
code:
void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=n-1;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

pattern 11:

Input: 5

Output:
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

code:
void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2==0)
                cout<<"1"<<" ";
                else
                cout<<"0"<<" ";
            }
            cout<<endl;
        }
        
    }


pattern 12:
Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

code:
void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int j=1;j<=4*n-4*i;j++){
                cout<<" ";
            }
            for(int j=i;j>=1;j--){
                cout<<j<<" ";
            }
            cout<<endl;
            
        }
    }
pattern 13:
Input: 5

Output:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

code:
void printTriangle(int n) {
        // code here
        int count=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(i==n&&j==n)
                cout<<count<<" ";
                else
                cout<<count<<" ";
                count++;
            }
            cout<<endl;
        }
    }
pattern 14:
Input: 5

Output:
A
AB
ABC
ABCD
ABCDE

code :
void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<(char)('A'+j);
            }
            cout<<endl;
        }
    }
pattern 15:
Input: 5

Output:
ABCDE
ABCD
ABC
AB
A
code:
void printTriangle(int n) {
        // code here
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                cout<<(char)('A'+j);
            }
            cout<<endl;
        }
    }
pattern 16:
Input: 5

Output:
A
BB
CCC
DDDD
EEEEE

code:
void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<(char)('A'+i);
            }
            cout<<endl;
        }
    }

pattern 17:
Input: 4
Output:
   A
  ABA
 ABCBA
ABCDCBA

code:
 void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<(char)('A'+j);
            }
            for(int j=i-1;j>=0;j--)
            cout<<(char)('A'+j);
            cout<<endl;
        }
        
    }
pattern 18:
Input: 5

Output:
E
E D
E D C
E D C B
E D C B A
code:
void printTriangle(int n) {
        // code here
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=i;j--){
                cout<<(char)('A'+j)<<" ";
            }
            cout<<endl;
        }
    }
pattern 19:
Input: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
code:
void printTriangle(int n) {
        // code here
        for(int i = n; i >0; i--){

            for(int j = 1; j<=i; j++){

                cout<< "*";

            }

            for(int j = 0; j< 2*(n-i); j++){

                cout<< " ";

            }

            for(int j =i; j>0; j--){

                cout<< "*";

            }

            cout<< endl;

        }
        for(int i = 1; i<=n; i++){

            for(int j = 1; j<=i; j++){

                cout<< "*";

            }

            for(int j = 0; j< 2*(n-i); j++){

                cout<< " ";

            }

            for(int j =i; j>0; j--){

                cout<< "*";

            }

            cout<< endl;

        }




    }

pattern 20:
Input: 5

Output:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*  

code:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*(n-i);j++)
            cout<<" ";
            for(int j=1;j<=i;j++)
            cout<<"*";
            cout<<endl;
        }
        for(int i=n-1;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*(n-i);j++)
            cout<<" ";
            for(int j=1;j<=i;j++)
            cout<<"*";
            cout<<endl;
        }
        
    }
pattern 21:
Input: 4

Output:
****
*  *
*  *
****
code:
void printSquare(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==1||j==1||i==n||j==n)
                cout<<"*";
                else
                cout<<" ";
            }
            cout<<endl;
        }
        
    }
pattern 22:

