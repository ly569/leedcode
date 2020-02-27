int get_next(int x) {
    int temp = 0;
    while (x) {
        temp += (x % 10) * (x % 10);
        x /= 10;
    }
    return temp;
}

bool isHappy(int n){
    int p = n, q = n;
    while (q != 1) {
        p = get_next(p);
        q = get_next(get_next(q));
        if (p == q) break;
    }
    return (q == 1);
}