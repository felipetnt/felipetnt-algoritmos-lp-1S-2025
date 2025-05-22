int  maior2Numeros(int a, int b){

    if(a > b){
        return a;
    } else { 
        return b;
    }
}

int  maior_3n(int a, int b, int c){
    return maior2Numeros(maior2Numeros(a,b),c);
}

int  menor_2n(int x, int y){
    if(x < y){
        return x;
    } else {
        return y;
    }
}

int  menor_3n(int x, int y, int z){
    return menor_2n(menor_2n(x,y),z);
}