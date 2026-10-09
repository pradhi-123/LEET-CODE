class Solution {
    public int monkeyMove(int n) {
        long MOD = 1000000007L;
        long res=1;
        long bas=2;
        while(n>0) {
            if(n%2==1) {
                res=(res*bas)%MOD;
            }
            bas=(bas*bas)%MOD;
            n/=2;
        }
        res = res - 2;
        if (res < 0)
            res = res + MOD;
    return (int)res;
    }
}