int factorial(int n){
    int product = 1;   
    while (n > 1){
        product = product * n;
        n--;
    }
    return product;
}

float ALU (float oper1, float oper2, int mode){
    float output;
    int oper_num;
    switch(mode){
        case 0:{
        output = oper1 + oper2;
        }
        case 1:{
        output = oper1 - oper2;
        }
        case 2:{
        output = oper1 * oper2;
        }
        case 3:{
        output = oper1 / oper2;
        }
        case 4:{ 
        output = oper1 % oper2;
        }
    }
    return output;
}

void main(){
    float oper1,oper2;
    int int_oper1, int_oper2;
    int fact_n;
    int operation;
    char expr;
    float op = 2.25 + 4 * (1 + 3.0 / 2);
    println ("2.25 + 4 * (1 + 3.0 / 2) = ", op);

    println("0 -> plus"); 
    println("1 -> minus");
    println("2 -> multiply");
    println("3 -> devide");
    println("4 -> modulo");
    println("5 -> factorial");
    println("please chose the operation you want: ");
    get(operation);
    if (operation == 5){
        println("please enter a number for factorial: ");
        get(fact_n);
        int fact_res = factorial(fact_n);
        println(fact_n, "! = ", fact_res);
    }else{
        println("please input 2 operand: ");
        get(oper1, oper2);
        switch(operation){
            case 0:{
                expr = '+';
            }
            case 1:{
                expr = '-';
            }
            case 2:{
                expr = '*';    
            }
            case 3:{
                expr = '/';
            }
            case 4:{
                expr = '%';
            }
        }
        float result = ALU(oper1, oper2, operation);
        println(oper1:2:2, " ", expr, " ", oper2:2:2, " = ", result:2:2);
    }       
}