Introduction to Linked List
EasyAccuracy: 80.81%Submissions: 4K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Geek loves linked list data structure. Given an array of integer arr of size n, Geek wants to construct the linked list from arr.

Construct the linked list from arr and return the head of the linked list.

Example 1:

Input:
n = 5
arr = [1,2,3,4,5]
Output:
1 2 3 4 5
Explanation: Linked list for the given array will be 1->2->3->4->5.
Example 2:

Input:
n = 2
arr = [2,4]
Output:
2 4
Explanation: Linked list for the given array will be 2->4.
Constraints:
1 <= n <= 105
1 <= arr[i] <= 100

Your Task:
You don't need to read input or print anything. Your task is to complete the function constructLL() which takes arr[] as input parameters and returns the head of the Linked List.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
code:
class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node*head=new Node(arr[0]);
        Node*curr=head;
        for(int i=1;i<arr.size();i++){
                Node*temp=new Node(arr[i]);
                curr->next=temp;
                curr=temp;
        }
        return head;
    }
=>Linked List Insertion
BasicAccuracy: 43.96%Submissions: 145K+Points: 1
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list. 
Hint: When inserting at the end, make sure that you handle NULL explicitly.

Example 1:

Input:
LinkedList: 9->0->5->1->6->1->2->0->5->0
Output: 5 2 9 5 6
Explanation:
Length of Link List = N = 5
9 0 indicated that 9 should be
inserted in the beginning. Modified
Link List = 9.
5 1 indicated that 5 should be
inserted in the end. Modified Link
List = 9,5.
6 1 indicated that 6 should be
inserted in the end. Modified Link
List = 9,5,6.
2 0 indicated that 2 should be
inserted in the beginning. Modified
Link List = 2,9,5,6.
5 0 indicated that 5 should be
inserted in the beginning. Modified
Link List = 5,2,9,5,6. 
Final linked list = 5, 2, 9, 5, 6.

Example 2:

Input:
LinkedList: 5->1->6->1->9->1
Output: 5 6 9

Your Task:
You only need to complete the functions insertAtBeginning() and insertAtEnd() that takes the head of link list and integer value of the data to be inserted as inputs and returns the head of the modified link list. 

Expected Time Complexity: O(1) for insertAtBeginning() and O(N) for insertAtEnd().
Expected Auxiliary Space: O(1) for both.

Constraints:
1 <= N <= 104
code:
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node*temp=new Node(x);
       if(head==NULL)
       return temp;
       temp->next=head;
       head=temp;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node*temp=head;
        Node*t=new Node(x);
       if(head==NULL)
          return t;
        
       while(temp->next!=NULL){
            temp=temp->next;
       }
      
       temp->next=t;
       return head;
       
    }
=>Delete a Node in Single Linked List
EasyAccuracy: 39.85%Submissions: 123K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a singly linked list and an integer x.Delete xth node from the singly linked list.

Example 1:

Input: 1 -> 3 -> 4 
       x = 3
Output: 1 -> 3
Explanation:
After deleting the node at 3rd
position (1-base indexing), the
linked list is as 1 -> 3. 
Example 2:

Input: 1 -> 5 -> 2 -> 9 
x = 2
Output: 1 -> 2 -> 9
Explanation: 
After deleting the node at 2nd
position (1-based indexing), the
linked list is as 1 -> 2 -> 9.
 

Your task: Your task is to complete the method deleteNode() which takes two arguments: the address of the head of the linked list and an integer x. The function returns the head of the modified linked list.

code:
Node* deleteNode(Node *head,int x)
{
    //Your code here
    int count=1;
    if(x==1){
        Node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
     Node*temp=head;
     while(temp!=NULL){

         if(count==x-1){
             if(temp->next->next!=NULL)
              temp->next=temp->next->next;
              else
              temp->next=NULL;
              break;
             
         }
         count++;
         temp=temp->next;
     }
     return head;
    
}
=>Reverse a Doubly Linked List
EasyAccuracy: 70.38%Submissions: 64K+Points: 2
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given a doubly linked list of n elements. The task is to reverse the doubly linked list.

Example 1:

Input:
LinkedList: 3 <--> 4 <--> 5
Output: 5 4 3
Example 2:

Input:
LinkedList: 75 <--> 122 <--> 59 <--> 196
Output: 196 59 122 75
Your Task:
Your task is to complete the given function reverseDLL(), which takes head reference as argument and should reverse the elements so that the tail becomes the new head and all pointers are correctly pointed. You need to return the new head of the reversed list. The printing and verification is done by the driver code.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 <= number of nodes <= 103
0 <= value of nodes <= 103
code:
if(head==NULL||head->next==NULL)
    return head;
    Node*temp=head;
    while(temp->next!=NULL)
      temp=temp->next;
      head=temp;
      temp->next=temp->prev;
      temp->prev=NULL;
      temp=temp->next;
      while(temp->prev!=NULL){
          Node*nxt=temp->next;
          Node*prev=temp->prev;
          temp->next=prev;
          temp->prev=nxt;
          temp=temp->next;
      }
      temp->prev=temp->next;
      temp->next=NULL;
      return head;

=>Count nodes of linked list
BasicAccuracy: 85.99%Submissions: 122K+Points: 1
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 5
Explanation: Count of nodes in the 
linked list is 5, which is its length.
Example 2:

Input:
LinkedList: 2->4->6->7->5->1->0
Output: 7
Explanation: Count of nodes in the
linked list is 7. Hence, the output
is 7.
Your Task:
Your task is to complete the given function getCount(), which takes a head reference as an argument and should return the length of the linked list.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N <= 105
1 <= value <= 103

code:
 public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int count=0;
        
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    
    }
=>Search in Linked List
EasyAccuracy: 77.3%Submissions: 6K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a linked list of n nodes and a key , the task is to check if the key is present in the linked list or not.

Example:

Input:
n = 4
1->2->3->4
Key = 3
Output:
True
Explanation:
3 is present in Linked List, so the function returns true.
Your Task:
Your task is to complete the given function searchKey(), which takes a head reference and key as Input and returns true or false boolean value by checking the key is present or not in the linked list.

Constraint:
1 <= n <= 105
1 <= key <= 105

Expected Time Complexity: O(n)
Expected Space Complexity: O(1)

code:
bool searchKey(int n, struct Node* head, int key) {
        // Code here
        while(head!=NULL){
            if(head->data==key)
            return true;
            head=head->next;
        }
        return false;
        
    }
=>Introduction to Doubly Linked List
EasyAccuracy: 88.08%Submissions: 3K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Geek is learning data structures and is familiar with linked lists, but he's curious about how to access the previous element in a linked list in the same way that we access the next element. His teacher explains doubly linked lists to him.

Given an integer array arr of size n. Construct the doubly linked list from arr and return the head of it.

Example 1:

Input:
n = 5
arr = [1,2,3,4,5]
Output:
1 2 3 4 5
Explanation: Linked list for the given array will be 1<->2<->3<->4<->5.
Example 2:

Input:
n = 1
arr = [1]
Output:
1
Explanation: Linked list for the given array will be 1.
Constraints:
1 <= n <= 105
1 <= arr[i] <= 100

Your Task:
You don't need to read input or print anything. Your task is to complete the function constructDLL() which takes arr[] as input parameters and returns the head of the Linked List.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
code:
 Node* constructDLL(vector<int>& arr) {
        // code here
     Node*head=new Node(arr[0]);
     head->prev=NULL;
     Node*temp=head;
     for(int i=1;i<arr.size();i++){
         Node*t=new Node(arr[i]);
         temp->next=t;
         t->prev=temp;
         temp=temp->next;
     }
     return head;
    }
=>Doubly linked list Insertion at given position
BasicAccuracy: 47.13%Submissions: 53K+Points: 1
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a doubly-linked list, a position p, and an integer x. The task is to add a new node with value x at the position just after pth node in the doubly linked list.

Example 1:

Input:
LinkedList: 2<->4<->5
p = 2, x = 6 
Output: 2 4 5 6
Explanation: p = 2, and x = 6. So, 6 is
inserted after p, i.e, at position 3
(0-based indexing).
Example 2:

Input:
LinkedList: 1<->2<->3<->4
p = 0, x = 44
Output: 1 44 2 3 4
Explanation: p = 0, and x = 44 . So, 44
is inserted after p, i.e, at position 1
(0-based indexing).
Your Task:
The task is to complete the function addNode() which head reference, position and data to be inserted as the arguments, with no return type.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N <= 104
0 <= p < N

code:
void addNode(Node *head, int pos, int data)
{
   // Your code here
   int count=0;
   if(head==NULL)
      return ;
      Node*temp=head;
      Node*t=new Node(data);
      while(pos--){
          temp=temp->next;
      }
      if(temp->next==NULL){
          temp->next=t;
          t->prev=temp;
          t->next=NULL;
          return;
          
      }
      t->next=temp->next;
      temp->next->prev=t;
      temp->next=t;
      t->prev=temp;
      
}

=>Delete node in Doubly Linked List
BasicAccuracy: 42.98%Submissions: 58K+Points: 1
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a doubly linked list and a position. The task is to delete a node from given position in a doubly linked list.

Example 1:

Input:
LinkedList = 1 <--> 3 <--> 4 
x = 3
Output: 1 3  
Explanation: After deleting the node at
position 3 (position starts from 1),
the linked list will be now as 1->3.
Example 2:

Input:
LinkedList = 1 <--> 5 <--> 2 <--> 9  
x = 1
Output: 5 2 9
Your Task:
The task is to complete the function deleteNode() which should delete the node at given position and return the head of the linkedlist.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

Constraints:
2 <= size of the linked list <= 1000
1 <= x <= N

code:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      Node*temp=head_ref;
      Node*pev=NULL;
      if(x==1){
          head_ref=head_ref->next;
          head_ref->prev=NULL;
          delete(temp);
          return head_ref;
          
      }
      for(int i=1;i<x;i++){
          pev=temp;
          temp=temp->next;
      }
     if(temp->next==NULL){
         pev->next=NULL;
     }
     else{
         pev->next=temp->next;
         temp->next->prev=pev;
     }
     return head_ref;
    }




=>Finding middle element in a linked list
EasyAccuracy: 57.93%Submissions: 248K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 3 
Explanation: 
Middle of linked list is 3.
Example 2: 

Input:
LinkedList: 2->4->6->7->5->1
Output: 7 
Explanation: 
Middle of linked list is 7.
Your Task:
The task is to complete the function getMiddle() which takes a head reference as the only argument and should return the data at the middle node of the linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 5000
code:
   int getMiddle(Node *head)
    {
        // Your code here
        Node*temp=head;
        Node*temp2=head;
        while(temp2!=NULL&&temp2->next!=NULL){
            temp=temp->next;
            temp2=temp2->next->next;
        }
        return temp->data;
    }
=>Reverse a linked list
EasyAccuracy: 73.11%Submissions: 234K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a linked list of N nodes. The task is to reverse this list.

Example 1:

Input:
LinkedList: 1->2->3->4->5->6
Output: 6 5 4 3 2 1
Explanation: After reversing the list, 
elements are 6->5->4->3->2->1.
Example 2:

Input:
LinkedList: 2->7->8->9->10
Output: 10 9 8 7 2
Explanation: After reversing the list,
elements are 10->9->8->7->2.
Your Task:
The task is to complete the function reverseList() with head reference as the only argument and should return new head after reversing the list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 10
code:
 struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node*prev=NULL;
        Node*temp=head;
        while(temp!=NULL){
            Node*nxt=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nxt;
        }
        return prev;
    }
=>Detect Loop in linked list
EasyAccuracy: 43.49%Submissions: 338K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.

Example 1:

Input:
N = 3
value[] = {1,3,4}
x(position at which tail is connected) = 2
Output: True
Explanation: In above test case N = 3.
The linked list with nodes N = 3 is
given. Then value of x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.
Example 2:

Input:
N = 4
value[] = {1,8,3,4}
x = 0
Output: False
Explanation: For N = 4 ,x = 0 means
then lastNode->next = NULL, then
the Linked list does not contains
any loop.
Your Task:
The task is to complete the function detectloop() which contains reference to the head as only argument.  This function should return true if linked list contains loop, else return false.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 104
1 ≤ Data on Node ≤ 103
code:
bool detectLoop(Node* head)
    {
        // your code here
    Node*temp=head;
    Node*temp2=head;
    while(temp2!=NULL&&temp2->next!=NULL){
        temp=temp->next;
        temp2=temp2->next->next;
        if(temp==temp2)
        return true;
    }
    return false;
        
    }
=>Find length of Loop
EasyAccuracy: 44.26%Submissions: 101K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a linked list of size N. The task is to complete the function countNodesinLoop() that checks whether a given Linked List contains a loop or not and if the loop is present then return the count of nodes in a loop or else return 0. C is the position of the node to which the last node is connected. If it is 0 then no loop.



Example 1:

Input:
N = 10
value[]={25,14,19,33,10,21,39,90,58,45}
C = 4
Output: 7
Explanation: The loop is 45->33. So
length of loop is 33->10->21->39->
90->58->45 = 7. The number 33 is
connected to the last node to form the
loop because according to the input the
4th node from the beginning(1 based
index) will be connected to the last
node for the loop.
Example 2:

Input:
N = 2
value[] = {1,0}
C = 1
Output: 2
Explanation: The length of the loop
is 2.
Your Task:
The task is to complete the function countNodesinLoop() which contains the only argument as reference to head of linked list and return the length of the loop ( 0 if there is no loop).

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 500
0 <= C <= N-1

code:
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node*t=head;
    Node*t2=head;
    int count=0;
    while(t2!=NULL&&t2->next!=NULL){
        t=t->next;
        t2=t2->next->next;
        if(t==t2){
           t=head;
           while(t!=t2){
           t=t->next;
           t2=t2->next;
           }
           if(t==t2){
              
              t2=t2->next;
              count++;
              while(t2!=t){
                t2=t2->next;
                 count++;  
              }
              
              return count;
               
           }
        }
        
    }
    return count;
}
=>Check if Linked List is Palindrome
MediumAccuracy: 41.48%Submissions: 244K+Points: 4
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Example 1:

Input:
N = 3
value[] = {1,2,1}
Output: 1
Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.
Example 2:

Input:
N = 4
value[] = {1,2,3,4}
Output: 0
Explanation: The given linked list
is 1 2 3 4 , which is not a palindrome
and Hence, the output is 0.
Your Task:
The task is to complete the function isPalindrome() which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively.

Expected Time Complexity: O(N)
Expected Auxialliary Space Usage: O(1)  (ie, you should not use the recursive stack space as well)

Constraints:
1 <= N <= 105
code:
Node*reverse(Node*head){
        Node*prev=NULL;
        Node*temp=head;
        while(temp!=NULL){
            Node*nxt=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nxt;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
       
        Node*t=head;
        Node*t2=head;

        while(t2!=NULL&&t2->next!=NULL&&t2->next->next!=NULL){
            t=t->next;
            t2=t2->next->next;
        }
        t->next=reverse(t->next);
        t=t->next;
        t2=head;
        while(t!=NULL){
           if(t->data!=t2->data) 
           return false;
           t=t->next;
           t2=t2->next;
        }
        return true;
    }
=>Segregate even and odd nodes in a Link List
MediumAccuracy: 49.8%Submissions: 68K+Points: 4
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given a link list of size N, modify the list such that all the even numbers appear before all the odd numbers in the modified list. The order of appearance of numbers within each segregation should be same as that in the original list.

NOTE: Don't create a new linked list, instead rearrange the provided one.


Example 1:

Input: 
N = 7
Link List:
17 -> 15 -> 8 -> 9 -> 2 -> 4 -> 6 -> NULL

Output: 8 2 4 6 17 15 9

Explaination: 8,2,4,6 are the even numbers 
so they appear first and 17,15,9 are odd 
numbers that appear later.

Example 2:

Input:
N = 4
Link List:
1 -> 3 -> 5 -> 7

Output: 1 3 5 7

Explaination: There is no even number. 
So ne need for modification.

Your Task:
You do not need to read input or print anything. Your task is to complete the function divide() which takes N and head of Link List as input parameters and returns the head of modified link list. Don't create a new linked list, instead rearrange the provided one.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 105
1 ≤ Each element of the list ≤ 105
code:
Node* divide(int N, Node *head){
        // code here
        if(N==0||N==1)
        return head;
        Node*odd=new Node(0);
        Node*headodd=odd;
        Node*even=new Node(0);
        Node*evenhead=even;
        while(head!=NULL){
            if(head->data%2==0){
            even->next=new Node(head->data);
            even=even->next;
            }
            else{
                odd->next=new Node(head->data);
                odd=odd->next;
            }
            head=head->next;
        }
        even->next=headodd->next;
        odd->next=NULL;
        return evenhead->next;
    }

=>Nth node from end of linked list
EasyAccuracy: 41.18%Submissions: 279K+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example 1:

Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end is 8.  
Example 2:

Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.
Your Task:
The task is to complete the function getNthFromLast() which takes two arguments: reference to head and N and you need to return Nth from the end or -1 in case node doesn't exist.

Note:
Try to solve in a single traversal.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= L <= 106
1 <= N <= 106
code:
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node*temp=head;
       Node*t2=head;
       for(int i=0;i<n;i++){
           if(temp!=NULL)
        temp=temp->next;
        else
        return -1;
       }
        
        while(temp!=NULL){
            t2=t2->next;
            temp=temp->next;
        }
        return t2->data;
}
=>2095. Delete the Middle Node of a Linked List
Medium
2.9K
49
Companies
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
 

Example 1:


Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]
Explanation:
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node. 
Example 2:


Input: head = [1,2,3,4]
Output: [1,2,4]
Explanation:
The above figure represents the given linked list.
For n = 4, node 2 with value 3 is the middle node, which is marked in red.
Example 3:


Input: head = [2,1]
Output: [2]
Explanation:
The above figure represents the given linked list.
For n = 2, node 1 with value 1 is the middle node, which is marked in red.
Node 0 with value 2 is the only node remaining after removing node 1.
 

Constraints:

The number of nodes in the list is in the range [1, 105].
1 <= Node.val <= 105

code:
 ListNode* deleteMiddle(ListNode* head) {
       ListNode*curr=head;
        int count=1;
        while(curr->next!=NULL){
          curr=curr->next;
            count++;
        }
        if(count==1)
            return NULL;
       else if(count==2){
           
            head->next=NULL;
            return head;
        }
        else{
        int mid=count/2;
        ListNode*curr1=head;
        for(int i=1;i<mid;i++){
            curr1=curr1->next;
        }
        ListNode*node=curr1->next;
    
        curr1->next=curr1->next->next;
        
        delete(node);
        return head;
        }  
    }
=>148. Sort List
Medium
9.5K
289
Companies
Given the head of a linked list, return the list after sorting it in ascending order.

 

Example 1:


Input: head = [4,2,1,3]
Output: [1,2,3,4]
Example 2:


Input: head = [-1,5,3,4,0]
Output: [-1,0,3,4,5]
Example 3:

Input: head = []
Output: []
 

Constraints:

The number of nodes in the list is in the range [0, 5 * 104].
-105 <= Node.val <= 105
 

Follow up: Can you sort the linked list in O(n logn) time and O(1) memory (i.e. constant space)?

code:
  ListNode* sortList(ListNode* head) {
        //If List Contain a Single or 0 Node
        if(head == NULL || head ->next == NULL)
            return head;
        
        
        ListNode *temp = NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        
        // 2 pointer appraoach / turtle-hare Algorithm (Finding the middle element)
        while(fast !=  NULL && fast -> next != NULL)
        {
            temp = slow;
            slow = slow->next;          //slow increment by 1
            fast = fast ->next ->next;  //fast incremented by 2
            
        }   
        temp -> next = NULL;            //end of first left half
        
        ListNode* l1 = sortList(head);    //left half recursive call
        ListNode* l2 = sortList(slow);    //right half recursive call
        
        return mergelist(l1, l2);         //mergelist Function call
            
    }
    
    //MergeSort Function O(n*logn)
    ListNode* mergelist(ListNode *l1, ListNode *l2)
    {
        ListNode *ptr = new ListNode(0);
        ListNode *curr = ptr;
        
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val <= l2->val)
            {
                curr -> next = l1;
                l1 = l1 -> next;
            }
            else
            {
                curr -> next = l2;
                l2 = l2 -> next;
            }
        
        curr = curr ->next;
        
        }
        
        //for unqual length linked list
        
        if(l1 != NULL)
        {
            curr -> next = l1;
            l1 = l1->next;
        }
        
        if(l2 != NULL)
        {
            curr -> next = l2;
            l2 = l2 ->next;
        }
        
        return ptr->next;
    }

=>Given a linked list of 0s, 1s and 2s, sort it.
EasyAccuracy: 60.75%Submissions: 106K+Points: 2
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

Example 1:

Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.
Example 2:

Input:
N = 4
value[] = {2,2,0,1}
Output: 0 1 2 2
Explanation: After arranging all the
0s,1s and 2s in the given format,
the output will be 0 1 2 2.
Your Task:
The task is to complete the function segregate() which segregates the nodes in the linked list as asked in the problem statement and returns the head of the modified linked list. The printing is done automatically by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 103
code:
  Node* segregate(Node *head) {
        
        // Add code here
        int len=0,count=0,count1=0,count2=0;
        Node *temp=head;
        while(temp!=NULL){
            len++;
            if(temp->data==0)
            count++;
            else if(temp->data==1)
            count1++;
            else
            count2++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<count;i++){
            temp->data=0;
            temp=temp->next;
        }
        for(int i=count;i<(count+count1);i++){
            temp->data=1;
            temp=temp->next;
        }
        for(int i=count+count1;i<len;i++){
            temp->data=2;
            temp=temp->next;
        }
        return  head;
        
    }
=>Intersection of Two Linked Lists
EasyAccuracy: 35.3%Submissions: 47K+Points: 2
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given two linked lists, the task is to complete the function findIntersection(), that returns the intersection of two linked lists. Each of the two linked list contains distinct node values.

Example 1:

Input:
LinkedList1: 9->6->4->2->3->8
LinkedList2: 1->2->8->6
Output: 6 2 8
Your Task:
You task is to complete the function findIntersection() which takes the heads of the 2 input linked lists as parameter and returns the head of intersection list. Returned list will be automatically printed by driver code.
Note: The order of nodes in this list should be same as the order in which those particular nodes appear in input list 1.

Constraints:
1 <= n,m <= 104

Expected time complexity: O(m+n)
Expected auxiliary space: O(m+n)

code:
  Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_map<int,int>mp;
        while(head2!=NULL){
            mp[head2->data]++;
            head2=head2->next;
            
        }
        Node*temp=new Node(0);
        Node*tmp=temp;
        while(head1!=NULL){
            if(mp.find(head1->data)!=mp.end()){
               Node*t=new Node(head1->data);
                temp->next=t;
                temp=temp->next;
            }
            head1=head1->next;
        }
        temp->next=NULL;
        
        return tmp->next;
    }

=>Add 1 to a number represented as linked list
EasyAccuracy: 31.91%Submissions: 147K+Points: 2
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

Example 1:

Input:
LinkedList: 4->5->6
Output: 457 
Example 2:

Input:
LinkedList: 1->2->3
Output: 124 
Your Task:
Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
Note: The head represents the left-most digit of the number.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 103

code:
Node*reverse(Node*head){
        Node*prev=NULL;
        
        while(head!=NULL){
            Node*nxt=head->next;
            head->next=prev;
            prev=head;
            
            head=nxt;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node*temp= reverse(head);
        Node*ans=temp;
        while(temp!=NULL){
            
            if(temp->data==9){
                if(temp->next==NULL){
                    temp->data=0;
                    Node*t=new Node(1);
                    temp->next=t;
                    t->next=NULL;
                    break;
                    
                }
                else
                temp->data=0;
            }
            else{
                temp->data=temp->data+1;
                break;
            }
            temp=temp->next;
        }
        return reverse(ans);
    }
=>Add two numbers represented by linked lists
MediumAccuracy: 34.52%Submissions: 186K+Points: 4
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

Example 1:

Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0  
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).
Example 2:

Input:
N = 2
valueN[] = {6,3}
M = 1
valueM[] = {7}
Output: 7 0
Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).
Your Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.   

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(Max(N,M)) for the resultant list.

Constraints:
1 <= N, M <= 5000

code:
    Node*reverse(Node*head){
        Node*prev=NULL;
        
        while(head!=NULL){
            Node*nxt=head->next;
            head->next=prev;
            prev=head;
            
            head=nxt;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node*f=reverse(first);
        Node*s=reverse(second);
        Node*temp=new Node(0);
         Node*head=temp;
        int carry=0;
        while(f!=NULL||s!=NULL||carry){
            int sum=0;
            if(f!=NULL){
                sum+=f->data;
                f=f->next;
            }
            if(s!=NULL){
                sum+=s->data;
                s=s->next;
            }
            if(carry){
                sum+=carry;
            }
            carry=sum/10;
             Node*t=new Node(sum%10);
             temp->next=t;
             temp=temp->next;
        }
        return reverse(head->next);
       
    }
=>
Delete all occurrences of a given key in a doubly linked list
MediumAccuracy: 44.59%Submissions: 3K+Points: 4
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

You are given the head of a doubly Linked List and a Key. Your task is to delete all occurrences of the given key and return the new DLL.

Note :- There exists atleast 1 distinct element other than key.

Example:

Input: 
2<->2<->10<->8<->4<->2<->5<->2
2
Output: 
10<->8<->4<->5
Explanation: 
All Occurences of 2 have been deleted.
Your Task:

Complete the function void deleteAllOccurOfX(struct Node** head_ref, int key), which takes the reference of the head pointer and an integer value key. Delete all occurrences of the key from the given DLL.

Expected Time Complexity: O(N).

Expected Auxiliary Space: O(1).

Constraints:

0<=Number of Nodes<=104

-103<=Node Value <=103

code:
    void deleteAllOccurOfX(struct Node** head, int x) {
        // Write your code here
        Node*temp=*head;
        Node*nxt=NULL;
        while(temp!=NULL){
            if(temp->data==x){
                nxt=temp->next;
                if(temp->prev==NULL)
                    *head=temp->next;
                
                 if(temp->next!=NULL)
                 temp->next->prev=temp->prev;
                 if(temp->prev!=NULL)
                 temp->prev->next=temp->next;
                 delete(temp);
                 temp=nxt;
            }
            else
        temp=temp->next;
            
        }
    }
=>Find pairs with given sum in doubly linked list
EasyAccuracy: 66.01%Submissions: 16K+Points: 2
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given a sorted doubly linked list of positive distinct elements, the task is to find pairs in a doubly-linked list whose sum is equal to given value target.

 

Example 1:

Input:  
1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9
target = 7
Output: (1, 6), (2,5)
Explanation: We can see that there are two pairs 
(1, 6) and (2,5) with sum 7.
 

Example 2:

Input: 
1 <-> 5 <-> 6
target = 6
Output: (1,5)
Explanation: We can see that there is one pairs  (1, 5) with sum 6.

 

Your Task:
You don't need to read input or print anything. Your task is to complete the function findPairsWithGivenSum() which takes head node of the doubly linked list and an integer target as input parameter and returns an array of pairs. If there is no such pair return empty array.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
Constraints:
1 <= N <= 105
1 <= target <= 105

code:
vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int,int>>ans;
        Node*temp=head;
        Node*start=head;
        while(temp->next!=NULL){
            temp=temp->next;
            
        }
        while(start->data<temp->data){
            if(start->data+temp->data>target){
                temp=temp->prev;
            }
            else if(start->data+temp->data<target){
                start=start->next;
            }
            else{
                ans.push_back({start->data,temp->data});
                start=start->next;
                temp=temp->prev;
            }
        }
        return ans;
    }
=>Remove duplicates from a sorted doubly linked list
BasicAccuracy: 49.27%Submissions: 2K+Points: 1
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given a doubly linked list of n nodes sorted by values, the task is to remove duplicate nodes present in the linked list.

Example 1:

Input:
n = 6
1<->1<->1<->2<->3<->4
Output:
1<->2<->3<->4
Explanation:
Only the first occurance of node with value 1 is 
retained, rest nodes with value = 1 are deleted.
Example 2:

Input:
n = 7
1<->2<->2<->3<->3<->4<->4
Output:
1<->2<->3<->4
Explanation:
Only the first occurance of nodes with values 2,3 and 4 are 
retained, rest repeating nodes are deleted.
Your Task:
You have to complete the method removeDuplicates() which takes 1 argument: the head of the linked list.  Your function should return a pointer to a linked list with no duplicate element.

Constraint:
1 <= n <= 105
Expected Time Complexity: O(n)
Expected Space Complexity: O(1)
code:
Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        Node*prev=head;
         Node*curr=head;
         while(curr!=NULL){
            if(curr->data!=prev->data){
                curr->prev=prev;
                prev->next=curr;
                prev=curr;
            }
            curr=curr->next;
         }
         prev->next=NULL;
         return head;
    }
=>25. Reverse Nodes in k-Group
Hard
10.8K
569
Companies
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Example 2:


Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 5000
0 <= Node.val <= 1000
 

Follow-up: Can you solve the problem in O(1) extra memory space?

code:
ListNode*solve(ListNode*head,int k,int len){
  if(len<k)
  return head;
  ListNode*temp=head;
  ListNode*prev=NULL;
  ListNode*nxt=NULL;
  int count=0;
  while(count<k&&temp!=NULL){
      nxt=temp->next;
      temp->next=prev;
      prev=temp;
      temp=nxt;
      count++;
  }
  head->next=solve(nxt,k,len-k);
  return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode*temp=head;
       int len=0;
       while(temp!=NULL){
           temp=temp->next;
           len++;
       }
       return solve(head,k,len);
    }

=>Rotate a Linked List
MediumAccuracy: 39.95%Submissions: 180K+Points: 4
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given a singly linked list of size N. The task is to left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.

Example 1:

Input:
N = 5
value[] = {2, 4, 7, 8, 9}
k = 3
Output: 8 9 2 4 7
Explanation:
Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
Rotate 3: 8 -> 9 -> 2 -> 4 -> 7
Example 2:

Input:
N = 8
value[] = {1, 2, 3, 4, 5, 6, 7, 8}
k = 4
Output: 5 6 7 8 1 2 3 4

Your Task:
You don't need to read input or print anything. Your task is to complete the function rotate() which takes a head reference as the first argument and k as the second argument, and returns the head of the rotated linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 103
1 <= k <= N
code:
Node* rotate(Node* head, int k)
    {
        // Your code here
        
        Node*temp=head;
        int len=1;
        while(len<k&&temp->next!=NULL){
            temp=temp->next;
            len++;
            
        }
        if(temp->next==NULL)
        return head;
        
        Node*nxt=temp->next;
        Node*newhead=nxt;
        temp->next=NULL;
        while(nxt->next!=NULL){
            nxt=nxt->next;
        }
        nxt->next=head;
        return newhead; 
    }
=>Flattening a Linked List
MediumAccuracy: 51.53%Submissions: 110K+Points: 4
Lamp
Stand out from the crowd. Prepare with Complete Interview Preparation  

Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 

Note: The flattened list will be printed using the bottom pointer instead of the next pointer.
For more clarity have a look at the printList() function in the driver code.

 

Example 1:

Input:
5 -> 10 -> 19 -> 28
|     |     |     | 
7     20    22   35
|           |     | 
8          50    40
|                 | 
30               45
Output:  5-> 7-> 8- > 10 -> 19-> 20->
22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation:
The resultant linked lists has every 
node in a single level.
(Note: | represents the bottom pointer.)
 

Example 2:

Input:
5 -> 10 -> 19 -> 28
|          |                
7          22   
|          |                 
8          50 
|                           
30              
Output: 5->7->8->10->19->22->28->30->50
Explanation:
The resultant linked lists has every
node in a single level.

(Note: | represents the bottom pointer.)
 

Your Task:
You do not need to read input or print anything. Complete the function flatten() that takes the head of the linked list as input parameter and returns the head of flattened link list.

Expected Time Complexity: O(N*N*M)
Expected Auxiliary Space: O(1)

Constraints:
0 <= N <= 50
1 <= Mi <= 20
1 <= Element of linked list <= 103
code:
Node*solve(Node*l1,Node*l2){
        Node*temp=new Node(0);
        Node*res=temp;
        while(l1!=NULL&&l2!=NULL){
            if(l1->data<l2->data){
                temp->bottom=l1;
                l1=l1->bottom;
                
            }
            else{
                temp->bottom=l2;
                l2=l2->bottom;
            }
            temp=temp->bottom;
        }
        while(l1!=NULL){
            temp->bottom=l1;
            l1=l1->bottom;
            temp=temp->bottom;
        }
         while(l2!=NULL){
            temp->bottom=l2;
            l2=l2->bottom;
            temp=temp->bottom;
        }
        return res->bottom;
    }
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL||root->next==NULL)
   return root;
   root->next=flatten(root->next);
   root=solve(root,root->next);
return root;
}
=>138. Copy List with Random Pointer
Medium
10.9K
1.1K
Companies
A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:

val: an integer representing Node.val
random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
Your code will only be given the head of the original linked list.

 

Example 1:


Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]
Example 2:


Input: head = [[1,1],[2,1]]
Output: [[1,1],[2,1]]
Example 3:



Input: head = [[3,null],[3,0],[3,null]]
Output: [[3,null],[3,0],[3,null]]
 

Constraints:

0 <= n <= 1000
-104 <= Node.val <= 104
Node.random is null or is pointing to some node in the linked list.
code:
Node* copyRandomList(Node* head) {
       Node*temp=head;
       if(head==NULL)
       return NULL;
       while(temp!=NULL){
           Node*nxt=temp->next;
           temp->next=new Node(temp->val);
           temp->next->next=nxt;
           temp=nxt;
       }
       temp=head;
       while(temp!=NULL){
           if(temp->next!=NULL){
               temp->next->random=(temp->random!=NULL)?temp->random->next:NULL;
               temp=temp->next->next;
           }
       }
       Node*org=head;
       Node*copy=head->next;
       temp=copy;
       while(org!=NULL&&copy!=NULL){
           if(org->next->next!=NULL)
           org->next=org->next->next;
           else if(org->next->next==NULL)
           org->next=NULL;
           
            if(copy->next==NULL)
            copy->next=NULL;
            else if(copy->next->next!=NULL)
           copy->next=copy->next->next;

           org=org->next;
           copy=copy->next;
       }
       return temp;
    }
=>




