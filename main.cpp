#include <iostream>
#include <array>


void printCharArrayIteratively(char* first, int size)
{
    for(int x=0;x<size;x++)
        std::cout << *(first+x) << ",";
    std::cout<<std::endl;
}

void printCharArrayRecourse(char* pos,int it,  int size)
{
    if(it==size)
    {
        std::cout<<std::endl;
        return;
    }
    std::cout << *(pos+it) << ",";
    printCharArrayRecourse(pos,it+1,size);
}

int main() {

    std::array<char,100> myArray;

    std::string filler ="abcdefghijklmnopqrstuvwxyz";

    for(int x =0;x<myArray.size();x++)//fills the array up with the alphabet
        myArray[x]=filler[1+(x%filler.size()-1)];

    printCharArrayIteratively(myArray.data(),myArray.size());
    std::cout<<"\n\n";
    printCharArrayRecourse(myArray.data(),0,myArray.size());

    return 0;
}
