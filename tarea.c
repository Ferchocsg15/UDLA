void mayor(double *matriz, int longitud){
    int i;
    double max=*matriz, temp ;
    for(i=1;i<longitud;i++)
    {
      if(max <= *matriz)
      {
     temp = max;
     max = *matriz;
     *matriz = temp;
     }
     matriz++;
   }
    printf("\n\nEl menor es: %lf", max);
    printf("\n\nLa posicion es: %lf", max);
}

void menor(double *matriz, int longitud){
    int i;
    double min=*matriz, temp ;
    for(i =1;i<longitud;i++) { 

    if(min >= *matriz){
        temp = *matriz;
        *matriz = min;
        min = temp;
    }
     matriz++;
   }
    printf("\n\nEl menor es: %lf", min);
    printf("\n\nLa posicion es: %lf", min);
}
