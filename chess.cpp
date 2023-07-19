#include <iostream>

class chess {
  public:
  std::string pezzo;

  void move() {
    static int turno = 0; // contatore statico per tenere traccia del turno
    turno++; // incrementa il turno ogni volta che il metodo move viene chiamato

    std::string prename;
    if(pezzo == "torre" || pezzo == "regina")
      prename = "la";
    else
      prename = "il";

    // assegna il colore in base al turno
    std::string colore = turno % 2 == 0 ? "bianco" : "nero";
    std::cout<< "Il " << colore  << " ha mosso " << prename << ' ' << pezzo << ' ' << ".\n";
  }
};

int main() {
  chess regina;
  regina.pezzo = "regina";
  regina.move();
  chess pedone;
  pedone.pezzo = "pedone";
  pedone.move();
  regina.move();
  return 0;
}
