class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> arr(n+1);

        int i2;
        int i3;
        int i5;

        i2 = i3 = i5 = 1;

        arr[1]=1;

        for(int i=2;i<=n;i++){
            int i2uglynum = arr[i2]*2;
            int i3uglynum = arr[i3]*3;
            int i5uglynum = arr[i5]*5;

            int minuglynum = min({i2uglynum,i3uglynum,i5uglynum});

            arr[i] = minuglynum;



            if(minuglynum == i2uglynum)
                i2++;
            if(minuglynum == i3uglynum)
                i3++;
            if(minuglynum == i5uglynum)
                i5++;
        }

        return arr[n]; //nth ugly num
    }
};