#include<stdio.h>
#include<stdlib.h>


typedef struct rationnel {
    int den;
    int num;
                         }r_rationnel;
r_rationnel addition( r_rationnel rationnel1, r_rationnel rationnel2 ){

r_rationnel c;

if((rationnel1.den!=0)&&(rationnel2.den!=0)){

if(rationnel1.den==rationnel2.den){

 c.num= rationnel1.num+rationnel2.den;
 c.den= rationnel1.den;
                                                  }
else

{
rationnel1.num=rationnel1.num * rationnel2.den;
rationnel1.den=rationnel1.den*rationnel2.den;
rationnel2.num=rationnel2.num*rationnel1.den;
rationnel2.den=rationnel1.den* rationnel2.den;
c.num= rationnel1.num +rationnel2.den;
c.den= rationnel1.den;

}                                                              }
return c;
}

r_rationnel soustraction( r_rationnel rationnel1, r_rationnel rationnel2 ){

r_rationnel c;

if((rationnel1.den!=0)&&(rationnel2.den!=0)){

if(rationnel1.den==rationnel2.den){

 c.num= rationnel1.num-rationnel2.den;
 c.den= rationnel1.den;
                                                  }
else

{
rationnel1.num=rationnel1.num* rationnel2.den;
rationnel1.den=rationnel1.den*rationnel2.den;
rationnel2.num=rationnel2.num*rationnel1.den;
rationnel2.den=rationnel2.den * rationnel1.den;
c.num= rationnel1.num - rationnel2.den;
c.den= rationnel1.den;

}                                                              }
return c;
}

r_rationnel multiplication( r_rationnel rationnel1, r_rationnel rationnel2 ){

r_rationnel c;

if((rationnel1.den!=0)&&(rationnel2.den!=0)){

 c.num= rationnel1.num * rationnel2.den;
 c.den= rationnel1.den * rationnel2.den;

                                                              }                                                          
return c;
                                                                             }                                                       

r_rationnel division( r_rationnel rationnel1, r_rationnel rationnel2 ){

r_rationnel c;

if((rationnel1.den!=0)&&(rationnel2.den!=0)){

 c.num= rationnel1.num * rationnel2.den;
 c.den= rationnel1.den * rationnel1.num;                                                             }                                                          
return c;

//initialisation
                                                                       }
void initialisation(r_rationnel *p, int n){
    
    for (int i = 0; i < n; i++)
                            {   
        // p[i].numerateur=0+(rand()%(100-0));
        // p[i].denominateur=1+(rand()%(100-1));
        scanf("%d",&p[i].num);
        scanf("%d",&p[i].den);

                            }
                                           }


void affichage(r_rationnel *p, int n)     { 

    for(int i=0; i<n; i++){
        printf("(%d / %d )X^%d + ",p[i].num ,p[i].den,i);

                          }
    printf("\n");
                                  }

    r_rationnel * mult_naif(r_rationnel *p1, r_rationnel *p2, int n){ 
    r_rationnel *res = malloc((2*n)*sizeof(r_rationnel));
    for(int i=0; i<2*n; i++){
        res[i].num=0;
        res[i].den=1;       
                          }
   for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){

r_rationnel mult=multiplication(p1[i],p2[j]);
r_rationnel add= addition(res[i+j],mult);
res[i+j].num=add.num;
res[i+j].den=add.den;

                               }
                          }
return res;
                            }

int main(){

int n;

printf("donnez le degré des polynomes souhaités :\n");
scanf("%d",&n);

struct r_rationnel;

 r_rationnel *tab1 = malloc((n)*sizeof(r_rationnel));
 r_rationnel *tab2 = malloc((n)*sizeof(r_rationnel));
 r_rationnel *tab3 = malloc((n)*sizeof(r_rationnel));

 initialisation(tab1,n);
 initialisation(tab2,n);

tab3=mult_naif(tab1,tab2,2*n);

affichage(tab1,n);
affichage(tab2,n);
affichage(tab3,n);
          }


