#include <iostream>
#include <cmath>
using namespace std;

//funcion para sumar los gramos de todos
float sumaG(int personas, float volP[], int ratio){ //volP será volúmen de café por persona
     float sum=0, gramP;
     int sumFinal;

     for(int i=0; i<personas; i++){
        gramP=volP[i]/ratio; //gramP será gramos de café por persona
        sum=sum+gramP;
     }
     //para redondear a entero
     sumFinal= round(sum); 

    return sumFinal;
}

//utilización final
int main (){
    int n, res, num1, ratio, sumV=0;
    cout<<"Cuantas personas desean cafe?" << endl;
    cin>>n;

    cout<<"En que ratio lo desea? (entre 15 y 18)"<<endl;
    cin>>ratio;

    while (ratio<15 || ratio>18){
        cout<<"valor invalido! el valor debe de estar entre 15 y 18! ingrese otra vez"<<endl;
        cin>>ratio;
    }

  //declarar arreglo y definir primera posición
    float volP [n];
    cout<<"okay! la primera persona? (ml)" << endl;
    cin>>num1;
    volP[0]=num1;

  //definir arreglo entero
     
     for (int i=1; i<n; i++){
         cout<<"la siguiente? (ml)" << endl;
        cin>>volP[i];
        sumV=sumV+volP[i];
     }
    
  
    res = sumaG(n,volP,ratio);
    cout << "Serian " << res << " gramos y " << round(sumV) << " ml en total!!" << endl;
    cout << "Disfrute su cafe!!"<<endl;
    
    return 0;
}