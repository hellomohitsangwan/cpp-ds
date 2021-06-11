#include <iostream>
using namespace std;

class employee {
    public:
    int emp_id;
    string emp_name , gender , designation;
    void get() {
        cin>>emp_id>>emp_name>>gender>>designation;
    }
    void put() {
        cout<<emp_id<<endl<<emp_name<<endl<<gender<<endl<<designation<<endl;
    }
};

class account {
    public:
    int acc_no;
    string acc_type;
    void get() {
        cin>>acc_no>>acc_type;
    }
    void put() {
        cout<<acc_no<<endl<<acc_type<<endl;
    }
};

class payroll : public employee , public account {
    public:
    int bp , da , hra , pf , pt , ip;
    void getDetails() {
        employee :: get();
        account :: get();
        cin>>bp>>da>>hra>>pt>>ip;
    }
    void put_data() {
        int netSalary = (bp + da + hra) - (pf + pt + ip);
        employee :: put();
        account :: put();
        cout<<bp<<endl<<da<<endl<<hra<<endl<<pf<<endl<<pt<<endl<<ip<<endl<<netSalary;
    }
};

int main() {
    payroll p;
    p.getDetails();
    p.put_data();
}