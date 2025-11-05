//
////Proiect  Faza test  Grigore Stefan = Gospodarie
//
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string>
//
//#include <cstring>
//#include <vector>
//#include <fstream>
//#include <iostream>
//
//
//using namespace std;
//
//class Gospodarie 
//
//{
//
//
//public:
//    string proprietar;
//     int suprafata;
//    string tipLocuinta;
//      const string tara;
//    static int totalGospodarii;
//      int* nrAnimale;
//
//
//
//    // Constructor 1
//    Gospodarie() : tara("romania") 
//    
//    {
//        proprietar = "necunoscut";
//        suprafata = 100;
//        tipLocuinta = "Casa";
//        nrAnimale = new int(0);
//        totalGospodarii++;
//        
//         cout << "Constructor fara parametri gospodarie implicita\n";
//    }
//
//    // Constructor 2
//    Gospodarie(string prop, int sup) : tara("romania")
//    
//    {
//        proprietar = prop;
//        suprafata = sup;
//        tipLocuinta = "Casa";
//        nrAnimale = new int(2);
//        totalGospodarii++;
//        
//         cout << "Constructor cu 2 paraametrii proprietar si suprafata setate.\n";
//    }
//
//   
//    Gospodarie(string prop, int sup, string tip, int animale) : tara("Romania") 
//    
//    {
//
//        proprietar = prop;
//        suprafata = sup;
//        tipLocuinta = tip;
//        nrAnimale = new int(animale);
//        totalGospodarii++;
//       
//        cout << "Constcu 4 parametri toate atributele setate.\n";
//    }
//
//    static void calculeazaMediaAnimale(int totalAnimale)  
//    {
//        if (totalGospodarii == 0) return;
//
//
//        cout << "Media animalelor / gospodarie " << totalAnimale / totalGospodarii << endl;
//    }
//
//    
//
//
//    void afiseaza() 
//    {
//         cout << "Proprietar: " << proprietar << endl;  
//        cout << "Suprafata: " << suprafata << " mp" << endl;  
//        cout << "Tip locuinta: " << tipLocuinta << endl; 
//        cout << "Tara: " << tara << endl; 
//        cout << "Numar animale: " << *nrAnimale << endl;
//       
//        cout << "------------------------" << endl; 
//    }
//
//    
//
//    ~Gospodarie()  
//    {
//        delete nrAnimale; 
//    }
//};
//
//
//int Gospodarie::totalGospodarii = 0; 
//
//int main() 
//{
//    Gospodarie g1; 
//     Gospodarie g2("Ion Popescu", 150); 
//    Gospodarie g3("Maria Ionescu", 200, "Vila", 5); 
//
//     g1.afiseaza();
//    g2.afiseaza();
//    g3.afiseaza();
//
//    
//    
//    Gospodarie::calculeazaMediaAnimale(*g1.nrAnimale + *g2.nrAnimale + *g3.nrAnimale);
//
//    return 0; 
//}
