#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1
#define L 1
#define M 1
#define J 1
#define F 1
#define H 1
#define OO 1
#define PM 1
#define AM 1
#define EV 1
#define MV 1
#define MM 1
#define AA 1
#define S 4883
#define P 4882
#define Q 4884
#define R 4885
#define X 4621
#define T 4599
int opc = 0, num1 = 0, num2 = 0, edad, matricula,num3=0,A,B,C,fou = 0, matriculo = 0, lol, opccion = 0, fafa = 0,cal1,cal2;
char car[50];
char nomb1[50];
char nomb2[50];
struct agenda{
	char num[25];
	char dire[50];
	char matri[10];
	char telefono[10];
	char stat[30];
	char prom[30];
	};
struct agenda
amigos[N]={"Elihud Villagomez Lopez","Mixquiahuala Hidalgo","4883","5951140974","ALTA","5"};
struct agenda
amig[L]={"Melissa Evangelista Paz","Los Heroes Queretaro","4882","4456654444","ALTA","5"};
struct agenda
amigi[M]={"Michelle Padilla Solis","Centro historico Queretaro","4884","4458867744","ALTA","5"};
struct agenda
amigou[J]={"Angel Samuel Pantoja","Penjamo Guanajuato","4621","4421789774","ALTA","4"};
struct agenda
amigesion[F]={"Miguel Narvaez Garcia","Dolores Hidalgo Guanajuato","4885","445886733","BAJA","5"};
struct agenda
amigggg[AA]={"Joel Vega Reyes","Ciudad de Mexico","4599","4423323232","ALTA","5"};
struct agendeshion{
	char mate[25];
	char calf[10];
	char estar[30];
	char estav[30];
	char estal[30];
	char estarr[30];
	char estae[30];
	};
struct agendeshion
amigeshion[H]={"\t Lun","\n Mar","\t Mie","\t Jue","\t Vie","\t Sab","\t Dom"};
struct agend{
	char aa[50];
	char as[50];
	char ass[50];
	char ssa[50];
	char assa[50];
	char asas[50];
	char dad[50];
	};
struct agend
ami[OO]={" 4 "," 7 "," 5 "," 3 "," 3 "," 6 "," 2 "};
struct agend
amiii[PM]={" 7 "," 7 "," 5 "," 5 "," 5 "," 5 "," 2 "};
struct agend
am[AM]={" 5 "," 5 "," 5 "," 5 "," 5 "," 4 "," 2 "};
struct agend
amei[EV]={" 7 "," 6 "," 5 "," 4 "," 3 "," 2 "," 1 "};
struct agend 
amie[MV]={" 7 "," 6 "," 5 " ," 4 "," 4 "," 7 "," 1 "};
struct agend
amiye[MM]={" 7 ", " 7 "," 7 "," 5 "," 2 "," 2 "," 2 "};
	

int main(int argc,char* argv[])
{
system ("cls");
printf("\t\t\t\t\t\t\t\t\t    FUTURO DEL TRABAJO\n\n\n\n");
printf("    BIENVENIDO \n");
printf("\n\n 1. Si eres empleador\n");
printf("\n\n 2. Si quieres formar parte de una agenda\n");
printf("\n\n 3. ¿De que me sirve formar parte de una AGENDA SOCIAL? \n");
printf("\n\n 4. SALIR \n");
printf("\n\n\n\n\n\n Escoje la opcion que desees: ");
scanf("%d",&fou);
time_t tiempo = time(0);struct tm *tlocal = localtime(&tiempo);
char output[128];
strftime(output,128,"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%d/%m/%y %H:%M:%S",tlocal);printf("%s\n",output);

do{
switch(fou){
case 1:
	system ("cls");
	printf("\t\t\t         MENU PARA EL EMPLEADOR\n\n");
	system ("cls");
	printf("\n\n        MI AGENDA SOCIAL\n\n");
	printf(" 1. Añadir a trabajador \n");
	printf(" 2. Consultar informacion de mis trabajadores\n");
	printf(" 3. Editar agenda\n");
	printf("Opcion a escoger: ");
	scanf("%d",&opc);
	
	if(opc==1){
		
			system ("cls");
			printf(" Matricula del trabajador: ");
			scanf("%d",&matriculo);
			printf("\n Introduzca el tipo de trabajo que realizara: ");
			scanf("%s",&car);
			printf("\n Asignar horas-trabajo por semana (maximo 7 horas):");
			scanf("%d",&lol);
			if(matriculo==S){printf("\n La informacion se ha cargado exitosamente:\n\n Elihud Villagomez Lopez \n TRABAJO: %s \n HORAS/SEMANA: %d \n",car,lol);}
			else if (matriculo==P){printf("\n La informacion se ha cargado exitosamente:\n\n Melissa Evangelista Paz \n TRABAJO: %s \n HORAS/SEMANA: %d \n ",car,lol);}
			else if (matriculo==Q) {printf("\n La informacion se ha cargado exitosamente:\n\n Michelle Padilla Solis \n TRABAJO: %s \n HORAS/SEMANA: %d \n ",car,lol);}
			else if (matriculo==R) {printf("\n La informacion se ha cargado exitosamente:\n\n Angel Samuel Pantoja Nieto \n TRABAJO: %s \n HORAS/SEMANA: %d \n ",car,lol);}
			else if (matriculo==X) {printf("\n La informacion se ha cargado exitosamente:\n\n Miguel Narvaez Garcia \n TRABAJO: %s \n HORAS/SEMANA: %d \n ",car,lol);}
			else if (matriculo==T) {printf("\n La informacion se ha cargado exitosamente:\n\n Joel Vega Reyes \n TRABAJO: %s \n HORAS/SEMANA:  %d\n",car,lol);}
			else {printf(" No se conoce la matricula dada.");}
			time_t tiempo = time(0);struct tm *tlocal = localtime(&tiempo);
			char output[128];
			strftime(output,128,"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%d/%m/%y %H:%M:%S",tlocal);printf("%s\n",output);
			do{scanf("%s",&opc);} while(opc==1);opc=0;
			
	}
	else if(opc==2){
		
				system ("cls");
				printf("\n\n         Buscar en mi agenda a trabajadores registrados \n\n");
				printf("\n Ingresar la matricula del trabajador:");
				scanf("%d",&matricula);
				if (matricula==S){
					int i;
					for(i=0;i<N;++i)
					{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\n HORAS-TRABAJO:%s",amigos[i].num,amigos[i].dire,amigos[i].matri,amigos[i].telefono,amigos[i].stat,amigos[i].prom);}
					printf("\n\n\n");
					int l;
					for(l=0;l<H;++l)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t \n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
					printf("\n");
					
					int s;
					for(s=0;s<OO;++s)
					{printf("\n%s\t%s\t         %s\t         %s\t  %s\t%s\t    %s\t \n",ami[s].aa,ami[s].as,ami[s].ass,ami[s].ssa,ami[s].assa,ami[s].asas,ami[s].dad);
					time_t tiempo = time(0);
					struct tm *tlocal = localtime(&tiempo);
					char output[128];
					strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
					printf("%s\n",output);}
					printf("\n");
					
				}
				else if (matricula==P){
					int j;
					for(j=0;j<L;++j)
					{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amig[j].num,amig[j].dire,amig[j].matri,amig[j].telefono,amig[j].stat,amig[j].prom);}
					printf("\n");
					int l;
					for(l=0;l<H;++l)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
					printf("\n");
					int ss;
					for(ss=0;ss<PM;++ss)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",amiii[ss].aa,amiii[ss].as,amiii[ss].ass,amiii[ss].ssa,amiii[ss].assa,amiii[ss].asas,amiii[ss].dad);
					time_t tiempo = time(0);
					struct tm *tlocal = localtime(&tiempo);
					char output[128];
					strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
					printf("%s\n",output);}
					printf("\n");
					
				}
				else if(matricula==Q){
					int k;
					for(k=0;k<M;++k)
					{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amigi[k].num,amigi[k].dire,amigi[k].matri,amigi[k].telefono,amigi[k].stat,amigi[k].prom);}
					printf("\n");
					int l;
					for(l=0;l<H;++l)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t \n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
					printf("\n");
					int g;
					for(g=0;g<AM;++g)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",am[g].aa,am[g].as,am[g].ass,am[g].ssa,am[g].assa,am[g].asas,am[g].dad);}
					printf("\n");
					
				}
				else if(matricula==R){
					int z;
					for(z=0;z<F;++z)
					{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amigesion[z].num,amigesion[z].dire,amigesion[z].matri,amigesion[z].telefono,amigesion[z].stat,amigesion[z].prom);}
					printf("\n");
					int l;
					for(l=0;l<H;++l)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
					printf("\n");
					int gg;
					for(gg=0;gg<EV;++gg)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",amei[gg].aa,amei[gg].as,amei[gg].ass,amei[gg].ssa,amei[gg].assa,amei[gg].asas,amei[gg].dad);
					time_t tiempo = time(0);
					struct tm *tlocal = localtime(&tiempo);
					char output[128];
					strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
					printf("%s\n",output);}
					printf("\n");
					
				}
				else if(matricula==X){
					int y;
					for(y=0;y<J;++y)
					{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO :%s",amigou[y].num,amigou[y].dire,amigou[y].matri,amigou[y].telefono,amigou[y].stat,amigou[y].prom);}
					printf("\n");
					int l;
					for(l=0;l<H;++l)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
					printf("\n");
					int tt;
					for(tt=0;tt<MV;++tt)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",amie[tt].aa,amie[tt].as,amie[tt].ass,amie[tt].ssa,amie[tt].assa,amie[tt].asas,amie[tt].dad);
					time_t tiempo = time(0);
					struct tm *tlocal = localtime(&tiempo);
					char output[128];
					strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
					printf("%s\n",output);}
					printf("\n");
					
				}
				else if(matricula==T){
					int x;
					for(x=0;x<AA;++x)
					{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amigggg[x].num,amigggg[x].dire,amigggg[x].matri,amigggg[x].telefono,amigggg[x].stat,amigggg[x].prom);}
					printf("\n");
					int l;
					for(l=0;l<H;++l)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
					printf("\n");
					int ll;
					for(ll=0;ll<MM;++ll)
					{printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",amiye[ll].aa,amiye[ll].as,amiye[ll].ass,amiye[ll].ssa,amiye[ll].assa,amiye[ll].asas,amiye[ll].dad);
					}
					printf("\n");
				}
				
				else {printf("\n No se encontraron datos de la matricula dada.");}
				time_t tiempo = time(0);struct tm *tlocal = localtime(&tiempo);
				char output[128];
				strftime(output,128,"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%d/%m/%y %H:%M:%S",tlocal);printf("%s\n",output);
				do{scanf("%s",&opc);} while(opc==2);opc=0;
	}
	else if(opc==3){
	    
			system ("cls");
			printf("\n\n\nEDICION EN LA INFORMACION EN MI AGENDA SOCIAL\n\n");
			printf("           \n    ¿Que cambio quieres realizar?\n");
			printf("  1.Cambio en las Horas-trabajo\n");
			printf("  2. Cambio en el tipo de trabajo \n\n");
			printf("Escoge una opcion: ");
			scanf("%d",&opccion);
			if(opccion==1){
				printf(" Ingresar matricula del trabajador: ");
				scanf("%d",&fafa);
				printf("\n¿Cuantas horas-trabajo tenia antes?");
				scanf("%d",&cal1);
				printf("\nAsignar nuevas horas-trabajo:");
				scanf("%d",&cal2);
				if (fafa==S){
					if(cal2>=8){printf("   EXITO\n El C. Elihud Villagomez Lopez con horas-trabajo de %d Esta VIGENTE en tu agenda social", cal2);}
					else {printf("    EXITO\n El C. Elihud Villagomez Lopez con horas-trabajo de %d NO esta VIGENTE en tu agenda social", cal2);}
					
				}
				else if(fafa==P){
					if(cal2>=8){printf("   EXITO\n La C. Melissa Evangelista Paz con horas-trabajo de %d Esta VIGENTE en tu agenda social", cal2);}
					else {printf("   EXITO\n La C. Melissa Evangelista Paz con horas-trabajo de %d NO esta VIGENTE en tu agenda social", cal2);}
					
				}
				else if (fafa==Q){
					if(cal2>=8){printf("   EXITO\n La C. Michelle Padilla Solis con horas-trabajo de %d Esta VIGENTE en tu agenda social", cal2);}
					else {printf("   EXITO\n La C. Michelle Padilla Solis con horas-trabajo de %d NO esta VIGENTE en tu agenda social", cal2);}
					
				}
				else {printf("La matricula dada no se conoce, favor de revisar para poder iniciar de nuevo.");}
				
			}
			else if (opccion==2){
				printf("Los cambios se veran en tu agenda social se veran reflejados el proximo mes.\n\n\t\t\t AYUNTAMIENTO");
				
			}				
			else if(opccion>2&&opccion<1) {
				printf("La opcion no se encuentra");
				printf("Los cambios se veran en tu agenda social se veran reflejados el proximo mes.\n\n\t\t\t AYUNTAMIENTO");
				
			}
			
				
	
		time_t tiempo = time(0);struct tm *tlocal = localtime(&tiempo);
		char output[128];
		strftime(output,128,"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%d/%m/%y %H:%M:%S",tlocal);printf("%s\n",output);
		do{scanf("%d",&opc);} while(opc==3);opc=0;	
	}
               
break;		
		
case 2:

	system ("cls");
	printf("\n\n        MENU PARA LOS TRABAJADORES\n\n");

	system ("cls");
	printf("\t\t\tBIENVENIDO\n");
	printf("\n\n 1. Darse da alta y se te agregara a la agenda social que mas se ajuste a tus tiempos.\n");
	printf(" \n 2. Darse de baja de la agenda social. \n");
	printf(" \n 3. Consulta tu informacion\n");
	printf("Opcion a escoger: ");
	scanf("%d",&opc);
	if(opc==1){
			system ("cls");
			printf("\tPARA DARSE DE ALTA EN UNA AGENDA SOCIAL DEBES:\n");
			printf("\n Ingresar tu nombre completo: ");
			scanf("%s",&nomb1);
			printf("\n Ingresar tus horas-trabajo dispuesto a laboral por semana: ");
			scanf("%s",&nomb2);
			
			printf("\n\n¡Muchas felicidades! Ya casi formas parte de una Agenda Social que se ajusta a tus horarios");
			printf("\n %s tu proceso se a realizado correctamente.\nRevisa tu correo electronico, en breve te enviaremos instrucciones para concluir el tramite.\n\n Gracias");
	}
	else if(opc==2){
	    
			system ("cls");
			printf("\nPARA DARSE DE BAJA NECESITAS:");
			printf("\n Ingresar tu matricula: \t ");
			scanf("%d",&num1);
			printf("\n La baja del C. con matricula %d esta en proceso.\n\nFavor de comunicarse con tu empleador para concluir el tramite",num1);
			time_t tiempo = time(0);struct tm *tlocal = localtime(&tiempo);
			char output[128];
			strftime(output,128,"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%d/%m/%y %H:%M:%S",tlocal);printf("%s\n",output);
			do{scanf("%d",&opc);} while(opc==2);opc=0;	
	}
	else if(opc==3){
		
			system ("cls");
			printf("Ingresa tu matricula:");
			scanf("%d",&matricula);
			if (matricula==S){
				int i;
				for(i=0;i<N;++i)
				{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amigos[i].num,amigos[i].dire,amigos[i].matri,amigos[i].telefono,amigos[i].stat,amigos[i].prom);}
				printf("\n");
				int l;
				for(l=0;l<H;++l)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
				printf("\n");
				int s;
				for(s=0;s<OO;++s)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",ami[s].aa,ami[s].as,ami[s].ass,ami[s].ssa,ami[s].assa,ami[s].asas,ami[s].dad);
				}
			}
			else if (matricula==P){
				int j;
				for(j=0;j<L;++j)
				{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amig[j].num,amig[j].dire,amig[j].matri,amig[j].telefono,amig[j].stat,amig[j].prom);}
				printf("\n");
				int l;
				for(l=0;l<H;++l)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
				printf("\n");
				int ss;
				for(ss=0;ss<PM;++ss)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amiii[ss].aa,amiii[ss].as,amiii[ss].ass,amiii[ss].ssa,amiii[ss].assa,amiii[ss].asas,amiii[ss].dad);
				}
				printf("\n");
			}
			else if(matricula==Q){
				int k;
				for(k=0;k<M;++k)
				{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amigi[k].num,amigi[k].dire,amigi[k].matri,amigi[k].telefono,amigi[k].stat,amigi[k].prom);}
				printf("\n");
				int l;
				for(l=0;l<H;++l)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
				printf("\n");
				int g;
				for(g=0;g<AM;++g)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",am[g].aa,am[g].as,am[g].ass,am[g].ssa,am[g].assa,am[g].asas,am[g].dad);
				}
				printf("\n");
			}
			else if(matricula==R){
				int z;
				for(z=0;z<F;++z)
				{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amigesion[z].num,amigesion[z].dire,amigesion[z].matri,amigesion[z].telefono,amigesion[z].stat,amigesion[z].prom);}
				printf("\n");
				int l;
				for(l=0;l<H;++l)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
				printf("\n");
				int gg;
				for(gg=0;gg<EV;++gg)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amei[gg].aa,amei[gg].as,amei[gg].ass,amei[gg].ssa,amei[gg].assa,amei[gg].asas,amei[gg].dad);}
				printf("\n");
			}
			else if(matricula==X){
				int y;
				for(y=0;y<J;++y)
				{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amigou[y].num,amigou[y].dire,amigou[y].matri,amigou[y].telefono,amigou[y].stat,amigou[y].prom);}
				printf("\n");
				int l;
				for(l=0;l<H;++l)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
				printf("\n");
				int tt;
				for(tt=0;tt<MV;++tt)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amie[tt].aa,amie[tt].as,amie[tt].ass,amie[tt].ssa,amie[tt].assa,amie[tt].asas,amie[tt].dad);
				}
				printf("\n");
			}
			else if(matricula==T){
				int x;
				for(x=0;x<AA;++x)
				{printf("\nNOMBRE: %s\nDIRECCION: %s\nMATRICULA: %s\nTELEFONO:%s\nESTATUS:%s\t\nHORAS-TRABAJO:%s",amigggg[x].num,amigggg[x].dire,amigggg[x].matri,amigggg[x].telefono,amigggg[x].stat,amigggg[x].prom);}
				printf("\n");
				int l;
				for(l=0;l<H;++l)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amigeshion[l].mate,amigeshion[l].calf,amigeshion[l].estar,amigeshion[l].estav,amigeshion[l].estal,amigeshion[l].estarr,amigeshion[l].estae);}
				printf("\n");
				int ll;
				for(ll=0;ll<MM;++ll)
				{printf("\n %s \t %s \t %s \t %s \t %s \t %s \t %s \t \n",amiye[ll].aa,amiye[ll].as,amiye[ll].ass,amiye[ll].ssa,amiye[ll].assa,amiye[ll].asas,amiye[ll].dad);
				}
				printf("\n");
			}
			else {printf("\n No se encontraron datos de la matricula dada.");}
			time_t tiempo = time(0);struct tm *tlocal = localtime(&tiempo);
			char output[128];
			strftime(output,128,"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%d/%m/%y %H:%M:%S",tlocal);printf("%s\n",output);
			do{scanf("%d",&opc);} while(opc==3);opc=0;	
	}
	

break;

case 3:
	
	printf("\t\t\t         BIENVENIDO AL FUTURO DEL TRABAJO\n");
	
	printf("\n\n Un beneficio para un empleado o no empleado del trabajo no remunerado es tener proteccion por el seguro social.");
	printf("\n\n Un beneficio para un empleado o no empleado del trabajo no remunerado es tener proteccion por el seguro social.");
	
	printf("\n\n PROBLEMATICAS \n\n");
	printf("Conocer las problematicas que se avecinan para el mercado de trabajo.");
	printf(" 4. Distribucion de riquezas \n");
	
	printf("\n\n\n SOLUCIONES \n ");
	
	printf(" 3. Accesibilidad a la informacion para la poblacion y comporobacion de la misma\n");
	printf(" Necesidad de conocimientos mas especializados asi como generales.\n ");
	printf(" Rapidez en la actualizacion de conocimientos.\n ");
	printf(" Adaptacion a la automatizacion de ciertas tareas.\n ");
	printf("Accesibilidad a la informacion y comporobacion de la misma\n");
	printf("\n\n\n\n\n\n\n\n\n\n\nSALIR 0\n");		
break;scanf("%d",&fou);}

}while(fou!=0);fou=0;
if(fou==4){printf("¡  H A S T A        P R O N T O  !");return 0;}
}

