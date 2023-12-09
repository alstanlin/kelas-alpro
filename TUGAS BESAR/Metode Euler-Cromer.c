#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

void main(){
    FILE *fptr;
    FILE *fptr2;
    int i,npoints;
    double length,g,dt,omega[250],theta[250],time[250];

    fptr=fopen("pendout2.dat","w");
    fptr2=fopen("pendout2b.dat","w");

    length=2.0;
    g=9.8; 
    npoints=250; 
    dt=0.04; 
    
    for(i=0;i<npoints;i++){
        omega[i]=0.0;
        theta[i]=0.0;
        time[i]=0.0;
    }

    theta[0]=0.2;
    omega[0]=0.0;

    for(i=0;i<npoints;i++){
        omega[i+1]=omega[i]-(g/length)*theta[i]*dt;
        theta[i+1]=theta[i]+omega[i+1]*dt;
        time[i+1]=time[i]+dt;
        fprintf(fptr,"%lf\t%lf\n",time[i+1],theta[i+1]);
        fprintf(fptr2,"%lf\t%lf\n",time[i+1],omega[i+1]);
    }

    fclose(fptr);
    fclose(fptr2);
}
