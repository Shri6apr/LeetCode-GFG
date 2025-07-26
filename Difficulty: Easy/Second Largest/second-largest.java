class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int second=Integer.MIN_VALUE;
        int first=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            
            if(arr[i]>first ){
                second=first;
                first=arr[i];
                
                
            }
            
            else if(second < arr[i] && arr[i] <first){
                second =arr[i];
            }
            
            
        }
        return (second == Integer.MIN_VALUE) ? -1:second;
    }
}

