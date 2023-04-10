#include "Cloth.h"
#include<iostream>

using namespace std;

//constructor section
Cloth::Cloth():quality(-1),material("made of nothing"),type("Null"){}
Cloth::Cloth(int q,string m,string t):quality(q), material(m),type(t){}
Cloth::Cloth(Cloth &other):quality(other.quality),material(other.material),type(other.type){}

//setters
void Cloth::setQuality(int q){quality=q;}
void Cloth::setMaterial(string m){material=m;}
void Cloth::setType(string t){type=t;}

//getters
int Cloth::getQuality()const{return quality;}
string Cloth::getMaterial()const{return material;}
string Cloth::getType()const{return type;}


bool Cloth::operator==(Cloth &other)const{
if(quality==other.quality && material==other.material && type==other.type)return true;
else return false;

}

bool Cloth::operator!=(Cloth &other)const{

    return !(*this==other);
}

ostream & operator<<(ostream &out,Cloth&C){
out<<"printing Cloth information"<<endl;
out<<"********************************"<<endl;
out<<"quality:"<<C.quality<<"\t"<<"material:"<<C.material<<"\t"<<"type:"<<C.type<<endl;

return out;


}


istream & operator>>(istream &in,Cloth&C){
cout<<"please enter Cloth information in the following format quality material type"<<endl;

in>>C.quality;

in>>C.material;

in>>C.type;

return in;
}