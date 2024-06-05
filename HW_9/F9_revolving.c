
void swap_negmax_last(int size, int a[]) {
    int i = 0;
    int neg;
    int answ;
    int cap;
    int flag = 0;
    while (i < size) {
        if (a[i] < 0) {
            neg = a[i];
            answ = i;
            flag = 1;
            break;
        }
    i++;
    }
    if (flag) {
        i = 0;
        while (i < size) {
            if (a[i] < 0 ) {
                if (a[i] > neg) {
                    neg = a[i];
                    answ = i;
                }
            }
        i++;
        }
        cap = a[answ];
        a[answ] = a[size - 1];
        a[size - 1] = cap;
    }

}
