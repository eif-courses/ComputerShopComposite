//
// Created by Marius on 2/18/2021.
//

#ifndef COMPUTERSHOPCOMPOSITE_LEAF_H
#define COMPUTERSHOPCOMPOSITE_LEAF_H


#include "Component.h"
#include <iostream>
#include <string>
using namespace std;

class Leaf : virtual public Component{

public:
  Leaf(const string &name, double price);
  void ShowDetails() override;
  double GetPrice() override;

private:
  string name;
  double price;
};


#endif //COMPUTERSHOPCOMPOSITE_LEAF_H
