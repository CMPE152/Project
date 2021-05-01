
float ALU (float oper1, float oper2, int mode){
    float output;
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
    }
    return output;
}

void main(){
    float oper1;
    float oper2;
    int operation;
    println("please input 2 operand: ");
    get(oper1, oper2);
    
    println("0 for plus"); 
    println("1 for minus");
    println("2 for multiply");
    println("3 for devide");
    println("please chose the operation you want: ");
    get(operation);
    float result = ALU(oper1, oper2, operation);
    print("the calculation result is: ");
    println(result);
    
}