#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

struct emp{
    string name,id,address;
    int contact, salary;
};

emp e [100];
int total =0;

void empdata(){
  int choice;
  cout<<"how many employee data do you want to enter ??"<<endl;
  cin>>choice;
  for(int i =total;i<total+choice;i++){
        cout<<"Enter data of employee"<<i+1<<endl;
        cout<<"Employee name: ";
        cin>>e[i].name;
        cout<<"id: ";
        cin>>e[i].id;
        cout<<"Address: ";
        cin>>e[i].address;
        cout<<"contact: ";
        cin>>e[i].contact;
        cout<<"salary: ";
        cin>>e[i].salary;
  }
  total = total+choice;
}

void show(){
     if(total!=0){
         for(int i =0;i<total;i++){
        cout<<"Enter data of employee"<<i+1<<endl;
        cout<<"Employee name: "<<e[i].name<<endl;
        cout<<"id: "<<e[i].id<<endl;
        cout<<"Address: "<<e[i].address<<endl;
        cout<<"contact: "<<e[i].contact<<endl;
        cout<<"salary: "<<e[i].salary<<endl;
        break;
         }
     }else {
       cout<<"Your record is empty"<<endl;
     }
}

void search(){
  if(total!=0){
       string id;
      cout<<"Enter the id of data which you want to search"<<endl;
      cin>>id;
       for(int i =0;i<total;i++){
         if(id==e[i].id){
        cout<<"Enter data of employee"<<i+1<<endl;
        cout<<"Employee name: "<<e[i].name<<endl;
        cout<<"id: "<<e[i].id<<endl;
        cout<<"Address: "<<e[i].address<<endl;
        cout<<"contact: "<<e[i].contact<<endl;
        cout<<"salary: "<<e[i].salary<<endl;
        break;
         }
         if(i==total-1){
             cout<<"No such record found"<<endl;
         }
       }
     }else {
       cout<<"Your record is empty"<<endl;
     }
    
}

void  update(){
    if(total!=0){
       string id;
      cout<<"Enter the id of data which you want to update"<<endl;
      cin>>id;
       for(int i =0;i<total;i++){
         if(id==e[i].id){
        cout<<"Previous data:"<<endl;
        cout<<"Enter data of employee"<<i+1<<endl;
        cout<<"Employee name: "<<e[i].name<<endl;
        cout<<"id: "<<e[i].id<<endl;
        cout<<"Address: "<<e[i].address<<endl;
        cout<<"contact: "<<e[i].contact<<endl;
        cout<<"salary: "<<e[i].salary<<endl;
        cout<<"Enter new data of employee"<<endl;

        cout<<"Employee name: ";
        cin>>e[i].name;
        cout<<"id: ";
        cin>>e[i].id;
        cout<<"Address: ";
        cin>>e[i].address;
        cout<<"contact: ";
        cin>>e[i].contact;
        cout<<"salary: ";
        cin>>e[i].salary;

        break;

         }
         if(i==total-1){
             cout<<"No such record found"<<endl;
         }
       }
     }else {
       cout<<"Your record is empty"<<endl;
     }
    
}

void del(){
  if(total!=0){
      char user;
      cout<<"press 1 to delete the full record"<<endl;
      cout<<"press 2 to delete the specific record "<<endl;
      user = getch();
      if(user=='1'){
         total=0;
         cout<<"All record is deleted...!!!"<<endl;
         }else if(user=='2'){
           string id;
           cout<<"Enter the id of which you want to delete "<<endl;
           cin>>id;
           for(int i =0;i<total;i++){
            if(id==e[i].id){
              for(int j =i;j<total;j++){
              e[i].name=e[i+1].name;
              e[i].id=e[i+1].id;
              e[i].address=e[i+1].address;
              e[i].contact=e[i+1].contact;
              e[i].salary=e[i+1].salary;
              total--;
              break;
             }
             if(i==total-1){
                cout<<" No such record found"<<endl;
             }
         }
      }
  }else {
    cout<<"Your record is empty"<<endl;
  }
}
}
int main()
{
    cout<<"Employee Management System"<<endl;
    cout<<"Sign UP"<<endl;
    string username , password;
   cout<<"Enter username"<<endl;
   cin>>username;
   cout<<"Enter password"<<endl;
   cin>>password;
  
   for(int i =0;i<4;i++){
      cout<<".";
      Sleep(1000);
   }

    cout<<"Your id created successfully"<<endl;

    system("CLS");
    start:

     system("CLS");


     cout<<"Employee Management System"<<endl;
     cout<<"Login"<<endl;
     string username1 , password1;
     cout<<"username: ";
      cin>>username1;
     cout<<"password: ";
     cin>>password1;
     if(username1==username && password1==password){
          system("CLS");
          char user;
          while(1){
            cout<<"press 1 to enter data "<<endl;
            cout<<"press 2 to show data "<<endl;
            cout<<"press 3 to search data "<<endl;
            cout<<"press 4 to update data "<<endl;
            cout<<"press 5 to delete data "<<endl;
            cout<<"press 6 to logout data "<<endl;
            cout<<"press 7 to exit "<<endl;
            user=getch();
             system("CLS");
            switch(user){
                 case '1':
                      empdata();
                      break;
                case '2':
                      show();
                      break; 

               case '3':
                      search();
                      break;   

              case '4':
                      update();
                      break;  

              case '5':
                      del();
                      break; 

              case '6':
                      goto start;
                      break;  
               default:
               cout<<"\aInvalid input "<<endl;
               break;             
            }
          }
     }else if(username1!=username){
         cout<<"Your username is incorrect"<<endl;
         Sleep(2000);
         goto start;
     }
     else if(password1!=password){
         cout<<"Your password is incorrect"<<endl;
           Sleep(2000);
           goto start;
     }

   return 0;

}