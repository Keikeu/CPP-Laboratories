// Prosze napisac klasy wg zadanej hierarchii opisuj¹cej zestaw urz¹dzeñ
// biórowych. Urz¹dzenia te s¹ w ró¿nych relacjach.
// Zaimplementowana hierarchia powinna byæ uzasadniona
// inaczej zadanie bêdzie nie na temat == 0pkt.

#include <iostream>
#include "Urzadzenia.h"

///////////////////////////////////////////////////////
//
void ptrPrint(const void* p) {
  if ( p == 0 )
    std::cout << "null ptr" << std::endl;
  else
    std::cout << "valid ptr" << std::endl;
}

///////////////////////////////////////////////////////
//
void Print(const Urzadzenie* u) {
  if ( u )
    std::cout << u->rodzaj()  << std::endl;
}

///////////////////////////////////////////////////////
//
int main() {

  Skaner* skaner= new Skaner(  Rozdzielczosc(1000, 1600) );
  ptrPrint(dynamic_cast<Papierozerne*>(skaner));                //null ptr


  Drukarka* drukarka= new Drukarka(  Rozdzielczosc(1000, 1600) );
  ptrPrint(dynamic_cast<Papierozerne*>(drukarka));              //valid ptr
  Print(drukarka);                                              //Drukarka

  Papierozerne* AllInOne =  new Wielofunkcyjne( Rozdzielczosc(300,600), Rozdzielczosc(600, 1200) );
  const Drukarka *d = dynamic_cast<Drukarka*>(AllInOne);
  const Ksero *k = dynamic_cast<Ksero*>(AllInOne);
  const Skaner *s = dynamic_cast<Skaner*>(AllInOne);

  //valid ptr
  //Wielofunkcyjne
  ptrPrint(d);
  Print(d);

  //valid ptr
  //Wielofunkcyjne
  ptrPrint(k);
  Print(k);

  //valid ptr
  //Wielofunkcyjne
  ptrPrint(s);
  Print(s);

  ptrPrint(dynamic_cast<const Papierozerne*>(k));

  std::cout << d->rozdzielczosc() << std::endl;
  std::cout << s->rozdzielczosc() << std::endl;


  delete drukarka;
  delete AllInOne;
  delete skaner;
}
/* wynik
null ptr
valid ptr
Drukarka
valid ptr
Wielofunkcyjne
valid ptr
Wielofunkcyjne
valid ptr
Wielofunkcyjne
valid ptr
300x600
600x1200
 */