//
// Created by Marius on 2/18/2021.
//

#include "Composite.h"
#include "Color.h"
Composite::Composite(const string &name) : name(name) {}

void Composite::ShowDetails() {

  Color::SetConsoleColor(2);

  cout << "============================"<<endl;
  cout << name << endl;
  cout << "============================"<<endl;

  Color::SetConsoleColor(8);
  for(Component *comp: components){
    comp->ShowDetails();
  }

}
double Composite::GetPrice() {
  double total = 0;
  for(Component *comp: components){
    total += comp->GetPrice();
  }
  return total;
}

void Composite::AddComponent(Component *component) {
  components.emplace_back(component);
}

