int *twoSum(int* nums , int numsSize , int target , int* returnSize){
    for (int i=0 ; i<numsSize ; i++){
        for (int k=i+1 ; k<numsSize ; k++){
            if ( nums[i] + nums[k] == target ){
                int *result = (int*)malloc(2*sizeof(int));
                result[0] = i ;
                result[1] = k ;   
                *returnSize = 2 ;         
                return result ;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}