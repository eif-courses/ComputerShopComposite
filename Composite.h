//
// Created by Marius on 2/18/2021.
//

#ifndef COMPUTERSHOPCOMPOSITE_COMPOSITE_H
#define COMPUTERSHOPCOMPOSITE_COMPOSITE_H


#include "Component.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Composite : virtual public Component{

public:
  Composite(const string &name);
  void ShowDetails() override;
  double GetPrice() override;
  void AddComponent(Component * component);

private:
  string name;
  vector<Component*> components;
};


#endif //COMPUTERSHOPCOMPOSITE_COMPOSITE_H
