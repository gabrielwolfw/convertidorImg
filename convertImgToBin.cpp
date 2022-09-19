#include <iostream>
#include <fstream>
#include <string>


using namespace std;



int main(){

    ifstream image("stitch.jpg",ios::in |ios::binary);
    //ofstream binary("imageBin.txt", ios::out|ios::app);
    ofstream binary("imageBin.bin", ios::out|ios::app);

    char ch;
    while(!image.eof()){
        ch = image.get();
        binary.put(ch);

    }
    cout << "la conversión ha sido excitosa" << endl;

    image.close();
    binary.close();

    return 0;
}