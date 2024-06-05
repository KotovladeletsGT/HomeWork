int sum_between_ab (int from, int to, int size, int a[]) {
    int sum = 0;
    int i = 0;
        int cap;
    if (from > to) {    //Если индекс начала больше индекса конца - меняем конец и начало местами
    cap = from;
    from = to;
    to = cap;
    }
    while (i < size) {
        if ( (a[i] >= from) && (a[i] <= to) ) {
        sum = sum + a[i];
        }
    i++;
    }
    return sum;
}