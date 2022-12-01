Selection Sort
Given an unsorted array of size N, use selection sort to sort arr[] in increasing order.
Input:
N = 5
arr[] = {4, 1, 3, 9, 7}
Output:
1 3 4 7 9
Explanation:
Maintain sorted (in bold) and unsorted subarrays.
Select 1. Array becomes 1 4 3 9 7.
Select 3. Array becomes 1 3 4 9 7.
Select 4. Array becomes 1 3 4 9 7.
Select 7. Array becomes 1 3 4 7 9.
Select 9. Array becomes 1 3 4 7 9.
code:
 void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<n-1;i++){
           int mini=i;
           for(int j=i+1;j<n;j++){
               if(arr[mini]>arr[j]){
                   mini=j;
               }
           }
           int temp=arr[i];
           arr[i]=arr[mini];
           arr[mini]=temp;
       }
       
    }

Bubble Sort

Given an Integer N and a list arr. Sort the array using bubble sort algorithm.
Example 1:

Input: 
N = 5
arr[] = {4, 1, 3, 9, 7}
Output: 
1 3 4 7 9

code:
void bubbleSort(int arr[], int n)
    {
        // Your code here 
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
Insertion Sort
The task is to complete the insert() function which is used to implement Insertion Sort.

 void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++){
            int curr=arr[i];
            int j=i-1;
            while(arr[j]>curr&&j>=0){
                arr[j+1]=arr[j];
                j--;
                
            }
            arr[j+1]=curr;
        }
    }
Merge Sort:
Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.
Example 1:

Input:
N = 5
arr[] = {4 1 3 9 7}
Output:
1 3 4 7 9

void merge(int arr[], int l, int r)
    {
         // Your code here
         int m=(l+r)/2;
         int l1=m-l+1;
         int l2=r-m;
         int *first=new int[l1];
         int *second=new int[l2];
         int k=l;
         for(int i=0;i<l1;i++){
             first[i]=arr[k++];
         }
         k=m+1;
         for(int j=0;j<l2;j++){
             second[j]=arr[k++];
         }
         int index1=0;
         int index2=0;
          k=l;
         while(index1<l1&&index2<l2){
             if(first[index1]<second[index2]){
                 arr[k++]=first[index1++];
             }
             else
             arr[k++]=second[index2++];
         }
         while(index1<l1){
             arr[k++]=first[index1++];
             
         }
         while(index2<l2){
             arr[k++]=second[index2++];
         }
         
    }
public:
    
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
        return;
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,r);
    }

=>quick sort

Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).

Note: The low and high are inclusive.

Implement the partition() and quickSort() functions to sort the array.


Example 1:

Input: 
N = 5 
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9
code:
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high)
        return;
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[low];
       int cnt=0;
       for(int i=low+1;i<=high;i++){
           if(arr[i]<=pivot)
           cnt++;
       }
       int pi=low+cnt;
       swap(arr[pi],arr[low]);
       int i=low;
       int j=high;
       while(i<pi&&j>pi){
           while(arr[i]<=arr[pi])
           i++;
           while(arr[j]>arr[pi])
           j--;
           
           if(i<pi&&j>pi)
           swap(arr[i],arr[j]);
       }
       return pi;
       
    }
    