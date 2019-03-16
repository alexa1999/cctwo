#include<iostream>
#include <math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
//void tresdigitos(string &a,string &rsp,int i=0){
//	if(a[i]=='1'){
//		if(a[i+1]=='0' && a[i+2]=='0')rsp+="cien ";
//		else rsp+="ciento ";
//	}
//	else if(a[i]=='2')
//		rsp+="doscientos ";
//	else if(a[i]=='3')
//		rsp+="trescientos ";
//    else if(a[i]=='4')
//        rsp+="cuatrocientos ";
//    else if(a[i]=='5')
//        rsp+="quinientos ";
//    else if(a[i]=='6')
//        rsp+="seiscientos ";
//    else if(a[i]=='7')
//        rsp+="setecientos ";
//    else if(a[i]=='8')
//        rsp+="ochocientos ";
//    else if(a[i]=='9')
//        rsp+="novecientos ";
//    if(a[i+1]=='0'){
//		if(a[i+2]=='1'){
//			if(i+2!=a.size()-1 && a[i]>'0'){
//				rsp+="un ";
//			}
//		}
//		else if(a[i+2]=='2')rsp+="dos ";
//        else if(a[i+2]=='3')rsp+="tres ";
//        else if(a[i+2]=='4')rsp+="cuatro ";
//        else if(a[i+2]=='5')rsp+="cinco ";
//        else if(a[i+2]=='6')rsp+="seis ";
//        else if(a[i+2]=='7')rsp+="siete ";
//        else if(a[i+2]=='8')rsp+="ocho ";
//        else if(a[i+2]=='9')rsp+="nueve ";
//    	}
//	else if(a[i+1]=='1'){
//    		if(a[i+2]=='0')
//                rsp+="diez ";
//        	else if(a[i+2]=='1')
//                rsp+="once ";
//        	else if(a[i+2]=='2')
//                rsp+="doce ";
//        	else if(a[i+2]=='3')
//                rsp+="trece ";
//            else if(a[i+2]=='4')
//                rsp+="catorce ";
//            else if(a[i+2]=='5')
//                rsp+="quince ";
//            else if(a[i+2]=='6')
//                rsp+="dieciseis ";
//            else if(a[i+2]=='7')
//                rsp+="diecisiete ";
//            else if(a[i+2]=='8')
//                rsp+="dieciocho ";
//            else if(a[i+2]=='9')
//                    rsp+="diecinueve ";
//	}
//	else if(a[i+1]=='2'){
//		if(a[i+2]=='0')
//			rsp+="veinte ";
//		else if(a[i+2]=='1'){
//			if(i+2!=a.size()-1)rsp+="veintiun ";
//			else rsp+="veintiuno ";
//		}
//		else if(a[i+2]=='2')
//			rsp+="veintidos ";
//		else if(a[i+2]=='3')
//			rsp+="veintitres ";
//		else if(a[i+2]=='4')
//			rsp+="veinticuatro ";
//		else if(a[i+2]=='5')
//			rsp+="veinticinco ";
//		else if(a[i+2]=='5')
//			rsp+="veinticinco ";
//		else if(a[i+2]=='6')
//			rsp+="veintiseis ";
//		else if(a[i+2]=='7')
//			rsp+="veintisiete ";
//		else if(a[i+2]=='8')
//			rsp+="veintiocho ";
//		else if(a[i+2]=='9')
//			rsp+="veintinueve ";
//	}
//	else if(a[i+1]>='3'){
//		if(a[i+1]=='3')
//			rsp+="treinta ";
//		else if(a[i+1]=='4')
//			rsp+="cuarenta ";
//		else if(a[i+1]=='5')
//			rsp+="cincuenta ";
//		else if(a[i+1]=='6')
//			rsp+="sesenta ";
//		else if(a[i+1]=='7')
//			rsp+="setenta ";
//		else if(a[i+1]=='8')
//			rsp+="ochenta ";
//		else if(a[i+1]=='9')
//			rsp+="noventa ";
//		if(a[i+2]=='1'){
//			if(i+2==a.size()-1)rsp+="y uno ";
//			else rsp+="y un ";
//		}
//		else if(a[i+2]=='2')
//			rsp+="y dos ";
//		else if(a[i+2]=='3')
//			rsp+="y tres ";
//		else if(a[i+2]=='4')
//			rsp+="y cuatro ";
//		else if(a[i+2]=='5')
//			rsp+="y cinco ";
//		else if(a[i+2]=='6')
//			rsp+="y seis ";
//		else if(a[i+2]=='7')
//			rsp+="y siete ";
//		else if(a[i+2]=='8')
//			rsp+="y ocho ";
//		else if(a[i+2]=='9')
//			rsp+="y nueve ";
//	}
//	string t;
//	if(i+3==3){
//		for(int j=0;j<=i+2;j++)t+=a[j];
//		if(t>="001")rsp+="mil ";
//		tresdigitos(a,rsp,i+3);
//	}
//	else if(i+3==6){
//		for(int j=0;j<=i+2;j++)t+=a[j];
//		if(t>"000001")rsp+="millones ";
//		else if(t=="000001")rsp+="un millon ";
//		tresdigitos(a,rsp,i+3);
//	}
//	else if(i+3==9){
//		for(int j=i;j<=i+2;j++)t+=a[j];
//		if(t>="001")rsp+="mil ";
//		tresdigitos(a,rsp,i+3);
//	}
//	else{
//		if(a[i+1]=='0' && a[i+2]=='1'){
//			rsp+="uno ";
//		}
//	}
//}
//string conversor(string& a){
//	string h;
//	for(int i=0;i<12-a.size();i++)h+='0';
//	h+=a;
////	cout<<"h: "<<h<<endl;
//	string rsp;
//	tresdigitos(h,rsp);
//	string respuesta;
//	for(int i=0;i<rsp.size()-1;i++)respuesta+=rsp[i];
//	return respuesta;
//}
//int main(){
//	string a;
//	cout<<"Ingresar un numero entero positivo"<<endl;
//	cin>>a;
//	cout<<"Se lee: "<<conversor(a)<<endl;
//
//	return 0;
//}
////retorna la parte decimal como un entero
//int centavos (float a){
//    int b = a;
//    return round((a - b)*100);
//}
//
//int main()
//{
//    float num;
//    cout << "Ingrese el vuelto:\n";
//    cin >> num;
//
//    int ent = num;
//    int cev = centavos(num);
//    int arr[] = {200,100,50,20,10,5,2,1};
//    for(int i = 0; i < 8; i++){
//        int a = ent/arr[i];
//        ent = ent%arr[i];
//        cout << arr[i] << " soles: " << a << endl;
//    }
//    for(int i = 2; i < 5; i++){
//        int a = cev/arr[i];
//        cev = cev%arr[i];
//        cout << arr[i] << " centavos: " << a << endl;
//    }
//}
//string mesNombre(int mes){
//    switch(mes){
//        case 1:return "Enero";
//        case 2:return "Febrero";
//        case 3:return "Marzo";
//        case 4:return "Abril";
//        case 5:return "Mayo";
//        case 6:return "Junio";
//        case 7:return "Julio";
//        case 8:return "Agosto";
//        case 9:return "Septiembre";
//        case 10:return "Octubre";
//        case 11:return "Noviembre";
//        case 12:return "Diciembre";
//    }
//}
//bool bisiestro(int anio){
//    return ( anio%4==0 && (anio%400==0|| anio%100!=0));
//}
//int calculaDiaMes(int anio,int mes){
//    if(mes==1 || mes==3 || mes==5 ||mes==7 ||mes==8 || mes==10 ||mes==12)
//        return 31;
//    if(mes==2){
//        if(bisiestro(anio))return 29;
//        return 28;
//    }
//    else
//    return 30;
//}
//int inicioD(int anio,int mes){
//    int a=(14-mes)/12;
//    int y=anio-a;
//    int m=mes+12*a-2;
//    int dia=1,d;
//    d=(dia+y+y/4-y/100+y/400+(31*m)/12)%7;
//    return d;
//}
//void calendario(int anio,int mesING=12){
//    for(int mes=1;mes<=mesING;mes++){
//        if(mes==mesING){
//        cout<<"Mes: "<<mesNombre(mes)<<endl;
//        cout<<" Dom Lun Mar Mier Jue Vier Sab"<<endl<<endl;
//        int z=inicioD(anio,mes);
//        for(int i=0;i<z;i++){
//            cout<<"    ";
//        }
//        int DM=calculaDiaMes(anio,mes);
//        for(int dia=1;dia<=DM;dia++){
//            printf("%4d",dia);
//            z++;
//            if(z%7==0)cout<<endl;
//        }
//        cout<<endl;
//    }
//    }
//}
//int main()
//{
//    int anio,mess;
//    cout<<"ingresa el anio "<<endl;
//    cout<<"ingrese el mes"<<endl;
//    cin>>anio;
//    cin>>mess;
//    calendario(anio,mess);
//    return 0;
//}



int main ()
{
    int numero, unidades, decenas, centenas, millares;

    cout<< "Ingrese un numero"<<endl;
    cin>> numero;


    unidades = numero % 10; numero /= 10;
    decenas = numero % 10; numero /= 10;
    centenas = numero % 10; numero /= 10;




    switch (centenas)
    {
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"CD"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DC"; break;
        case 7: cout<<"DCC"; break;
        case 8: cout<<"DCCC"; break;
        case 9: cout<<"CM"; break;
    }

    switch (decenas)
    {
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXXX"; break;
        case 9: cout<<"XC"; break;
    }

    switch (unidades)
    {
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;
    }

    return 0;
}

