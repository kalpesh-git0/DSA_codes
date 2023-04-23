int minimumNumber(int n,vector<int> &arr){
        // Code here
        int h = arr[0];
        for (auto i: arr){
            h  =__gcd(i,h);
        }
        return h;
    }
