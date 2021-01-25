#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main(){ 
   int opcion, salir; 
   
   while(0==0){
   	system("cls");
   printf("\tBienvenido a su app Gasocentinel");
    printf("\n");
   printf("\nEscoja su opcion deseada:");
    printf("\n");
   printf("\n1. direccion de gasolinera y precios");
    printf("\n");
   printf("\n2. precio del barril Brent(no disponible en beta)");
    printf("\n");
   printf("\n3. precio del barril WTI(no disponible en beta)");
    printf("\n");
   printf("\n4. precio de la Mezcla Mexicana(no disponible en beta)");
    printf("\n");
   printf("\n5. desea ingresar una direccion de una gasolinera que no este registrada y sus precios(no disponible en beta)");
    printf("\n");
   printf("\n0. salir");
    printf("\n");
   printf("\nOpcion: ");
   /* escoge una opcion */
    scanf("%d" ,&opcion);
    system("cls");
    
    if(opcion == 1){
      	 printf("\nDireccion de gasolineras disponibles:");
      	  printf("\n");
      	 printf("\n1. Cumbres de Maltrata No. 464 y G, Ramos Millan, Col. Seccion 2a. Del Periodista, 03620 Ciudad de México");
      	  printf("\n");
      	 printf("\n2. Área Federal Central de Abastos, Iztapalapa, Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n3. Angel Urraza No. 1714, Vértiz Narvarte, Benito Juárez, 03600 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n4. Calz. de Tlalpan 985, Niños Héroes, Benito Juárez, 03610 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n5. Av. División del Nte. No. 1231, Vértiz Narvarte, Benito Juárez, 03600 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n6. Torres Adalid No. 1401, Narvarte Poniente, Benito Juárez, 03020 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n7. Petén No. 228, Narvarte Poniente, Benito Juárez, 03020 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n8. Av. Víctor Hugo No. 152, Portales Nte, Benito Juárez, 03300 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n9. Av. División del Nte. 1917, Emperadores, Benito Juárez, 03320 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n10. Calz. de Tlalpan No. 1395, Portales Nte, Benito Juárez, 03300 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n11. Av. Pdte. Plutarco Elías Calles No. 1637, Portales Nte, Benito Juárez, 03300 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n12. Soria No. 6, Álamos, Benito Juárez, 03400 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n13. Unnamed Road, Portales Sur, 03300 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n14. Av. División del Nte. No. 2570, San Diego Churubusco, Coyoacán, 04120 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n15. código 2, Col del Valle Centro, Benito Juárez, 03103 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n16. Obrero Mundial 133, código 2, Col del Valle Nte, Benito Juárez, 03100 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n17. Xola 18, Álamos, Benito Juárez, 03400 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n18. Dakota 56, Nápoles, Benito Juárez, 03810 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n19. Avenida Patriotismo 263, San Pedro de los Pinos, Benito Juárez, 03800 Ciudad de México, CDMX");
      	  printf("\n");
      	 printf("\n20. Avenida Patriotismo 191, Escandón I Secc, Miguel Hidalgo, 11800 Ciudad de México, CDMX");
      	  printf("\n");
		 printf("\nOpcion: ");
		 scanf("%d" ,&opcion); 
}
		 if(opcion == 1){
		  printf("\n");
		 printf("Magna=20.29, Premium=20.99, Diesel=20.49");
		}
         else if(opcion == 2){
         	printf("\n");
		printf("Magna=20.19, Premium=20.50, Diesel=21.19");
		}
		else if(opcion == 3){
			printf("\n");
		printf("Magna=20.15, Premium=20.45, Diesel=22.18");
		}	  
		else if(opcion == 4){
			printf("\n");
		printf("Magna=20.18, Premium=20.52, Diesel=22.19");
		}	  
		else if(opcion == 5){
			printf("\n");
		printf("Magna=20.15, Premium=20.45, Diesel=22.18");
		}	  
		else if(opcion == 6){
			printf("\n");
		printf("Magna=20.15, Premium=20.45, Diesel=22.18");
		}	  
		else if(opcion == 7){
			printf("\n");
		printf("Magna=19.55, Premium=20.41, Diesel=22.10");
		}	  
		else if(opcion == 8){
			printf("\n");
		printf("Magna=20.01, Premium=20.42, Diesel=21.19");
		}	  
		else if(opcion == 9){
			printf("\n");
		printf("Magna=20.16, Premium=19.45, Diesel=21.21");
		}	  
		else if(opcion == 10){
			printf("\n");
		printf("Magna=20.15, Premium=19.19, Diesel=21.17");
		}	  
		else if(opcion == 11){
			printf("\n");
		printf("Magna=19.15, Premium=19.45, Diesel=21.18");
		}	  
		else if(opcion == 12){
			printf("\n");
		printf("Magna=20.9, Premium=20.1, Diesel=21.46");
		}	  
		else if(opcion == 13){
			printf("\n");
		printf("Magna=19.49, Premium=19.48, Diesel=21.14");
		}	  
		else if(opcion == 14){
			printf("\n");
		printf("Magna=19.15, Premium=19.45, Diesel=21.18");
		}	  
		else if(opcion == 15){
			printf("\n");
		printf("Magna=23.19, Premium=19.51, Diesel=21.24");
		}	  
		else if(opcion == 16){
			printf("\n");
		printf("Magna=22.15, Premium=20.45, Diesel=21.14");
		}	  
		else if(opcion == 17){
			printf("\n");
		printf("Magna=21.15, Premium=21.45, Diesel=21.13");
		}	  
		else if(opcion == 18){
			printf("\n");
		printf("Magna=21.15, Premium=20.42, Diesel=21.12");
		}	  
		else if(opcion == 19){
			printf("\n");
		printf("Magna=17.15, Premium=20.45, Diesel=21.11");
		}  
		else if(opcion == 20){
			printf("\n");
		printf("Magna=18.15, Premium=21.45, Diesel=21.10");
		}
			printf("\n");
		printf("\n");
		printf("presiona 0 para regresar al menu");
			printf("\n");
		printf("opcion=");
		scanf("%d",&salir);
}       

return 0;
}



