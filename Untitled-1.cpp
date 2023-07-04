#include <iostream>
#include <climits>
#include <iomanip>
#include <vector>
#include <limits>


int main() {
  

std::vector<int> notes(13);
std::vector<std::string> notesString(13);
for (int i=1;i<13;i++) {
        do {
            std::cout<<"Введите ноту "<<i<<": ";;
            std::cin>>notes[i];
            if (std::cin.fail()) {
                notes[i]=0;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            }
        } while (notes[i]<1 || notes[i]>7);


        if (notes[i]==1) {
            notesString[i]="DO ";
        } else if (notes[i]==2) {
            notesString[i]="RE ";
        } else if (notes[i]==3) {
            notesString[i]="MI ";
        } else if (notes[i]==4) {
            notesString[i]="FA ";
        } else if (notes[i]==5) {
            notesString[i]="SOL ";
        } else if (notes[i]==6) {
            notesString[i]="LA ";
        } else if (notes[i]==7) {
            notesString[i]="SI ";
        } else {
            std::cout<<"wrong";
        }
    }
for (int i=1;i<13;i++) {
        std::cout<<notesString[i];
    }



  
  
  

  
}