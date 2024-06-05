int compression(int a[], int b[], int N){
    int tmp = 0;
    int i = 1;
    int counter1 = 0;
    int counter2 = 1;
    if(a[0] == 1){
        b[0] = 0;
        counter1++;
    }

    tmp = a[0];

    while ( i < N)  {
        if(a[i] != tmp) {
            b[counter1] = counter2;
            counter1++;
            counter2 = 1;
            tmp = a[i];
        } else {
            counter2++;
        }
        i++;
    }

    b[counter1] = counter2;
    counter1++;
    return counter1;
}
