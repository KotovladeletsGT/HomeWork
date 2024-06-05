int is_two_same(int size, int a[]) {
	int i = 0;
	int j = 0;
	
	while (i < (size - 1)) {
        j = i + 1;
        while (j < size) {
				if (a[j] == a[i]) {
					return 1;
				} 
			j++;	
			}
        i++; 
        }
	return 0;
}
	

