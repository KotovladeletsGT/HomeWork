void change_max_min(int size, int a[]){
    int min = a[0];
    int max = a[0];
    int cap, counter, addrMin = 0, addrMax = 0;
    for (counter = 1; counter < size; counter ++) {
       
        if (a[counter] < min) {
            min = a[counter];
            addrMin = counter;
        }
        if (a[counter] > max) {
            max = a[counter];
            addrMax = counter;
        }
    }
    cap = a[addrMin];
    a[addrMin] = a[addrMax];
    a[addrMax] = cap;
}
