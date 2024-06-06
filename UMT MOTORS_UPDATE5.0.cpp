#include<iostream>
#include<string>
#include<conio.h>
#include<chrono>
#include<thread>
#include<fstream>
#include<ctime>

using namespace std;


//      1

class customer{
		
	protected:
		
		string first_name, last_name, email, address, CNIC;
		int age, pay, id ;
        
	public:

//		Constructor

		customer(){
			first_name = "NO NAME";
			last_name = "NO NAME";
			email = "NO EMAIL";
			address = "NO Address";
			age = 0;
			CNIC = "CNIC";
			pay = 0;
			
		}
		
//		Setters and Getters

		void setFName(string n){
			first_name = n;
		}
		string getFName(){
			return first_name;
		}
		void setLName(string ln){
			last_name = ln;
		}
		string getLName(){
			return last_name;
		}
		void setEMAIL(string e){
			email = e;
		}
		string getEMAIL(){
			return email;
		}
		void setADDRESS(string ad){
			address = ad;
		}
		string getADDRESS(){
			return address;
		}
		void setID(int i){
			id = i;
		}
		int getID(){
			return id;
		}
		void setAge(int a){
			age = a;
		}
		int getAge(){
			return age;
		}
		void setCniC(string cnic){
			CNIC = cnic;
		}
		string getCniC(){
			return CNIC;
		}
		void setPAY(int p){
			pay = p;
		}
		int getPAY(){
			return pay;
		}	
		

//     Member Function
    



void entery(){
	
	
		cout<<"Enter Customer First name: ";
		cin>>first_name;
		cout<<"Enter Customer Last name: ";
		cin>>last_name;
y:
		cout<<"Enter Customer age: ";
		cin>>age;
		if(age < 18 || age > 100){
			cout<<"Invalid!!!"<<endl;
			cout<<"\t\t------------------------------\n\n";	

			goto y;
		}
		cout<<"Enter Customer CNIC number: ";
		cin>>CNIC;
	
			for(int i=5; i<CNIC.length(); i+=6){
				
				CNIC.insert(i, "-");
				
			}
			cout<<"CNIC is: "<<CNIC<<endl;

		cout<<"Enter Customer Email: ";
		cin>>email;
		cout<<"Enter Address: ";
		cin>>address;
		string pay_method[3] = {"Cash", "Debit card", "Bank card"};
		cout<<"How customer pay:\t1.Cash\t2.Debit card\t3.Bank card"<<endl;
        cout<<"Enter: ";
        cin>>pay;
        
        if(pay == 1){
			cout<<"Successfully pay with "<<pay_method[pay-1]<< "."<<endl;
		}
		
		else if(pay == 2){
			cout<<"Successfully pay with "<<pay_method[pay-1]<< "."<<endl;
		}
		
		else if(pay == 3){
			cout<<"Successfully pay with "<<pay_method[pay-1]<< "."<<endl;
		}	
		else{
			cout<<"Invalid!!!";
		}	
		cout<<"\n\n\n\t\t\t\t--------------------------------------------------";
		cout<<"\n\n\t\t\t\t\tYour data is entered completed."<<endl;
		system("pause");
		system("cls");
		
//   File Handling
		ofstream myfile("customer.txt", ios :: app);
		myfile<<first_name<<" ";
		myfile<<last_name<<" ";
		myfile<<age<<" ";
		myfile<<CNIC<<" ";	
		myfile<<email<<" ";
		myfile<<address<<endl;
		myfile.close();
		
	}
	
};

// 2
class delete_customer{
		
	public:
		string fname, lname, femail, faddress, fage, fCNIC, id_;
		int del_Name, count = 0;
		
	void print(){
			
	ifstream del("customer.txt");
	del>>fname;
	del>>lname;
	del>>fage;
	del>>fCNIC;
	del>>femail;
	del>>faddress;


	ofstream temp("temp.txt");
	
	cout<<"Enter the Name of cutomer to delete data: ";
	cin>>id_;
		
	
	while(del >> fname >> lname >>  fage >> fCNIC >> femail >> faddress){
		
		if(fname==id_){
			count = 1;
			cout<<"The entered Data is successfully deleted.";
		}
		
		else{
			temp << fname <<" "<< lname <<" "<< fage <<" "<< fCNIC<<" "<< femail <<" "<< faddress << endl;
		}
	}
	del.close();
	temp.close();
	
	remove("customer.txt");
	rename("temp.txt", "customer.txt");
		
	}
	
};


//    3

class history_customer{
        public:
		string fname, lname, femail, faddress, finput;  
		int fCNIC, fage;
		 
		void out(){
			

		system("cls");
		cout<<"\n\n\n\n\t\t\t\t\tHistory of Customer ";
		cout<<"\t\t\t\t\t\t------------------------------\n\n";	

h: 
		 cout<<"Enter customer name: ";
		 cin>>finput;
    
    int count = 0;
        
		 
		 ifstream history("customer.txt");
	 
	
		 
    	       while(history >> fname >> lname >>  fage >> fCNIC >> femail >> faddress){
    	       	
    	       	    if(fname == finput){
    	       	    	
    	       	    	count = 1;
    	       	    	
    	       	    	cout<<"\n\n Customer Is SuccessFully Found ! ";
						cout<<"\n-------------------------------------------\n";
		                cout<<"First Name is: "<<fname<<endl;
		                cout<<"Last Name is: "<<lname<<endl;
		                cout<<"Age is: "<<fage<<endl;
		                cout<<"CNIC is: "<<fCNIC<<endl;							
		                cout<<"Email is: "<<femail<<endl;							
		                cout<<"Address is: "<<faddress<<endl;	
		                
		                break;
					   }
				}
				history.close();
				
				
						
					if(count==0){
					
					
																															  		                                                                                                  
		cout<<"\n\n\n\n\n\t\t\t\t\t   ******************************************\n";
		cout<<"\t\t\t\t\t   *                                        *\n";
		cout<<"\t\t\t\t\t   *     Customer Does not Exist !!         *\n";
		cout<<"\t\t\t\t\t   *                                        *\n";
		cout<<"\t\t\t\t\t   *      YOU HAVE TO ENTER AGAIN.          *\n";
		cout<<"\t\t\t\t\t   *                                        *\n";
		cout<<"\t\t\t\t\t   ******************************************\n"; 
    	cout<<"\t\t\t\t\t\t------------------------------\n\n";	
   
goto h;		

					 }
					 
			   }
	
	
};



//     4


class worker {


	protected:

        int mobile_no, id, sex, age, CNIC;
        string address, status, first_name, last_name, email;
		
    
	public:

//		Constructor
		worker(){
			mobile_no = 0;
			address = "NO ADDRESS";
			status = "NO STATUS";
			id = 0;
			sex = 0;
			age = 0;
			first_name = "NO NAME";
			last_name = "NO NAME";
			email = "NO EMAIL";
		}
		
		

//       Setter and Getters

	
		void setCniC(int cnic){
			CNIC = cnic;
		}
		int getCniC(){
			return CNIC;
		}
		void setEMAIL(string e){
			email = e;
		}
		string getEMAIL(){
			return email;
		}
		void setFName(string n){
			first_name = n;
		}
		string getFName(){
			return first_name;
		}
		void setLName(string ln){
			last_name = ln;
		}
		string getLName(){
			return last_name;
		}
		void setAge(int a){
			age = a;
		}
		int getAge(){
			return age;
		}
		void setNo(int num){
			mobile_no = num;
		}
		int getNO(){
			return mobile_no;
		}
		void setAddress(string add){
			address = add;
		}
		string getAddress(){
			return address;
		}
		void setSTATUS(string st){
			status = st;
		}
		string getSTATUS(){
			return status;
		}
		void setSEX(int se){
			sex = se;
		}
		int getSEX(){
			return sex;
		}	
		
	void entery(){
		
		
p:
		system("cls");
		id++;
		cout<<"Worker ID is: "<<id<<endl;
		cout<<"Enter Worker First name: ";
		cin>>first_name;
		cout<<"Enter Worker Last name: ";
		cin>>last_name;		
		
i:
		cout<<"Enter Worker age: ";
		cin>>age;
		if(age < 18 || age > 100){
			cout<<"Invalid!!!"<<endl;
			goto i;
		}
		else
		cout<<"Enter Worker mobile number: +92 ";
		cin>>mobile_no;
		cout<<"Enter Worker CNIC number: ";
		cin>>CNIC;
		cout<<"Enter Worker Email: ";
		cin>>email;
		cout<<"Enter Worker address: ";
		cin>>address;
		cout<<"Enter Worker status: ";
		cin>>status;
		
		string gender[4] = {"Male", "Female", "Custom", "Prefer not to say"};
		cout<<"Worker Gender:\t   1.Male\t  2.Female\t3.Custom\t4.Prefer not to say"<<endl;
        cout<<"Enter:";
        cin>>sex;	
        
        if(sex >= 1 && sex <= 3){
        	cout<<"Your gender is "<<gender[sex-1]<<" ."<<endl;
		}
		else{
			cout<<"Invalid!!! Input."<<endl;
		}
		
		cout<<"\n\n\n\t\t\t\t--------------------------------------------------";
		cout<<"\n\n\t\t\t\t\tYour data is entered completed."<<endl;
		system("pause");
		system("cls");
		
		ofstream myfile("worker.txt", ios :: app);
		myfile<<first_name<<" ";
		myfile<<last_name<<" ";
		myfile<<age<<" ";
		myfile<<mobile_no<<" ";
		myfile<<CNIC<<" ";
		myfile<<CNIC<<" ";
		myfile<<email<<" ";
		myfile<<status<<endl;
		myfile.close();
	
	
	
	
	cout<<"\n\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 1 To View Latest History.         |\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 2 To Enter Again Data.            |\n";
    cout<<"\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t          Please Enter Your Choice: ";   
	int choose;
	cin>>choose;
		
	if(choose == 1){
	ifstream in("worker.txt");
		 in>>first_name;
		 in>>last_name;
		 in>>age;
		 in>>mobile_no;
		 in>>CNIC;
		 in>>email;
		 in>>address;
		 in>>status;
		 	
		 cout<<"Worker First Name is: "<<first_name<<endl;
		 cout<<"Worker Last Name is: "<<last_name<<endl;
		 cout<<"Worker Age is: "<<age<<endl;
		 cout<<"Worker Phone NO is: "<<mobile_no<<endl;
		 cout<<"Worker CNIC is: "<<CNIC<<endl;
		 cout<<"Worker Email is: "<<email<<endl;
		 cout<<"Worker address is: "<<address<<endl;
		 cout<<"Worker status is: "<<status<<endl;
	}
	
	if(choose == 2){
		
goto p;

	}
	
	}	
    
};

//  5
class history_worker : public worker{
	
	public:
		
		
	void history(){
		
		string fname, lname, fstatus, faddress, id, femail;  
		int fNo, fCNIC, fage;
		
		system("cls");
		cout<<"\n\n\n\n\t\t\t\t\tHistory of Worker ";
		cout<<"\t\t\t\t\t\t------------------------------\n\n";	
		
	ifstream in("worker.txt");
		 in>>first_name;
		 in>>last_name;
		 in>>age;
		 in>>mobile_no;
		 in>>CNIC;
		 in>>email;
		 in>>address;
		 in>>status;
		 	
		h: 
		 cout<<"Enter Worker id: ";
		 cin>>id;
    
    int count = 0;
        
		 
		 ifstream history("worker.txt");
	 
	
		 
    	       while(history >> fname >> lname >>  fage >> fNo >> fCNIC >> femail >> faddress >> fstatus){
    	       	
    	       	    if(fname == id){
    	       	    	
    	       	    	count = 1;
    	       	    	
    	       	    	cout<<"\n\n Customer Is SuccessFully Found ! ";
						cout<<"\n-------------------------------------------\n";
		 cout<<"Worker First Name is: "<<first_name<<endl;
		 cout<<"Worker Last Name is: "<<last_name<<endl;
		 cout<<"Worker Age is: "<<age<<endl;
		 cout<<"Worker Phone NO is: "<<mobile_no<<endl;
		 cout<<"Worker CNIC is: "<<CNIC<<endl;
		 cout<<"Worker Email is: "<<femail<<endl;
		 cout<<"Worker address is: "<<address<<endl;
		 cout<<"Worker status is: "<<status<<endl;		         	    
		                
		                break;
					   }
				}
				history.close();
				
				
						
					if(count==0){
					
					
																															  		                                                                                                  
		cout<<"\n\n\n\n\n\t\t\t\t\t   ******************************************\n";
		cout<<"\t\t\t\t\t   *                                        *\n";
		cout<<"\t\t\t\t\t   *      Worker Does not Exist !!          *\n";
		cout<<"\t\t\t\t\t   *                                        *\n";
		cout<<"\t\t\t\t\t   *      YOU HAVE TO ENTER AGAIN.          *\n";
		cout<<"\t\t\t\t\t   *                                        *\n";
		cout<<"\t\t\t\t\t   ******************************************\n"; 
    	cout<<"\t\t\t\t\t\t------------------------------\n\n";	
   
        sleep(3);	
goto h;		

					 }
					 
			   }
		


};

//   6
class car_information : protected worker{

		
	public:
				
	void entery(){
		
	cout<<"Enter current car owner name: ";
	cin>>first_name;
	cout<<"Enter current car owner CNIC number: ";
	cin>>age;
	cout<<"Enter car NO: ";
	cin>>CNIC;
	
	ofstream myfile("car.txt", ios :: app);
		myfile<<first_name<<" ";
		myfile<<age<<" ";
		myfile<<CNIC<<endl;
		myfile.close();
	}
	
};

class supply_info{
	protected:
		
};

// 9
class supplies{
	
public:
      
          string suppliess[11] = { "Tyres and Wheels", "Seats", "Rims", "Covers", "Nuts and bolts", "Car body parts", "Engine", "Mirrors", "Head lights", "Silencer and Exhaust", "Stearing" };
          int stock[11] = { 100, 200, 57, 90, 1000, 34, 5, 67, 23, 50, 100 };
      void displayMenu (){
	  
	  		system("cls");

			cout<<"Here is the menu of our shop,Sir ";
			cout<<"\n\n\t\t\t\t_________________________________________________________________ \n";
            cout<<"\t\t\t\t|             1.  -> Tyres and Alloy Rims                        |\n";
            cout<<"\t\t\t\t|             2.  -> Seats                                       |\n";
            cout<<"\t\t\t\t|             3.  -> Disc Breaks                                 |\n";
            cout<<"\t\t\t\t|             4.  -> Covers                                      |\n";
            cout<<"\t\t\t\t|             5.  -> Nuts and bolts                              |\n";
            cout<<"\t\t\t\t|             6.  -> Car body parts                              |\n"; 
            cout<<"\t\t\t\t|             7.  -> Engine                                      |\n";
            cout<<"\t\t\t\t|             8.  -> Mirrors                                     |\n";
            cout<<"\t\t\t\t|             9.  -> Head lights                                 |\n";
            cout<<"\t\t\t\t|            10.  -> Silencer and Exhaust                        |\n";   
            cout<<"\t\t\t\t|            11.  -> Stearing                                    |\n";
            cout<<"\t\t\t\t|________________________________________________________________|\n\n";
            
        int choice;
        if(choice > 1 || choice < 12){
        	cout<<"Invalid!!!";
		}
		else{
			
        cout<<"What do you want to buy from our inventory, Sir?"<<endl;
        cout<<"Enter: ";
        cin>>choice;
        cout<<"Enter the amount of "<< suppliess[choice - 1]<<":";
        int amount;
        cin>>amount;
        cout<<"\t\t\t\t\t\t------------------------------\n\n";	

        cout<<"Total " << suppliess[choice - 1] << " are " << stock[amount] << "."<<endl;
        
        if(amount > stock[choice - 1]){
            cout<< "Sorry, we do not have enough stock."<<endl;
        } 
		else{
        cout<<"You bought " << suppliess[choice - 1] << " are " << amount << "."<<endl;
        cout<<"Remaining " << suppliess[choice - 1] << " are " << stock[amount - 1] << "."<<endl;
        }
         
	}
}

};


//class recipte{
//	public:
//		
//		void billing(){
//			cout<<"\n\n\\t\t\t\t\t\t\t UMT Motors\n\n";
//			cout<<"-----------------------------------------------------------------\n";
//			cout<<"PRODUCT\t\t\t\t\tQTY\t\tPRICE\t\t\tPROMO\t\t\tTOTAL\n\n";
//			cout<<"TOTAL QTY\t\t\t\t";
////			cout<<
//		}
//		
//};

//class Receipt{
//public:
//	
//    void bill() const{
//    	
//        double total = 0;
//        cout << "\n\n\t\t\t\t\t\t\t UMT Motors\n\n";
//        cout << "-----------------------------------------------------------------\n";
//        cout << "PRODUCT\t\t\t\t\tQTY\t\tPRICE\t\tTOTAL\n";
//        cout << "-----------------------------------------------------------------\n";
//
//        for (const auto item){
//            double price = item.second * 100;  // Assuming each item costs 100 for simplicity
//            total += price;
//            cout << item.first << "\t\t\t" << item.second << "\t\t" << 100 << "\t\t" << price << "\n";
//        }
//        cout << "-----------------------------------------------------------------\n";
//        cout << "TOTAL\t\t\t\t\t\t\t\t\t" << total << "\n";
//        cout << "-----------------------------------------------------------------\n";
//        cout << "Date and Time: " << Time << endl;
//    }
//};

//class Receipt : public supplies{
//public:
//    void bill() {
//        cout <<"\n\n\t\t\t\t\t\t\t UMT Motors\n\n";
//        cout <<"-----------------------------------------------------------------\n";
//        cout <<"PRODUCT\t\t\t\t\tQTY\t\tPRICE\t\t\tPROMO\t\t\tTOTAL\n\n";
//        cout <<"Name: " << name << endl;
//        cout <<"CNIC: " << CNIC << endl;
//        cout<<"You bought " << suppliess[choice - 1] << " are " << amount << "."<<endl;
//        cout <<"Time: "<<time<<endl;
//    }
//};
    
    
//        Login system


class signup{
	protected:
		string username;
		int password;
	public:
	
//  constructor
    signup(){
    	username = "no name";
    	password = 0;
	}
	
	void setName(string n){
		username = n;
	}
	string getName(){
		return username;
	}
	void setPass(int p){
		password = p;
	}
	int getPass(){
		return password;
	}
	
	void print(){
		
			
		cout<<"\n\n\n\n\n\t\t\t\t\t   ********************************************\n"; 
		cout<<"\t\t\t\t\t   *         Creating a new Account           *\n";
		cout<<"\t\t\t\t\t   *                                          *\n";
		cout<<"\t\t\t\t\t   *      Enter Your Username And Password    *\n";
		cout<<"\t\t\t\t\t   *                                          *\n";
		cout<<"\t\t\t\t\t   ********************************************\n";
		cout<<"Enter Username: ";
		cin>>username;
		cout<<"Enter Password: ";
		cin>>password;
		
		
//         File Handling

		
		ofstream out("logins.txt", ios :: app);
        out<<username<<" ";
        out<<password<<endl;
        out.close();
        
    }
    
};

class signin : protected signup{

    public:
    	
    void enterr(){
	
    string name, pass;
  	char ch;
  	
  	
q:
    	
		cout<<"\n\n\n\n\n\t\t\t\t\t   ***************************************\n"; 
		cout<<"\t\t\t\t\t   *  Enter Your Username And Password   *\n";
		cout<<"\t\t\t\t\t   *                                     *\n";
		cout<<"\t\t\t\t\t   ***************************************\n"; 
    	cout<<"\t\t\t\t\t\t------------------------------\n\n";	
    	cout << "\t\t\t\t\t\tEnter Username: ";
        cin>>name;
	 
	    cout<<"\n\t\t\t\t\t\tEnter Password: ";
	    
		ch = _getch();
    while ((ch = _getch()) != '\r') { // \r is the carriage return character, equivalent to Enter key
        if (ch == '\b') { // Handle backspace
            if (!pass.empty()) {
                pass.pop_back();
            }
        } else {
            pass.push_back(ch);
            std::cout << '*'; 
        }
    }
        
    ifstream in;
	in.open("logins.txt");
    string storedname, storedpass;
    bool found = false;
    
    if(in.is_open()){
    	while (in >> storedname >> storedpass){
    		if( storedname == name && storedpass == pass){
    			found = true;
    			break;
			}
		}
		in.close();
	
	if(found){
		cout<<"Login successful message!";
	}
	else 
	{
		cout<<"ERROR! Try Again."<<endl;
		system("pause");
		system("cls");
		goto q;
		
        exit(0);
		}
}
}

};

class forget_id : protected signin{
	public:
		
	int choose;
	string name,fpass,fid;
	
	void enter(){
		
	r:
		
	cout<<"\n\n\n\n\n\t\t\t\t\t   ***************************************\n"; 
	cout<<"\t\t\t\t\t   *                                     *\n";
	cout<<"\t\t\t\t\t   *     Forgot Password Not Worry!      *\n";
	cout<<"\t\t\t\t\t   *            We will Fix              *\n";
	cout<<"\t\t\t\t\t   *                                     *\n";
	cout<<"\t\t\t\t\t   ***************************************\n"; 
    cout<<"\n\n\n\nLoading Please Wait....";

    sleep(4);
}
    
	void fixer(){
	
			
		system("cls");
		int count=0;
		
		cout<<"\n\n\n\n\n\t\t\t\t\t   ***************************************\n"; 
		cout<<"\t\t\t\t\t   *                                     *\n";
		cout<<"\t\t\t\t\t   *            We will Fix Here         *\n";
		cout<<"\t\t\t\t\t   *                                     *\n";
		cout<<"\t\t\t\t\t   ***************************************\n"; 
		cout<<"\n\n\n\t\t\t\t\t\t------------------------------";
    	cout<<"\n\t\t\t\t\tPlease Enter Your Username: ";
    	cin>>name;
    	
    	   ifstream to_forget("logins.txt");
    	       while(to_forget>>fid>>fpass){
    	       	
    	       	    if(fid == name){
    	       	    	count = 1;
					   }
				to_forget.close();
				
				     	if(count==1)
						{
						
							cout<<"\n\n Your Account Is SuccessFully Found ! ";
							cout<<"\n-------------------------------------------";
							cout<<"\n\n Your Password Is: "<<fpass<<endl;
							cout<<"\n-------------------------------------------"<<endl;
							system("pause");
							system("cls");
						}
					else
						{																										  		                                                                                                  
							cout<<"\n\n\a Your Username Does not Exist !! \n \n\n You Want To SignUp . "<<endl;
							system("pause");
							system("cls");
					 }
			   }
    	   
	}

	


    
};
		
		

//                                      MAIN


int main()
{
	

		

//        Class Object Declaration

	customer musa;
	delete_customer es;
	history_customer cose;
	worker umer;
    history_worker um;
	car_information honda;
	supplies s;
	

//      Login System Object Declaration	


	signin sn;
	signup sp;
	forget_id as;

	
	
//         Welcome


system("color 07");	
cout<<"\n\n\n\t\t\t\t ---------------------------------------------";
cout<<"\n\t\t\t\t *********************************************";
cout<<"\n\t\t\t\t                                             ";
cout<<"\n\t\t\t\t                WELCOME TO                   ";
cout<<"\n\t\t\t\t                                             ";
cout<<"\n\t\t\t\t         UMT(UMER MOSA TALHA) MOTORS         ";
cout<<"\n\t\t\t\t                                             ";
cout<<"\n\t\t\t\t ********************************************";
cout<<"\n\t\t\t\t ---------------------------------------------\n\n";
    for (int i = 0; i <= 100; i++) {
        cout<<"\rLoading: "<<i<< "%" <<flush;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
    
    
system("cls");	

	int choice;	
e:
	cout<<"\t\t\t______________________________________________________________________\n\n\n";
	cout<<"\t\t\t                          Welcome To Login Page                        \n\n\n";
	cout<<"\t\t\t _____________________________    MENU    ____________________________  \n\n";
	cout<<"\t\t\t                                                                         \n\n";
	cout<<"\t\t\t\t\t _____________________________________\n";
	cout<<"\t\t\t\t\t|                                     |\n";
	cout<<"\t\t\t\t\t|        Press 1 For Sign In          |\n ";
	cout<<"\t\t\t\t\t|        Press 2 For Sign Up          |\n";
	cout<<"\t\t\t\t\t|        Press 3 For Forget ID        |\n";
	cout<<"\t\t\t\t\t|        Press 4 For Exit             |\n";
	cout<<"\t\t\t\t\t|_____________________________________|\n\n\n";
	cout<<"\t\t\t\t\t Enter Your Choice :  ";
	cin>>choice;
	
	switch(choice)
		{
			case 1:
				{
					system("cls");
					sn.enterr();
					system("cls");
					break;   
				}
			case 2:
				{
					system("cls");
					sp.print();
					system("cls");

					break;
				}
			case 3:
				{
				   system("cls");
				   as.enter();
				    system("cls");
    cout<<"\n\t\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t\t|        .Press 1 To Search Id By Username.       |\n";
    cout<<"\t\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t\t|        .Press 2 To Create New Account.          |\n";
    cout<<"\t\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t\tPlease Enter Your Choice: ";
	int choose;
	cin>>choose;
	
	if(choose == 1){
		as.fixer();
	}
	if(choose == 2){
		signup a;
		a.print();
		system("cls");
	}
				}
			case 4:
				{
				    system("cls");
					cout<<"\n\n\t\t Thank You !!\n\n";  
					system("pause"); 
goto e;
					break;
			
				}
			default:
				system("cls");
				cout<<"\n\n\t \a Please Make Sure Your Choice Is "<<choice<<" Valid !!\n\n";
					
		}	
	

x:

cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t  UMT MOTORS \n\n";
cout<<"\n\n\t\t\t\t\t  Choose from the following Options: \n\n";
cout<<"\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t|             1.  -> Enter New Customer Record                    |\n";
cout<<"\t\t\t\t|             2.  -> Delete Customer Information                  |\n";
cout<<"\t\t\t\t|             3.  -> Full History of the Customer                 |\n";
cout<<"\t\t\t\t|             4.  -> Enter a new Worker Information               |\n";
cout<<"\t\t\t\t|             5.  -> Full History of the Worker                   |\n";
cout<<"\t\t\t\t|             6.  -> Add Car Information                          |\n";
cout<<"\t\t\t\t|             7.  -> Full History of the Car                      |\n";
cout<<"\t\t\t\t|             8.  -> Inventory Menu                               |\n";
cout<<"\t\t\t\t|             9.  -> Supplies In Inventory                        |\n";
cout<<"\t\t\t\t|            10.  -> Logout                                       |\n";
cout<<"\t\t\t\t|            11.  -> Exit the Program                             |\n";
cout<<"\t\t\t\t|_________________________________________________________________|\n\n";
	

a:
	
    int option;      	

	cout<<"Enter option: ";
    cin>>option;
    
    switch(option)    
{
  
//      1
  
	case 1:
{
	system("cls");
	musa.entery();

    cout<<"\n\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 1 To Return MENU Page.            |\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 2 To Return Login Page.           |\n";
    cout<<"\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t          Please Enter Your Choice: ";   
	int choose;
	cin>>choose;
	
	if(choose == 1){
		system("cls");
goto x;
	}
	
	else if(choose == 2){
		system("cls");
goto e;
	}
	
	break;
}
	
	
//   2

    case 2:
{

	es.print();
	
	cout<<"\n\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 1 To Return MENU Page.            |\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 2 To Return Login Page.           |\n";
    cout<<"\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t          Please Enter Your Choice: ";   
	int choose;
	cin>>choose;
	
	if(choose == 1){
		system("cls");
goto x;
	}
	
	else if(choose == 2){
		system("cls");
goto e;
	}
	
	break;
}

//   3
	
	case 3:
{

		cose.out();

    cout<<"\n\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 1 To Return MENU Page.            |\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 2 To Return Login Page.           |\n";
    cout<<"\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t          Please Enter Your Choice: ";   
	int choose;
	cin>>choose;
	
	if(choose == 1){
		system("cls");
goto x;
	}
	
	else if(choose == 2){
		system("cls");
goto e;
	}
	
	break;
}
	
//    4	
	
	case 4:
{

		umer.entery();
	

    cout<<"\n\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 1 To Return MENU Page.            |\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 2 To Return Login Page.           |\n";
    cout<<"\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t          Please Enter Your Choice: ";   
	int choose;
	cin>>choose;
	
	if(choose == 1){
		system("cls");
goto x;
	}
	
	else if(choose == 2){
		system("cls");
goto e;
	}
	
	break;
}
	
	
//     5
    
    case 5:
{
    	
    um.history();
    
    cout<<"\n\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 1 To Return MENU Page.            |\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 2 To Return Login Page.           |\n";
    cout<<"\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t          Please Enter Your Choice: ";                
	int choose;
	cin>>choose;
	
	if(choose == 1){
		system("cls");
goto x;
	}
	
	else if(choose == 2){
		system("cls");
goto e;

    }
    
	break;
}
	
//     6

	case 6:
{
		

	honda.entery();	
    cout<<"\n\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 1 To Return MENU Page.            |\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 2 To Return Login Page.           |\n";
    cout<<"\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t          Please Enter Your Choice: ";                
	int choose;
	cin>>choose;
	
	if(choose == 1){
		system("cls");
goto x;
	}
	
	else if(choose == 2){
		system("cls");
goto e;
 
	}
	
	break;
}
	
//    9
	
	case 9:	
{

    s.displayMenu();
	    
    cout<<"\n\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 1 To Return MENU Page.            |\n";
    cout<<"\t\t\t\t|                                                 |\n";
    cout<<"\t\t\t\t|        .Press 2 To Return Login Page.           |\n";
    cout<<"\t\t\t\t|_________________________________________________|\n";
	cout<<"\n\n\t\t\t\t          Please Enter Your Choice: ";                
	int choose;
	cin>>choose;
	
	if(choose == 1){
		system("cls");
goto x;
	}
	
	else if(choose == 2){
		system("cls");
goto e;
    }

    break;
}

	
//     10
	case 10:
{
		system("cls");
//		
//		double total = 0;
//        cout << "\n\n\t\t\t\t\t\t\t UMT Motors\n\n";
//        cout << "-----------------------------------------------------------------\n";
//        cout << "PRODUCT\t\t\t\t\tQTY\t\tPRICE\t\tTOTAL\n";
//        cout << "-----------------------------------------------------------------\n";

//        for (const auto item){
//            double price = item.second * 100;  // Assuming each item costs 100 for simplicity
//            total += price;
//            cout << item.first << "\t\t\t" << item.second << "\t\t" << 100 << "\t\t" << price << "\n";
//        }

        
//        cout<<
//        cout << "-----------------------------------------------------------------\n";
//        cout << "TOTAL\t\t\t\t\t\t\t\t\t" << total << "\n";
//        cout << "-----------------------------------------------------------------\n";
//        cout << "Date and Time: " << Time << endl;

        cout <<"\n\n\t\t\t\t\t\t\t UMT Motors\n\n";
        cout <<"-----------------------------------------------------------------\n";
        cout <<"PRODUCT\t\t\t\t\tQTY\t\tPRICE\t\t\tPROMO\t\t\tTOTAL\n\n";
        cout <<"Name: " << musa.getFName() << endl;
        cout <<"CNIC: " << musa.getCniC() << endl;
//        cout<<"You bought " << suppliess[choice - 1] << " are " << amount << "."<<endl;
        cout <<"Time: "<<time<<endl;


		system("pause");
		
		
    cout<<"\n\t\t\t\t ---------------------------------------------";
    cout<<"\n\t\t\t\t *********************************************";
    cout<<"\n\t\t\t\t                                              ";
    cout<<"\n\t\t\t\t             You Are LOG OUT From             ";
    cout<<"\n\t\t\t\t                                              ";
    cout<<"\n\t\t\t\t             "<< sp.getName() <<"Account      ";
    cout<<"\n\t\t\t\t                                              ";
    cout<<"\n\t\t\t\t ******************************************** ";
    cout<<"\n\t\t\t\t ---------------------------------------------";
goto e;

    break;
}
	
//     11
	
	case 11:
{

	system("cls");
    cout<<"\n\t\t\t\t ---------------------------------------------";
    cout<<"\n\t\t\t\t *********************************************";
    cout<<"\n\t\t\t\t                                              ";
    cout<<"\n\t\t\t\t             Thanks For Coming                ";
    cout<<"\n\t\t\t\t                                              ";
    cout<<"\n\t\t\t\t               UMT MOTORS                     ";
    cout<<"\n\t\t\t\t                                              ";
    cout<<"\n\t\t\t\t ******************************************** ";
    cout<<"\n\t\t\t\t ---------------------------------------------";
    
    break;
}
	
	
	default:
{
		cout<<"Invalid choice.\n\n";
goto x;
}


    return 0;
}

}


