
int find_max_array(int size, int a[]){
    int max_num = a[0];
    int i = 0;
    while (i < size) {
        if (a[i] > max_num){
            max_num = a[i];
        }
    i++; 
    }
    return max_num;
}
