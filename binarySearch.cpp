int binarysearch(int arr[], int n, int k) {
        // code here
        int min =0, max = n-1, mid = (min+max)/2;
        while(min<=max){
            if(arr[mid]==k)
                return mid;
            else if(arr[mid]<k)
                    min = mid+1;
                else
                    max = mid-1;
            mid = (min+max)/2;
        }
        if(min>max)
            return -1;
        return mid;
    }
