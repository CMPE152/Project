int search(int[] arr,int n){
    
    int i = 0;
    int value;
    
    println("Enter serach number in your array");
    get(value);
    
    do{
        if(arr[i] == value){
            return i;
        }
        i++;
    }while(i<n);
    
    return -1;
}

void main(){
    int num = 5;
    int a[num];
    int value;

    for(int i=0; i < num; i++){
        println("Enter ", i, (i==1)?"st":((i==2)?"nd":(i==3?"rd":"th"))," number in array: ");
        get(value);
        a[i] = value;
    }

    int result = search(a, num);
    
    println((result == -1)?"Can't find the number in your array, index is now set to: ":"Find the number in the array at index location: ", result);
}

