# include "linea.h "
 void  capacidadSal ( int cap_salidas [ 100 ], int cajas [ 50 ], int cap_uni, int hr_ini, int hr_fin)
 {
    para (i = hr_ini; i <hr_fin; i ++)
  {
    cap_salidas [i] = cajas [i] * cap_uni;	// @param realiza la operacion para obtener la capacidad de salidas
    printf ( " \ t % i " , cap_salidas [i]);
   }
 }
 void  col_Espera ( int cajas [ 50 ], int entradaCli [ 150 ], int hr_ini, int hr_fin, int cap_uni) // @param funcion para obtener la cola de espera
 {
   int aux [ 50 ];
  para (i = hr_ini; i <hr_fin; i ++)
  {
    aux [i] = (entradaCli [i]) - (cap_uni * cajas [i]);
    aux [i] = aux [i] + aux [i- 1 ];
    fflush (stdin);
  }
  
 }
 void  Mostrartab ( int hr_ini, int hr_fin, int entradaCli [ 150 ], int cajas [ 50 ]) // @param funcion que muestra la tabla con los resultados
 {
  printf ( " \ n Horas \ t \ t " );
para (h = hr_ini; h <hr_fin; h ++)
    {
  printf ( " \ t % i - % i " , h, h + 1 );
   }
   printf ( " \ n llegadas clientes: " );
   para (j = hr_ini; j <hr_fin; j ++)
   {
    printf ( " \ t % i " , entradaCli [j]);
   }
    printf ( " \ n No. de cajas abiertas: " );
    para (f = hr_ini; f <hr_fin; f ++)
    {
    printf ( " \ t % i " , cajas [f]);
  }
    printf ( " \ n capacidad de salidas: " );
    capacidadSal (cap_salidas, cajas, cap_uni, hr_ini, hr_fin);

    printf ( " \ n salidas de clientes: " );
    capacidadSal (cap_salidas, cajas, cap_uni, hr_ini, hr_fin);

   printf ( " \ n Cola de espera: \ t " );
   int auxi [ 50 ];
   para (i = hr_ini; i <hr_fin; i ++)
   {
     auxi [i] = (entradaCli [i]) - (cap_uni * cajas [i]);
     auxi [i] = auxi [i] + auxi [i- 1 ];
     printf ( " \ t % i " , auxi [i]);
   }
  }
