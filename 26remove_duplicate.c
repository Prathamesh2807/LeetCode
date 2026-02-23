int removeDuplicates(int* nums, int numsSize) {
    int k =0 , i;
    for (int i=0 ; i<numsSize-1; i++){
        if (nums[i] != nums[i+1]){
            nums[k] = nums[i] ;
            k = k+1;
        }
    }
    nums[k] = nums[numsSize-1];
    return k+1 ;
}