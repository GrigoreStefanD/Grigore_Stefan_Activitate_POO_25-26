//
//Proiect  Faza test  Grigore Stefan = Gospodarie
//

#define _CRT_SECURE_NO_WARNINGS

#include <string>

#include <cstring>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;


class Casa 

{
public:
    string proprietar; 
    int camere;
     const string tipConstructie;
    static int totalCase;   
    int* etaj; 

    Casa() : tipConstructie(" Zidarie") 
    {
        proprietar = " Necunoscut " ;
        camere = 2;
        etaj = new int(1);
        totalCase++;
    }

    Casa(string prop, int cam) : tipConstructie(" Zidarie ")   
    {
        proprietar = prop; 
        camere = cam;   
         etaj = new int(1);
        totalCase++; 
    } 

    Casa(string prop, int cam, string tip, int et) : tipConstructie(tip)   

    {
        proprietar = prop;
        camere = cam; 
        etaj = new int(et);   
        totalCase++; 
    } 

    static void calculeazaSuprafataTotala(int suprafataPerCasa) 
    {
        cout << "Suprafata totala construita: " << suprafataPerCasa * totalCase << " mp\n";
    }
     
    void afiseaza() 
     
    {
        cout << "Casa - Proprietar: " << proprietar << ", Camere: " << camere 
            << ", Tip: " << tipConstructie << ", Etaj: " << *etaj << endl; 
    }
      
    ~Casa()   
    
    {
        delete etaj;

    }



};
   
int Casa::totalCase = 0;

  






class Gradina 


{
public:
    string tipPlante;
    int suprafata;
    const string sol;
    static int totalGradini;
    int* nrPomilor; 
      
    Gradina() : sol("Argilos")   
    
    { 
        tipPlante = "Legume"; 
        suprafata = 30; 
        nrPomilor = new int(0); 
         totalGradini++; 
    }

    Gradina(string tip, int sup) : sol(" Argilos ")
    {
         tipPlante = tip;
        suprafata = sup;
         nrPomilor = new int(3);
         totalGradini++;   
    }

    Gradina(string tip, int sup, string tipSol, int pomi) :  sol(tipSol) 
    
    { 
          tipPlante = tip; 
         suprafata = sup;
           nrPomilor = new int(pomi);
          totalGradini++;
    }

    static void calculeazaProductie(int kgPerPom)
    
    {
           cout << "Productie estimata: " << kgPerPom * totalGradini << " kg fructe  \n";
    }

    void afiseaza()  
    
    {
        cout << "Gradina - Plante:  " << tipPlante << ",  Suprafata: " << suprafata
            << ", Sol:  " << sol  << ", Pomi: " << *nrPomilor  << endl;
    }

    ~Gradina() 
    
    {
        delete nrPomilor;
    }


};

int Gradina::totalGradini = 0;

 




class Animale 

{
public:

    string specie; 
    int nrCapete; 
     const string tipHrana; 
    static int totalTurme;   
      int* varstaMedie;



    Animale() : tipHrana("grau") 
    {
        specie = "Oaie";
        nrCapete =  10;
        varstaMedie =  new int(2);
        totalTurme++;
    }


    Animale(string sp, int nr) : tipHrana("paie")  
    
    {
        specie =  sp;  
         nrCapete =  nr; 
         varstaMedie =  new int(3); 
        totalTurme++; 
    } 
     


    Animale(string sp,  int nr,   string hrana,  int varsta) : tipHrana(hrana) {
        specie = sp;
        nrCapete = nr;
        varstaMedie = new int(varsta);
        totalTurme++;
    }


     
    static void calculeazaCantitateHrana( int kgPerAnimal)
    {
        cout << "cantitate totala hrana: " << kgPerAnimal * totalTurme << " kg/zi \n"; 
    }

    void afiseaza()
    {
        cout << "Animale - Specie:  " << specie << ", Nr: " << nrCapete 
            << " , Hrana  : " << tipHrana << " , Varsta medie  : "  << *varstaMedie << endl;
    }

    ~Animale() 
    {
        delete varstaMedie;
    }
};


int Animale::totalTurme = 0;





int main()   

{
    //   obiecte CASA

    Casa c1;
    Casa c2(" Popescu", 4);
    Casa c3(" Ionescu", 5, "BCA", 2);

    c1.afiseaza(); 
     c2.afiseaza();
    c3.afiseaza(); 


    Casa::calculeazaSuprafataTotala(80);

	cout << endl;

    //   0biecte GRADINA


    Gradina g1;
    Gradina g2("Flori", 30);
     Gradina g3("Pomi fructiferi", 100, "Nisipos", 12);

    g1.afiseaza(); 
    g2.afiseaza();
     g3.afiseaza(); 

    Gradina::calculeazaProductie(25); 

    cout << endl;

    // 0biecte ANIMALE

     Animale a1;

    Animale a2("Capra", 6);
    Animale a3("Vaca", 3, "Siloz", 5);

    a1.afiseaza();
     a2.afiseaza();
    a3.afiseaza();

    Animale::calculeazaCantitateHrana(10);


    return 0;
}
