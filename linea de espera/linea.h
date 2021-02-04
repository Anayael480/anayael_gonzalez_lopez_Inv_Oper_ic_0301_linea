# include  <stdio.h>
# include  <stdlib.h >
int entradaCli [ 150 ];
int cajas [ 50 ];
int cap_salidas [ 100 ];
int colaespera [ 100 ];
int hr_ini, hr_fin, No_cajas, cap_uni;
int j, f, i, h;
int out [ 50 ];
int salida [ 50 ];
int aux [ 50 ];
int auxi [ 50 ];
void  capacidadSal ( int cap_salidas [ 100 ], int cajas [ 50 ], int cap_uni, int hr_ini, int hr_fin);
Mostrartab vacío ( int hr_ini, int hr_fin, int entradaCli [ 150 ], int cajas [ 50 ]);
void  col_Espera ( int cajas [ 50 ], int entradaCli [ 150 ], int hr_ini, int hr_fin, int cap_uni);
 int  main ()
 {

 	printf (" ============================== \n ");
 	printf (" GESTION DE LINEA DE ESPERA DE UN MERCADO \ n  " );
 	printf ( " ============================== \ n " );
 	printf ( " ingresa el horario / n " );
 	printf ( " ingresa hora de inicio \ n : " );
 	scanf ( " % i " , & hr_ini);
 	printf ( " ingresa hora final \ n : " );
 	scanf ( " % i " , & hr_fin);
 	printf ( " capacidad unitaria " );
 	scanf ( " % i " , & cap_uni);
 	printf ( " ingresa la cantidad de entrada de clientes por hora \ n " );
 	para (j = hr_ini; j <hr_fin; ++ j)
 	{
 		scanf ( " % i " , & entradaCli [j]);
	}
	 printf ( " ingresa numero de cajas abiertas por hora \ n " );
	 para (f = hr_ini; f <hr_fin; ++ f)
	 {
	 	scanf ( " % i " , & cajas [f]);
	 }

   Mostrartab (hr_ini, hr_fin, entradaCli, cajas);
   col_Espera (cajas, entradaCli, hr_ini, hr_fin, cap_uni);
	 return  0 ;

} 
