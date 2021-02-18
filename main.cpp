#include <iostream>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

using namespace std;

void CreateFromScratch();

void SuggestComputer();
auto *computer = new Composite("COMPUTER");
auto *peripherals = new Composite("PERIPHERALS");
auto *cabinet = new Composite("CABINET");
auto *motherboard = new Composite("MOTHERBOARD");

int main() {

  int input = 1;


  while (input != 0) {

    cout << "1. Create Computer from scratch!" << endl;
    cout << "2. Suggest Computer!" << endl;
    cout << "3. Other...." << endl;
    cout << "0. EXIT " << endl;

    cin >> input;

    switch (input) {
      case 1:
        CreateFromScratch();
        break;
      case 2:
        SuggestComputer();
        break;
      default:
        cout << "BAD OPTION!" << endl;
        break;
    }


  }

  return 0;
}

void CreateFromScratch() {




  vector<Leaf*> perph{new Leaf("SEAGATE HYBRID 2.5 TB", 145.25),
                      new Leaf("Razer naga 234", 221.25)};


  cout << "Pick peripherals: " << endl;
  for (int i = 0; i < perph.size(); ++i) {
    perph[i]->ShowDetails();
    cout << i << " " << perph[i]->GetPrice() << endl;
  }
  int choice = 0;
  cin >> choice;

  peripherals->AddComponent(perph[choice]);









//  auto *hdd = new Leaf("SEAGATE HYBRID 2.5 TB", 145.25);
//  auto *ram = new Leaf("Crucial 2 GB RAM", 100.22);
//  auto *cpu = new Leaf("Intel X9 Xeon", 400.55);
//  auto *mouse = new Leaf("Razer naga 234", 80.15);
//  auto *keyboard = new Leaf("Logitech x350", 20.25);
//  auto *monitor = new Leaf("Dell XP TFI", 500.95);
//  auto *speaker = new Leaf("Samsung video spatial", 120.25);
//
//
//  motherboard->AddComponent(ram);
//  motherboard->AddComponent(cpu);
//
//  peripherals->AddComponent(mouse);
//  peripherals->AddComponent(keyboard);
//  peripherals->AddComponent(monitor);
//  peripherals->AddComponent(speaker);
//
//
//  cabinet->AddComponent(hdd);
//  cabinet->AddComponent(motherboard);
//
//  computer->AddComponent(peripherals);
//  computer->AddComponent(cabinet);
//
//  cabinet->ShowDetails();

  peripherals->ShowDetails();
  cout << "Total price: " << peripherals->GetPrice() << " eur" << endl;
}

void SuggestComputer() {}
