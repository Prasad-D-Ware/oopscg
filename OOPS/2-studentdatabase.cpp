#include<iostream>
#include<string>

using namespace std;

class Student 
{
    private:
    string name,cls,div,DOB,Bloodgroup,address,mo_number,lisenceno;
    int rollno;

    public:

    Student()
    {
        rollno = 0;
        name,cls,div,DOB,Bloodgroup,address,mo_number,lisenceno = "";
    }

    void GetData()
    {
        cout<<"Enter the Student Data: "<<endl;

        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the roll number : ";
        cin>>rollno;
        cout<<"Enter the Date of Birth : DD/MM/YY ";
        cin>>DOB;
        cout<<"Enter the Class : SE/FE/TE ";
        cin>>cls;
        cout<<"Enter the Division  : A/B/C ";
        cin>>div;
        cout<<"Enter the Blood Group : ";
        cin>>Bloodgroup;
        cout<<"Enter the address : ";
        cin.ignore();
        getline(cin,address);
        cout<<"Enter the mobile number : ";
        cin>>mo_number;
        cout<<"Enter the liscense no : ";
        cin>>lisenceno;
    }

    void PutData()
    {
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Name                   : "<<name<<endl;
        cout<<"Roll number            : "<<rollno<<endl;
        cout<<"Date of birth          : "<<DOB<<endl;
        cout<<"Class                  : "<<cls<<endl;
        cout<<"Division               : "<<div<<endl;
        cout<<"Blood Group            : "<<Bloodgroup<<endl;
        cout<<"Address                : "<<address<<endl;
        cout<<"Mobile Number          : "<<mo_number<<endl;
        cout<<"License Number         : "<<lisenceno<<endl;
        cout<<"-----------------------------------------------";
    }
    
};

int main()
{

    Student s[5];
    int ch = 0,count = 0;
    do
    {
        cout<<"----------STUDENT DATABASE----------"<<endl;
        cout<<"Menu : "<<endl;
        cout<<"1. Add Student      "<<endl;
        cout<<"2. Display Student  "<<endl;
        cout<<"3. Exit             "<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            s[count].GetData();
            count++;
            break;

        case 2:

            if(count == 0)
            {
                cout<<"The database is Empty"<<endl;
            }
            for (int i = 0 ; i<count;i++)
            {
                s[i].PutData();
            }
            break;

        case 3:
            cout<<"Exit Successfully.."<<endl;
            exit(0);
            break;

        default:
            cout<<"Invalid Input"<<endl;
            break;
        }

    } while (ch != 3);
    

    return 0; 
}