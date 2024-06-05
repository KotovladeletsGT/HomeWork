void sort_even_odd(int n, int a[]) {
    int even[n];
    int odd[n];
    int ec = 0, oc = 0, i = 0, j = 0;

    while (i < n){
        if(a[i] % 2 == 0) {
            even[ec] = a[i];
            ec++;
        } else {
            odd[oc] = a[i];
            oc++;
        }
    i++;
    }

    i = 0;

    while (i < ec) {
        a[i] = even[i];
    i++;
    }

    while (j < oc) {
        a[ec + j] = odd[j];
    j++;
    }

}
