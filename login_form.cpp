#include<iostream>

#include<fstream>

using namespace std;

int main()

{

string

command, name, password, inName, inPassword, signupName, signupPassword;





 cout<<"Choose from all three of what you want to do and write it down\n"<<endl;




 while (1)

{

cout<<"sign up/sign in/exit \n\n" <<"Enter the chosen Command: ";

getline(cin, command);




 /*exit*/

if (command=="exit")

{

return 1;

}




 /*sign up*/

if (command=="sign up")

{




 ofstream g("registration.txt");

if (!g.is_open())

{

cout<<"could not open file\n";

return 0;

}

cout<<"\n\n"

<<"Enter Your Username: ";

getline(cin, signupName);

cout<<"Enter Your Password:";

getline(cin, signupPassword);

g<<signupName;

g<<'\n';

g<<signupPassword;

g.close();

cout<<"\n******************************************************************\n"

"******************************************************************";

}

if (command=="sign in")

{




 ifstream f("registration.txt");




 if (!f.is_open())

{

cout<<"could not open file\n";

return 0;

}

getline(f, name, '\n');

getline(f, password, '\n');




 f.close();




 /*login*/




 while (1)

{




 cout<<"\n\n\n"

<<"Enter Username: ";

getline(cin, inName);

cout<<"Enter Password: ";

getline(cin, inPassword);




 if (inName==name && inPassword==password)

{

cout<<"Login Successfuly\n" <<"Welcome, "<<inName;

cout<<"\n\n******************************************************************\n"

"******************************************************************";

break;




 }

cout<<"incorrect name or password\n";

}




 }

cout<<"\n\n\n";

}

return 1;

}