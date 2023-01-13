void mayor(double *matriz, int longitud){
    int i, index;
    double max=*matriz, temp ;
    for(i=1;i<longitud;i++)
    {
      if(max <= *matriz)
      {
     temp = max;
     max = *matriz;
     *matriz = temp;
     index=i;
     }
     matriz++;
   }
    printf("\n\nEl menor es: %lf", max);
    printf("\n\nLa posicion es: %d", index);
}

void menor(double *matriz, int longitud){
    int i, index;
    double min=*matriz, temp ;
    for(i =1;i<longitud;i++) { 

    if(min >= *matriz){
        temp = *matriz;
        *matriz = min;
        min = temp;
        index=i;
    }
     matriz++;
   }
    printf("\n\nEl menor es: %lf", min);
    printf("\n\nLa posicion es: %d", index);
}
