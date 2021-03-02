while (frase[cont] != '\0'){
    if (frase[cont + 1] != ' ' && frase[cont + 1] != '\n' && frase[cont + 1] != '\0'){ 
        comp++;
    }
    else{
        if (comp >= max){
            max = comp;
            comp = 1;
            cont++;
        }
        else{
            cont++;
        }
    }
    cont++;
}
    return max;
