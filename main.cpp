#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <limits>


using namespace std;



int main(int argc, char* argv[])
{

        ifstream plik("sygnal.csv");
    string linia;
    double t1, x1;
    typedef pair <double,double> Probka;
    vector <Probka> dane;
    while (getline(plik, linia))
    {
        stringstream ss(linia);
        ss >> t1;
        ss.ignore();
        ss >> x1;
        dane.push_back(Probka(t1, x1));
    }

for (int i = 0; i < argc; ++i) {
cout << argv[i] << endl;
}

    plik.close();

{

   for (int i=1; i<dane.size(); i++)
    {
        cout << dane[i].first << "," << dane[i].second << endl;
    }
    ofstream plik2 ("out.csv", ios::app);
    for (int i=1; i<dane.size(); i++)
        plik2 << dane[i].first << dane[i].second << endl;
    plik.close();



}
}

class Probka{
public:
    double t;
    double x;
    Probka();
    Probka(double t1, double x1);
    friend std::ostream&
    operator<<(std::ostream& strumien, const Probka& student);

     };

     class sygnal{
 public:
    probka ();
    probka (std::vector<Probka>);
    Sygnal ();
    double p ;
    dodajProbke( p: const Probka&);
    void {
        iloscProbek();
        int& operator [] (int Probka&);
    }
    friend


     };
