int count_bigger_abs(int n, int a[]){
    int answ = 0;
    int i = 0;
    int max = a[0];
    int mod = 0;
    while (i < n) {
        if (a[i] > max){
            max = a[i];
		}
    i++;
    }
    i = 0;
    while (i < n) {
        if (a[i] <= 0){
			mod = -1 * a[i];
            if (mod > max){
                answ++;
            }
        }
    i++;
    }
    return answ;
}
