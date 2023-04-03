class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;

        vector <int> bin;
        while(n>1){
            if(n%2==0)
                bin.push_back(1);
            else
                bin.push_back(0);
            n/=2;
        }
        int num=0;
        for(int j=0;j<bin.size();j++){
            num += bin[j]*pow(2,j);
        }
    return num;
    }
};
