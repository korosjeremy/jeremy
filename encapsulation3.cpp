#include<iostream>
using namespace std;

class BankAccount {
    private:
        string Accountholder;
        double balance;

    public:
        void setAccountholder(string a) {
            Accountholder = a;
        }

        string getAccountholder() {  // Corrected function name
            return Accountholder;
        }

        void setBalance(double b) {
            balance = b;
        }

        double getBalance() { 
            return balance;
        }
};

int main() {
    BankAccount bl;
    bl.setAccountholder("mura");
    cout << "NAME: " << bl.getAccountholder() << endl;  // Corrected function call
    bl.setBalance(4000);
    cout << "balance: " << bl.getBalance() << endl;

    return 0;
}
