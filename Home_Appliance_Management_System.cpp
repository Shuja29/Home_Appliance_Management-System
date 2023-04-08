#include<iostream>
#include<string>
using namespace std;
class Appliance{
    private:
    int Appliance_id;
    string Appliance_name;
    string Appliance_brand;
    double Appliance_price;
    public:
    void set_Applianceid(int);
    void set_Appliancename(string);
    void set_Appliancebrand(string);
    void set_Applianceprice(double);
    int get_Applianceid();
    string get_Appliancename();
    string get_Appliancebrand();
    int get_Applianceprice();
    void add_Appliance(Appliance & );
    void view_Appliance(Appliance);
    void update_Appliance(Appliance &  ,int);
    bool search_Appliance(Appliance & ,string);
    Appliance(); 
    Appliance(int, string, string, double);
    Appliance(Appliance &);
};
void Appliance::add_Appliance(Appliance &s){
    int id,price;
    string name,brand;
    cout<<"\nid of Appliance: ";
    cin>>id;
    cout<<"\nname of Appliance: ";
    cin>>name;
    cout<<"\nBrand of appliance: ";
    cin>>brand;
    cout<<"\nprice of Appliance: ";
    cin>>price;
        s.set_Applianceid(id);
        s.set_Appliancename(name);
        s.set_Appliancebrand(brand);
        s.set_Applianceprice(price);
    }
void Appliance::view_Appliance(Appliance index){
    cout<<"\nID: "<<index.get_Applianceid();
    cout<<"\nAppliance NAME: "<<index.get_Appliancename();
    cout<<"\nAppliance BRAND: "<<index.get_Appliancebrand();
    cout<<"\nAppliance PRICE: "<<index.get_Applianceprice()<<"$";
}
void Appliance::update_Appliance(Appliance &index,int check){
    if(index.Appliance_id==check){
    double new_price;
    cout<<"\nEnter NEW PRICE: ";
    cin>>new_price;
    index.set_Applianceprice(new_price);}
}
bool Appliance::search_Appliance(Appliance &index,string check){

        if(index.Appliance_name==check){
            return true;
        }
        else{
            return false;
        }
    }
void Appliance::set_Applianceid(int Appliance_id){
    this->Appliance_id=Appliance_id;
}
void Appliance:: set_Appliancename(string Appliance_name){
    this->Appliance_name=Appliance_name;
}
void Appliance::set_Appliancebrand(string Appliance_brand){
    this->Appliance_brand=Appliance_brand;
}
void Appliance::set_Applianceprice(double Appliance_price){
    this->Appliance_price=Appliance_price;
}
int Appliance:: get_Applianceid(){
    return Appliance_id;
}
string Appliance:: get_Appliancename(){
    return Appliance_name;
}
string Appliance::get_Appliancebrand(){
    return Appliance_brand;
}
int Appliance:: get_Applianceprice(){
    return Appliance_price;
}
Appliance::Appliance(){}
Appliance::Appliance(int Appliance_id,string Apliance_name, string Applianxe_brand, double Appliance_price){
    this->Appliance_id=Appliance_id;
    this->Appliance_name=Appliance_name;
    this->Appliance_brand=Appliance_brand;
    this->Appliance_price=Appliance_price;
}
Appliance::Appliance(Appliance &obj){
    Appliance_id=obj.Appliance_id;
    Appliance_name=obj.Appliance_name;
    Appliance_brand=obj.Appliance_brand;
    Appliance_price=obj.Appliance_price;
}

int main(){
    Appliance appliance;
    int check=0;
    while(check=true){
        cout<<"\n1) Add \n2) View \n3) Update \n4) Search\n";
        cin>>check;
        if(check==1){
            appliance.add_Appliance(appliance);
        }
        else if(check==2){
            appliance.view_Appliance(appliance);
        } 
        else if(check==3){
            int input;
            cout<<"\nEnter ID to update:";
            cin>>input;
                    appliance.update_Appliance(appliance,input);
            }
        
        else if(check==4){
            string check;
            cout<<"\nEnter title to Search:";
            cin>>check;
            int index=-1;
            if(appliance.search_Appliance(appliance,check)){
                    index=0;
                    appliance.view_Appliance(appliance);
                }
                if(index==-1){
                    cout<<"\nRecord Not Found";
                }
            }
        else
        break;
    }
}


