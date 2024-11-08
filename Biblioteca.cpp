#include<iostream>
#include <math.h>
#include<fstream.h>

using namespace std;

void fecha(int dia, int mes, int anio);
string nombi(string &nombre);
int numlec(int &lector);
int codlib(int cod);
void procesarprestamos(int c,int &sum1, int &sum2);
void procesarturno(int &nl, string &nb, int c, int &s1, int &s2);

 int main(){
    cout<<"Ha comenzado la jornada laboral!\n";
    int d, m, a,l,c, s1=0, s2=0;
    string n;
    fecha(d,m,a);
    procesarturno(l,n,c,s1, s2);

return 0;

}

void fecha(int dia, int mes, int anio){

    cout<<"ingrese el dia\n";
    cin>>dia;
    cout<<"Ingrese el mes\n";
    cin>>mes;
    cout<<"Ingrese el anio\n";
    cin>>anio;
    cout<<"La fecha del dia de hoy es: "<<dia<<"-"<<mes<<"-"<<anio<<endl;
}

string nombi(string &nombre){

    cout<< "\nIngrese su nombre, bibliotecario: ";
    cin>> nombre;
    return nombre;
}

int numlec(int  &lector){

    cout<<"Ingrese el numero de lector, si ingresa 0 usted cambia de turno. ";
    cin>>lector;

    return lector;
}

int codlib(int cod){

    cout<<"Ingrese el codigo del libro que usted desea, si ingresa 0 es el fin del prestamo: ";
    cin>>cod;
    return cod;
}

void procesarprestamos(int c, int &sum1, int &sum2){
    sum1=0;
    sum2=0;
    do{
    c=codlib(c);

    if(c>=10000){
        sum1++;
    }else{
        sum2++;
    }
    }while(c!=0);

    cout<<"Usted pidio: "<<(sum1+sum2)-1<<" libros\n";

    if(sum2<=10000)
        cout<<"Son "<<sum1<<" de consulta"<<" y "<<sum2-1<<" comunes\n";
    else
        cout<<"Son "<<sum1-1<<" de consulta"<<" y "<<sum2-1<<" comunes\n";

}

void procesarturno(int &nl, string &nb, int c, int &s1, int &s2) {

    for(int i=1; i<=3; i++){

        nombi(nb);

        while(true){

            numlec(nl);
            if(nl!=0)
                procesarprestamos(c, s1, s2);
            else
                break;

        }

        if(s2>1)
            cout<<"En este turno se prestaron "<<s1<< " libros de consulta y "<<s2-1<< " libros comunes "<<"a cargo del bibliotecario: "<<nb;
        else

            cout<<"En este turno se prestaron "<<s1<< " libros de consulta y "<<s2<< " libros comunes "<<"a cargo del bibliotecario: "<<nb;
    }
    cout<<"\nEn los tres turnos del dia de hoy se prestaron:"<<(s1+s2)<<"libros";

}














