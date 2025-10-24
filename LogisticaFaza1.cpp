//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<string>
//
//#include<cstring>
//
//#include<vector>
//#include<fstream>
//#include<iostream>
//using namespace std;
//
//
//class RegistruPrezenta 
//{
//
//public:
//
//    string numeClasa;
//
//    int nrElevi;
//
//    float procentPrezenta;
//    static int totalRegistrePrezenta;
//    const string tip;
//    string* profesor;
//
//    RegistruPrezenta() : tip("zilnic") 
//
//    {
//        this->numeClasa = "xII-A";
//        this->nrElevi = 32;
//        this->procentPrezenta = 95.5f;
//        this->profesor = new string("Popescu");
//        RegistruPrezenta::totalRegistrePrezenta++;
//    }
//
//    RegistruPrezenta(string n, int nr) : tip("saptamaanal") 
//    {
//
//
//        this->numeClasa = n;
//        this->nrElevi = nr;
//
//        this->procentPrezenta = 90.0f;
//        this->profesor = new string("ionescu");
//        RegistruPrezenta::totalRegistrePrezenta++;
//
//
//    }
//
//    RegistruPrezenta(string n, int nr, float p, string prof, string t) : tip(t) 
//
//    {
//
//        this->numeClasa = n;
//        this->nrElevi = nr;
//        this->procentPrezenta = p;
//        this->profesor = new string(prof);
//        RegistruPrezenta::totalRegistrePrezenta++;
//
//    }
//
//
//    static void afiseazaTotal()
//   
//   {
//        cout << "Total registre de prezență: " << totalRegistrePrezenta << endl;
//    }
//
//   
//   
//   void afiseaza() 
//    {
//        cout << "Registru " << this->tip << ", clasa:  " << this-> numeClasa << ", elevi: " << this-> nrElevi
//             << ", prezență: " << this-> procentPrezenta << "%, profesor: " << *(this-> profesor) << endl;
//    }
//
//
//
//    ~RegistruPrezenta() 
//
//
//    {
//        delete this->profesor;
//    }
//};
//
//
//
//  int RegistruPrezenta::totalRegistrePrezenta = 0;
//
//
//
//int main()   
//
//{
//     RegistruPrezenta rp1; 
//
//    RegistruPrezenta  rp2("XI-B", 28); 
//
//     RegistruPrezenta  rp3("X-A", 32, 88.5f, "Dumitrescu", "Semestrial");
//
//
//    rp1.afiseaza();
//
//    rp2.afiseaza();
//
//    rp3.afiseaza();
//
//
//
//     RegistruPrezenta::afiseazaTotal();
//
//    cout << endl;
//
//
//    return 0;
//}