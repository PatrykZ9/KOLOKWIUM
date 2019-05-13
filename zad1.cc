#include <omp.h>
#include <iostream>
using namespace std;

int main () {

  int n_th, th_id;

  // ### UWAGA powyzej w miejsca ... nalezy cos wpisac
  // Utworz blok rownolegly 4 watkow przekazujac kazdemu z nich kopie
  // zmiennej n_th oraz th_id
  //
  // Do zmiennej th_id przypisz numer biezacego watku
  // i ponizsza linia wypisze ten numer

     th_id = ... ;
     cout << "Watek nr = " << th_id << endl;

     // Niech watek glowny wykona ponizszy kawalek kodu
     if (th_id == ... ) 
     {
          // Do n_th przypisz liczbe watkow
          n_th =  ... ;
          cout << "Liczba watkow = " << n_th << endl;
     }


}

