#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(){

    ifstream inputFile;
    inputFile.open("G://github_clone//Thermal_Calc_OSP_Cabinet//constant.csv");

    string line ="";

    while (getline(inputFile,line))
    {
        string T_K;
        string T_C;
        string cp;
        string cv;
        string ratio_cp_cv;
        string mu;
        string cond_k;
        string Pr;
        string nu;
        string rho;
        /////////////////////////////////
        string tempString="";
        stringstream inputString(line);

        getline(inputString,T_K,',');
        getline(inputString,T_C,',');
        getline(inputString,cp,',');
        getline(inputString,cv,',');
        getline(inputString,ratio_cp_cv,',');
        getline(inputString,mu,',');
        getline(inputString,cond_k,',');
        getline(inputString,Pr,',');
        getline(inputString,nu,',');
        getline(inputString,rho,',');
        cout<<T_K<<T_C<<cp<<cv<<ratio_cp_cv<<mu
        <<cond_k<<endl;
        line = "";

    }
    

    cout<<"Hello World!"<<endl;
    return 0;
}