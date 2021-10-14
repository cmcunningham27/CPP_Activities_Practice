#include <iostream>

int main() {

  int choice1, choice2, choice3, choice4, choice5, choice6;

  std::cout << "Goldilocks and the Three Bears\n\n";

  std::cout << "The three bears went out to run a few errands.\n";
  std::cout << "Goldilocks happened upon their house while taking a stroll through the woods.\n\n";

  std::cout << "What does she do?\n\n";
  std::cout << "  1) Opens the door and goes inside.\n";
  std::cout << "  2) Continues on the path past the bears' house.\n\n";

  std::cin >> choice1;

  while (choice1 > 2) {

      std::cout << "Invalid choice. Please choose again.\n\n";

      std::cout << "C1) What does she do?\n\n";
      std::cout << "  1) Opens the door and goes inside.\n";
      std::cout << "  2) Continues on the path past the bears' house.\n\n";

      std::cin >> choice1;
      
  };

  if (choice1 == 1) {

    std::cout << "She opens the door and goes inside.\n";
    std::cout << "She walks into the front of the house and sees...\n\n";

    std::cout << "  1) porridge in the kitchen\n";
    std::cout << "  2) a record player\n";

    std::cin >> choice2;
    
    while (choice2 > 2) {

      std::cout << "Invalid choice. Please choose again.\n\n";

      std::cout << "She opens the door and goes inside.\n";
      std::cout << "She walks into the front of the house and sees...\n\n";

      std::cout << "  1) porridge in the kitchen\n";
      std::cout << "  2) a record player\n";

      std::cin >> choice2;

    };
  } else if (choice1 == 2) {

    std::cout << "She continues on the path past the bears' house\n";
    std::cout << "and comes accross a basket full of muffins and a red cloak.\n\n";

    std::cout << "  1) Goldilocks puts on the red cloak and takes the basket back to the bears' house.\n";
    std::cout << "  2) Goldilocks eats all of the muffins.\n";

    std::cin >> choice3;
    
    while (choice3 > 2) {

      std::cout << "Invalid choice. Please choose again.\n\n";

      std::cout << "She continues on the path past the bears' house\n";
      std::cout << "and comes accross a basket full of muffins and a red cloak.\n\n";

      std::cout << "  1) Goldilocks puts on the red cloak and takes the basket back to the bears' house.\n";
      std::cout << "  2) Goldilocks eats all of the muffins.\n";

      std::cin >> choice3;

    };
  };

  

  if (choice2 == 1) {

    std::cout << "She eats all of the porridge in the small bowl.\n";
    std::cout << "The bears come home!\n\n";

    std::cout << "  1) They scare Goldilocks away!\n";
    std::cout << "  2) They decide to dance with Goldilocks!\n";

    std::cin >> choice4;
    
    while (choice4 > 2) {

        std::cout << "Invalid choice. Please choose again.\n\n";

        std::cout << "She eats all of the porridge in the small bowl.\n";
        std::cout << "The bears come home!\n\n";

        std::cout << "  1) They scare Goldilocks away!\n";
        std::cout << "  2) They decide to dance with Goldilocks!\n";

        std::cin >> choice4;

  }

  } else if (choice2 == 2) {

    std::cout << "She turns on the record player.\n";
    std::cout << "While dancing she trips and breaks the smallest chair in the living room.\n";
    std::cout << "The bears come home!\n\n";

    std::cout << "  1) They scare Goldilocks away!\n";
    std::cout << "  2) They decide to dance with Goldilocks!\n";

    std::cin >> choice6;
    
    while (choice6 > 2) {

      std::cout << "Invalid choice. Please choose again.\n\n";

      std::cout << "She turns on the record player.\n";
      std::cout << "While dancing she trips and breaks the smallest chair in the living room.\n";
      std::cout << "The bears come home!\n\n";

      std::cout << "  1) They scare Goldilocks away!\n";
      std::cout << "  2) They decide to dance with Goldilocks!\n";

      std::cin >> choice6;

    };
  };

  if (choice4 == 1 || choice6 == 1) {

    std::cout << "They scare Goldilocks away!\n";

  } else if (choice4 == 2 || choice6 == 2) {

    std::cout << "They decide to dance with Goldilocks!\n";

  };

  if (choice3 == 1) {
    std::cout << "Goldilocks puts on the red cloak and takes the basket back to the bears' house.\n";
    std::cout << "The bears come home!\n\n";

    std::cout << "  1) They invite Goldilocks inside to share the wonderful muffins together!\n";
    std::cout << "  2) Goldilocks leaves the muffins for the bears and heads home!\n";

    std::cin >> choice5;
    
    while (choice5 > 2) {

      std::cout << "Invalid choice. Please choose again.\n\n";

      std::cout << "Goldilocks puts on the red cloak and takes the basket back to the bears' house.\n";
      std::cout << "The bears come home!\n\n";

      std::cout << "  1) They invite Goldilocks inside to share the wonderful muffins together!\n";
      std::cout << "  2) Goldilocks leaves the muffins for the bears and heads home!\n";

      std::cin >> choice5;

    };
  } else if (choice3 == 2) {

    std::cout << "Goldilocks eats all of the muffins.\n";
    std::cout << "She takes a nap, and when she awakens she heads home!\n";

  };

  if (choice5 == 1) {

    std::cout << "They invite Goldilocks inside to share the wonderful muffins together!\n";

  } else if (choice5 == 2) {

    std::cout << "Golidlocks leaves the muffins for the bears and heads home!\n";

  };

  std::cout << "THE END!";

  return 0;
};