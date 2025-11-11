#include <iostream>
#include <string>

using namespace std;


class Animal {
public:
    virtual void faz_som() const {
        cout << "Animal faz som genérico" << endl;// declaração do metodo
    }
};

// subclasse de animal
class Cachorro : public Animal {
public:
    void faz_som() const override {
        cout << "Cachorro late, AUAUUUUUUUU" << endl;
    }
};

//subclasse de animal
class Gato : public Animal {
public:
    void faz_som() const override {
        cout << "Gato mia,MIAUUUUUUUUUUU" << endl;
    }
};

int main() {

Animal *animal1 = new Cachorro();
Animal *animal2 = new Gato();
Animal *animalGen = new Animal();

animal1->faz_som(); // Saída: "Cachorro late"
animal2->faz_som(); // Saída: "Gato mia"
animalGen -> faz_som();

 return 0;
}