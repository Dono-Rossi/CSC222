#include "card.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
Card three_of_clubs(1, 3);
cout << "test one works" << endl;
Card card(2, 11);
cout << card.to_string() << endl;
cout << "test two works << endl;
Card card1(1, 11);
Card card2(1, 11);

if (card1 == card2) {
    cout << "Yup, that's the same card." << endl;
}
return 0;

}
