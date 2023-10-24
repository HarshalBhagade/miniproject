#include <iostream>
#include <string>
using namespace std;

void decvar(char languagechoice);
void print(char languagechoice);
void invar(char languagechoice);
void loop();
void choice();
void freewrite();
void decisional();
void backf();

string output="#include <iostream>\n#include <string>\nusing namespace std;\nint main()\n{\n";
string var="The declared variables are\n";
string back="#include <iostream>\n#include <string>\nusing namespace std;\nint main()\n{\n";
string temp;
char languagechoice;

int main(){

cout<<"Language selection\n1.C\n2.C++"<<endl;
cin>>languagechoice;
if(languagechoice=='1'){
   output="#include<stdio.h>\n#include<string.h>\nint main()\n{\n";
   back="#include<stdio.h>\n#include<string.h>\nint main()\n{\n";
}else if(languagechoice=='2'){

}else{
   cout<<"Invalid input"<<endl;
}

choice();

output=output+"}\n";
cout << output<<endl;

    return 0;
}

void choice(){
 char choice;
   int l=1;

   while (l==1)
{
   cout << "\nEnter what you want to do\n" << endl;
   cout << "1.Declare a variable \n2.Print\n3.User Input(Varibles need to be declared prior)\n4.Add a Loop\n5.Conditional\n6.Free write\n7.Undo(Can be used only once at a time)" << endl;
   cin >> choice;
   cin.ignore();
   
   if(choice=='1'){
    decvar(languagechoice);
   }
   else if(choice=='2'){
    print(languagechoice);

   }
   else if(choice=='3'){
    invar(languagechoice);
   }
   else if(choice=='4'){
    loop();
   }
   else if(choice=='5'){
    decisional();
   }
   else if(choice=='6'){
    freewrite();
   }
   else if(choice=='7'){
    backf();
   }
   else
   {
      cout<<"Invalid input"<<endl;
   }
   
cout<<"Do you want to continue\n1.Yes\n2.No"<<endl;
cin>>l;
}
}

void decvar(char languagechoice){
   back=output;
   cout<<var<<endl;
char varc;
 cout << "Which variable do you want to declare"<<endl;
      cout<<"1.Int"<<endl<<"2.Float"<<endl<<"3.Char"<<endl<<"4.Bool"<<endl<<"5.String"<<endl<<"6.Array"<<endl;
      cin>>varc;
      
      switch(varc)
      {
      case '1':
      cout<<"What do you want to name the integer(The name should start with a letter or underscore)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"int "+temp+";\n";
      cout << output<<endl;
      var=var+"int "+temp+";\n";
      temp.clear();
         break;
      
      case '2':
      cout<<"What do you want to name the float(The name should start with a letter or underscore)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"float "+temp+";\n";
      cout << output<<endl;
      var=var+"float "+temp+";\n";
         break;

      case '3':
      cout<<"What do you want to name the char(The name should start with a letter or underscore)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"char "+temp+";\n";
      cout << output<<endl;
      var=var+"char "+temp+";\n";
         break;

      case '4':
      cout<<"What do you want to name the bool(The name should start with a letter or underscore)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"bool "+temp+";\n";
      cout << output<<endl;
       var=var+"bool "+temp+";\n";
         break;

      case '5':

      if (languagechoice=='1')
      {
      cout<<"What do you want to name the string(The name should start with a letter or underscore)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"string "+temp+"[";
      var = var + "string "+temp+"[";
      cout<<"Enter string size"<<endl;
      getline(cin, temp);
      output=output+temp+"];\n";
      var = var + temp+"];\n";
      cout << output<<endl;
      break;
      }
      else if(languagechoice=='2'){
        cout<<"What do you want to name the string(The name should start with a letter or underscore)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"string "+temp+";\n";
      cout << output<<endl;
       var=var+"string "+temp+";\n";
         break;
      }
      else {
         cout<<"Invalid input"<<endl;
         break;
      }

      case '6':
      cout<<"What do you want to name the array(The name should start with a letter or underscore)"<<endl;
      cin.ignore();
      getline(cin, temp);
      cout<<"Enter array data type"<<endl;
      cout<<"1.Int"<<endl<<"2.Float"<<endl<<"3.Char"<<endl;
      int adt;
      cin>>adt;
      cout<<"How long do you want the array to be"<<endl;
      char al[4];
      cin>>al;
      switch (adt)
      {
      case 1:
        output=output+"int "+temp+"["+al+"];\n";
        cout << output<<endl;
         var=var+"int "+temp+"["+al+"];\n";
         break;
      
      case 2:
        output=output+"float "+temp+"["+al+"];\n";
        cout << output<<endl;
        var=var+"float "+temp+"["+al+"];\n";
         break;

      case 3:
        output=output+"char "+temp+"["+al+"];\n";
        cout << output<<endl;
        var=var+"char "+temp+"["+al+"];\n";
         break;
 
      default:
      cout<<"Invalid input"<<endl;
         break;
      }
      break;
        
      default:
      cout<<"Invalid input"<<endl;
         break;

      }
}

void print(char languagechoice){

back=output;
if(languagechoice=='1'){
cout<<"What do you want to do\n1.Print a variable\n2.Output a statement"<<endl;
char pc1;
cin>>pc1;

if(pc1=='1'){
   cout<<var<<endl;
   cout<<"Variable type\n1.Int"<<endl<<"2.Float"<<endl<<"3.Char"<<endl<<"4.Bool"<<endl<<"5.String"<<endl<<"6.Array"<<endl;
   char vaot2;
   cin>>vaot2;
   if(vaot2=='1'){
   cout<<"Enter Varible name"<<endl;
   cin.ignore();
   getline(cin, temp);
   output=output+"printf(\"\%d\","+temp+");\n";
   cout << output<<endl;
   }else if(vaot2=='2'){
   cout<<"Enter Varible name"<<endl;
   cin.ignore();
   getline(cin, temp);
   output=output+"printf(\"\%f\","+temp+");\n";
   cout << output<<endl;
   }else if(vaot2=='3'){
   cout<<"Enter Varible name"<<endl;
   cin.ignore();
   getline(cin, temp);
   output=output+"printf(\"\%c\","+temp+");\n";
   cout << output<<endl;  
   }else if(vaot2=='4'){
   cout<<"Enter Varible name"<<endl;
   cin.ignore();
   getline(cin, temp);
   output=output+"printf(\"\%d\","+temp+");\n";
   cout << output<<endl;  
   }else if(vaot2=='5'){
   cout<<"Enter Varible name"<<endl;
   cin.ignore();
   getline(cin, temp);
   output=output+"printf(\"\%s\","+temp+");\n";
   cout << output<<endl;  
   }else if(vaot2=='6'){
   cout<<"Enter array size"<<endl;
   cin.ignore();
   getline(cin, temp);
   output=output+"for(int i=0;i<"+temp;
   cout<<"Enter Varible name"<<endl;
   getline(cin, temp);
   output=output+";i++)\n{\n";
   char mofa;
   cout<<"Enter array data type"<<endl;
   cout<<"Variable type\n1.Int"<<endl<<"2.Float"<<endl<<"3.Char"<<endl;
   cin>>mofa;
   if(mofa=='1'){
   output=output+"printf(\"\%d\","+temp+"[i]);\n}\n";
   }else if(mofa=='2'){
   output=output+"printf(\"\%f\","+temp+"[i]);\n}\n";
   }else if(mofa=='3'){
   output=output+"printf(\"\%c\","+temp+"[i]);\n}\n";
   }else{
      cout<<"Invalid input"<<endl;
   }
   cout<<output<<endl;
   }else{
      cout<<"Invalid input"<<endl;
   }
}
else if(pc1=='2'){
      cout << "Enter what you want to output" << endl;
      cin.ignore();
      getline(cin, temp);
      output =output+"printf(\""+temp+"\\n\");\n";
      cout << output<<endl;
      temp.clear();
}else{
   cout<<"Invalid input"<<endl;
}
}
else if(languagechoice=='2'){
cout<<"What do you want to do\n1.Print a variable\n2.Output a statement"<<endl;
char pc;
cin>>pc;

if (pc=='1')
{
   cout<<var<<endl;
   cout<<"Variable type\n1.Array\n2.Other"<<endl;
   char vaot;
   cin>>vaot;
   if(vaot=='1'){
   cout<<"Enter array size"<<endl;
   cin.ignore();
   getline(cin, temp);
   output=output+"for(int i=0;i<"+temp;
   cout<<"Enter Varible name"<<endl;
   getline(cin, temp);
   output=output+";i++)\n{\ncout<<"+temp+"[i];\n}\n";
   cout<<output<<endl;
   }else if(vaot=='2'){
   cout<<"Enter Varible name"<<endl;
   cin.ignore();
   getline(cin, temp);
   output=output+"cout<<"+temp+";\n";
   cout << output<<endl;
   }
  else{
   cout<<"Invali input"<<endl;
  }
}
else if (pc=='2')
{
   cout << "Enter what you want to output" << endl;
      cin.ignore();
      getline(cin, temp);
      output =output+"cout<<\""+temp+"\"<<endl;\n";
      cout << output<<endl;
      temp.clear();
}
else{
   cout<<"Invalid input"<<endl;
}
}else{
   cout<<"Invalid input"<<endl;
}
}

void invar(char languagechoice){
   back=output;
 if(languagechoice=='1'){
 char vardc;
 cout << "Which variable do you want to input"<<endl;
      cout<<var<<endl;
      cout<<"1.Int"<<endl<<"2.Float"<<endl<<"3.Char"<<endl<<"4.Bool"<<endl<<"5.String"<<endl<<"6.Array"<<endl;
      cin>>vardc;

   switch(vardc)
      {
      case '1':
      cout<<"Enter name of integer(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"scanf(\"\%d\",&"+temp+");\n";
      cout << output<<endl;
         break;
      
      case '2':
      cout<<"Enter name of float(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"scanf(\"\%f\",&"+temp+");\n";
      cout << output<<endl;
         break;

      case '3':
      cout<<"Enter name of char(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"scanf(\"\%c\",&"+temp+");\n";
      cout << output<<endl;
         break;

      case '4':
      cout<<"Enter name of bool(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"scanf(\"\%d\",&"+temp+");\n";
      cout << output<<endl;
         break;

      case '5':
      cout<<"Enter name of string(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"gets("+temp+");\n";
      cout << output<<endl;
         break;

      case '6':
      cout<<"Enter name of array(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      cout<<"How long do you want the array to be"<<endl;
      char adl[4];
      cin>>adl;
      int adtc;
      cout<<"Enter array data type"<<endl;
      cout<<"1.Int"<<endl<<"2.Float"<<endl<<"3.Char"<<endl;
      cin>>adtc;
      if(adtc==1){
      output=output+"for(int i=0;i<"+adl+";i++)\n{\nscanf(\"\%d\",&"+temp+"[i]);\n}\n";
      }else if(adtc==2){
      output=output+"for(int i=0;i<"+adl+";i++)\n{\nscanf(\"\%f\",&"+temp+"[i]);\n}\n";
      }else if(adtc==3){
      output=output+"for(int i=0;i<"+adl+";i++)\n{\nscanf(\"\%c\",&"+temp+"[i);\n}\n";  
      }else{
         cout<<"Invalid input"<<endl;
      }
      cout << output<<endl;
         break;

      default:
      cout<<"Invalid input"<<endl;
         break;
      }
 }else if(languagechoice=='2'){
  char vard;
      cout << "Which variable do you want to input"<<endl;
      cout<<var<<endl;
      cout<<"1.Int"<<endl<<"2.Float"<<endl<<"3.Char"<<endl<<"4.Bool"<<endl<<"5.String"<<endl<<"6.Array"<<endl;
      cin>>vard;
      
      switch(vard)
      {
      case '1':
      cout<<"Enter name of integer(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"cin>>"+temp+";\n";
      cout << output<<endl;
         break;
      
      case '2':
      cout<<"Enter name of float(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"cin>>"+temp+";\n";
      cout << output<<endl;
         break;

      case '3':
      cout<<"Enter name of char(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"cin>>"+temp+";\n";
      cout << output<<endl;
         break;

      case '4':
      cout<<"Enter name of bool(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"cin>>"+temp+";\n";
      cout << output<<endl;
         break;

      case '5':
      cout<<"Enter name of string(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"getline(cin," + temp + ");\n";
      cout << output<<endl;
         break;

      case '6':
      cout<<"Enter name of array(Pre declared)"<<endl;
      cin.ignore();
      getline(cin, temp);
      cout<<"How long do you want the array to be"<<endl;
      char adl[4];
      cin>>adl;
      output=output+"for(int i=0;i<"+adl+";i++)\n{\ncin>>"+temp+"[i];\n}\n";
      cout << output<<endl;
         break;

      default:
      cout<<"Invalid input"<<endl;
         break;
      }
 }else{
   cout<<"Invalid input"<<endl;
 }
}
void loop(){
   back=output;
   cout<<var<<endl;
   char vare;
   cout<<"Enter which loop you want to make"<<endl;
     cout<<"1.While\n2.Do while\n3.For"<<endl;
     cin>>vare;
     switch(vare)
     {
      case '1': 
      cout<<"Enter termination condition:"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"while("+temp+"){\n";
      cout << output<<endl;
      cout<<"Enter statements to be looped"<<endl;
      choice();
      output=output+"}\n";
      cout << output<<endl;
      break;
      
      case '2':
      output=output+"do{\n";
      cout << output<<endl;
      cout<<"Enter statements to be looped"<<endl;
      choice();
      output=output+"}\n";
      cout << output<<endl;
      cout<<"Enter condition for do"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"while("+temp+");\n";
      cout << output<<endl;
      break;
      
      case '3':
      cout<<"initialize int i = "<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"for(int i="+temp+";i";
      cout << output<<endl;
      cout<<"Enter termination condition:"<<endl;
      getline(cin, temp);
      output=output+temp+";";
      cout << output<<endl;
      cout<<"Enter update in condition"<<endl;
      getline(cin,temp);
      output=output+temp+")\n{\n";
      cout << output<<endl;
      cout<<"Enter statements to be looped"<<endl;
      choice();
      output=output+"}\n";
      cout << output<<endl;
      break;

      default:
      cout<<"Invalid input"<<endl;
      break;
     }

}

void decisional(){
   back=output;
   cout<<"What do you want to do\n1.If Else\n2.Switch\n"<<endl;
   char dc;
   cin>>dc;
   if(dc=='1'){
    cout<<"Enter if condidtion"<<endl;
    cin.ignore();
    getline(cin, temp);
    output=output+"if("+temp+"){\n";
    cout << output<<endl;
    cout<<"Statement selection"<<endl;
    choice();
    output=output+"}\n";
    cout << output<<endl;
    cout<<"What do you want to do\n1.Else if\n2.Else"<<endl;
    char ec;
    cin>>ec;
    while(ec=='1')
    { 
      cout<<"Enter else if condidtion"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"else if("+temp+")\n{\n";
      cout << output<<endl;
      cout<<"Statement selection"<<endl;
      choice();
      output=output+"}\n";
      cout << output<<endl;
      cout<<"What do you want to do\n1.Else if\n2.Else"<<endl;
      cin>>ec;
      }
      if(ec=='2')
      { 
      output=output+"else {\n";
      cout << output<<endl;
      cout<<"Statement selection"<<endl;
      choice();
      output=output+"}\n";
      cout << output<<endl;
      }
      else{
         cout<<"Invalid input"<<endl;
      }
      
   }
   else if(dc=='2'){
      cout<<"Enter condition"<<endl;
      cin.ignore();
      getline(cin, temp);
      output=output+"switch("+temp+")\n{\n";
      cout << output<<endl;
      cout<<"What do you want\n1.Case\n2.Default"<<endl;
      char cdc;
      cin>>cdc;
      if(cdc=='1'){
      {
       while(cdc=='1'){
         cout<<"Enter case value"<<endl;
         cin.ignore();
         getline(cin, temp);
         output=output+"case "+temp+":\n";
         cout << output<<endl;
         cout<<"Statement selection"<<endl;
      choice();
      output=output+"break;\n";
      cout << output<<endl;
      cout<<"What do you want\n1.Case\n2.Default"<<endl;
      cin>>cdc;
      }
      }
      
      if(cdc=='2'){
      output=output+"default:\n";
      cout << output<<endl;
      cout<<"Statement selection"<<endl;
      choice();
      output=output+"break;\n";
      cout << output<<endl;
      }

      else{
         cout<<"Invalid input"<<endl;
         }
      }
      output=output+"}\n";
      cout << output<<endl;
   }
   else{
      cout<<"Invalid input"<<endl;
   }
}

void freewrite(){
   back=output;
   cout<<"Enter the code you want to insert"<<endl;
   getline(cin, temp);
   output=output+temp+";\n";
   cout << output<<endl;
}

void backf(){
   output=back;
   cout<<output<<endl;
}
