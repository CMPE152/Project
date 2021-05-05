//int factorial(int n);

int factorial(int n){
    int product = 1;   
    while (n > 1){
        product = product * n;
        n--;
    }
    return product;
}

void main (){
    int i;
    print("please input the n: ");
    get(i);
    i = factorial(i);
    print("the n! is: ");
    println(i);
}