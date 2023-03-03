#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    float sum = 0;
    if(argc == 1){
        cout << "Please input numbers to find average.";
    }else{
    cout << argc << "\n";

    for(int i = 0;i < (argc-1);i++){
        sum += atof(argv[i+1]);
    }   
    cout << "---------------------------------\n";
    cout << "Average of " << argc-1 << " numbers = " << sum/(argc-1) << endl;
    cout << "---------------------------------\n";
    }

    return 0;
}