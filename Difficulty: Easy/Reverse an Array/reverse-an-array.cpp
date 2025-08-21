class Solution {
  public:
  void reverseArr(vector<int>&arr,int i,int n){
      if(i>=n/2) return ;
      swap(arr[i], arr[n-i-1]);
      reverseArr(arr,i+1,n);
  }
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        reverseArr(arr,0,n);
        
    }
};