long long fib(int n){
    long long num[105] = {0, 1, 1};
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= 1000000007;    
        }
    return num[n];
}