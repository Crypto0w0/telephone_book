#include <iostream>
using namespace std;

class telBook{
    char* name;
    char* homeTel;
    char* workTel;
    char* mobileTel;
    char* extraInfo;
    telBook(char* nm){
        name = new char[strlen(nm) + 1];
        strcpy(name, nm);
    }
    telBook(char* nm, char* ht):telBook(nm){
        homeTel = new char[strlen(ht) + 1];
        strcpy(homeTel, ht);
    }
    telBook(char* nm, char* ht, char* wt):telBook(nm, ht){
        workTel = new char[strlen(wt) + 1];
        strcpy(workTel, wt);
    }
    telBook(char* nm, char* ht, char* wt, char* mt):telBook(nm, ht, wt){
        mobileTel = new char[strlen(mt) + 1];
        strcpy(mobileTel, mt);
    }
public:
    telBook(){
        name = nullptr;
        homeTel = nullptr;
        workTel  = nullptr;
        mobileTel = nullptr;
        extraInfo = nullptr;
    }
    
    telBook(char* nm, char* ht, char* wt, char* mt, char* extr):telBook(nm, ht, wt, mt){
        extraInfo = new char[strlen(extr) + 1];
        strcpy(extraInfo, extr);
    }
    
    ~telBook(){
        delete[] name;
        delete[] homeTel;
        delete[] workTel;
        delete[] mobileTel;
        delete[] extraInfo;
    }
    
    char* getName()const{
        return name;
    }
    void setName(char* nm){
        name = nm;
    }
    
    char* getHomeTel()const{
        return homeTel;
    }
    void setHomeTel(char* ht){
        homeTel = ht;
    }
    
    char* getWorkTel()const{
        return workTel;
    }
    void setWorkTel(char* wt){
        workTel = wt;
    }
    
    char* getMobTel()const{
        return mobileTel;
    }
    void setMobTel(char* mt){
        mobileTel = mt;
    }
    
    char* getExtraInfo()const{
        return extraInfo;
    }
    void setExtraInfo(char* extr){
        extraInfo = extr;
    }
    
     telBook* operator=(telBook& tb){
        strcpy(this->name, tb.name);
        strcpy(this->homeTel, tb.homeTel);
        strcpy(this->workTel, tb.workTel);
        strcpy(this->mobileTel, tb.mobileTel);
        strcpy(this->extraInfo, tb.extraInfo);
        return this;
    }
    
    telBook* opearator[](int i){
        if (this[i] == nullptr) return NULL;
        else return this[i];
    }
    
    ostream& operator<<(ostream& o, const telBook& tb){
        o << tb.getName() << "\n" << tb.getHomeTel() << "\n" << tb.getWorkTel() << "\n" << tb.getMobTel() << "\n" << tb.getExtraInfo();
            return o;
        }
    
    void init(){
        char buf[20];
        cout << "Enter name: ";
        cin.getline(buf, 20);
        if (name != nullptr){
            cout << name << " delete!!!\n";
            delete[] name;
        }
        name = new char[strlen(buf)+ 1];
        for (int i = 0; i < strlen(buf) + 1; i++){
            if (i == strlen(buf)) name[i] = 0;
            else name[i] = buf[i];
        }
        
        cout << "Enter home phone: ";
        cin.getline(buf, 20);
        if (homeTel != nullptr){
            cout << homeTel << " delete!!!\n";
            delete[] homeTel;
        }
        homeTel = new char[strlen(buf)+ 1];
        for (int i = 0; i < strlen(buf) + 1; i++){
            if (i == strlen(buf)) homeTel[i] = 0;
            else homeTel[i] = buf[i];
        }
        
        cout << "Enter work phone: ";
        cin.getline(buf, 20);
        if (workTel != nullptr){
            cout << workTel << " delete!!!\n";
            delete[] workTel;
        }
        workTel = new char[strlen(buf)+ 1];
        for (int i = 0; i < strlen(buf) + 1; i++){
            if (i == strlen(buf)) workTel[i] = 0;
            else workTel[i] = buf[i];
        }
        
        cout << "Enter mobile phone: ";
        cin.getline(buf, 20);
        if (mobileTel != nullptr){
            cout << mobileTel << " delete!!!\n";
            delete[] mobileTel;
        }
        mobileTel = new char[strlen(buf)+ 1];
        for (int i = 0; i < strlen(buf) + 1; i++){
            if (i == strlen(buf)) mobileTel[i] = 0;
            else mobileTel[i] = buf[i];
        }
        
        cout << "Enter extra information: ";
        cin.getline(buf, 20);
        if (extraInfo != nullptr){
            cout << extraInfo << " delete!!!\n";
            delete[] extraInfo;
        }
        extraInfo = new char[strlen(buf)+ 1];
        for (int i = 0; i < strlen(buf) + 1; i++){
            if (i == strlen(buf)) extraInfo[i] = 0;
            else extraInfo[i] = buf[i];
        }
    }
    
    void Print()const{
        cout << "Name: " << name;
        cout << "\nHome phone: " << homeTel;
        cout << "\nWork phone: " << workTel;
        cout << "\nMobile phone: " << mobileTel;
        cout << "\nExtra information: " << extraInfo;
    }
    
    void del(){
        name = nullptr;
        workTel = nullptr;
        homeTel = nullptr;
        mobileTel = nullptr;
        extraInfo = nullptr;
    }
};

int main() {
    telBook abonent;
    abonent.init();
    abonent.Print();
    
}
