#include <iostream>
using namespace std;
class shop{
    int itemprice[100];
    int itemid[100];
    int counter;
public:
    void setprice(void);
    void initcounter(void){counter=0;};
    void displayprice(void);

};
void shop ::setprice(void){
    cout<<"enter the item id of "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the item price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
};
void shop::displayprice(void){
    for(int i=0;i<counter;i++){
    cout<<"the price of item of id "<<itemid[i]<<" is "<<itemprice[i]<<endl;}
};
int main(){
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}