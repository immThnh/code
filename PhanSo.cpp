    #include<fstream>
    #include<iostream>
    using namespace std;
    
    class PhanSo
    {
    private:
        int mauso;
        int tuso;
    public:
    
        friend istream& operator >> (istream& is, PhanSo &ps)
        {
            cout <<"NHAP TU SO: ";
            is >> ps.tuso;
            cout << "NHAP MAU SO: ";
            is >> ps.mauso;
            return is;
        }
    
        friend ostream& operator << (ostream& os, PhanSo ps)
        {
            os << ps.tuso << "/" << ps.mauso << endl;
            return os;
        }
    
       
    
    };
