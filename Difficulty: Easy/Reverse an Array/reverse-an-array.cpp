class Solution {
  public:
  void reverseArr(vector<int>&arr,int l,int r){
      if(l>=r) return ;
      swap(arr[l], arr[r]);
      reverseArr(arr,l+1,r-1);
  }
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        reverseArr(arr,0,n-1);
        
    }
};