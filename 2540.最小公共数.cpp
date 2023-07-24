int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int *p = nums1, *q = nums2;
    int *p1 = p ,*q1 = q;
    while(*p != *q){
        if(*p > *q){
            q++;
        }else{
            p++;
        }
        if(p == p1 + nums1Size || q == q1 + nums2Size){
            return -1;
        }
    }
    return *p;
}


