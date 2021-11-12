https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

void sort012(int a[], int n){
    int zero = 0;
    int one = 0;
    int two = 0;
    
    for(int i = 0; i < n ; i++){
        switch(a[i]){
            case 0:
                zero++;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
        }
    }
    int i = 0;
    while(zero > 0){
        a[i++] = 0;
        zero--;
    }
    while(one > 0){
        a[i++] = 1;
        one--;
    }
    while(two > 0){
        a[i++] = 2;
        two--;
    }
}
