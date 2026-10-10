//D1
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"Multiple of 3 between 10 & 50 are as follows:"<<endl;
//     int i;
//     for(i=10;i<50;i++)
//     {
//         if(i%3==0)
//         {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }




// D2

// #include<iostream>
// int main()
// {
//     std:: cout<<"Welcome Noob Coder...";
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"****\n***\n**\n*"<<endl;
//     int a;
//     cout<<"a = "<<a<<endl;
//     int _;
//     cout<<"_ (underscore) = "<<_<<endl;
//     int return = 5;
//     return 0;
//}



// #include<iomanip>
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;       // take garbage value as input
//     int b = 10;
//     int c = -20;
//     cout << "a = "<< a << "\nb = " << b << "\nc = " << c << endl;
//     cout<<"size of int = "<<sizeof(int)<<" bytes\n"<<endl;
    
//     char c1;
//     char c2 = '2';
//     char c3 = '#';
//     char c4 = 'd';
//     cout<<"c1 = "<<c1<<endl;
//     cout<<"c2 = "<<c2<<endl;
//     cout<<"c3 = "<<c3<<endl;
//     cout<<"c4 = "<<c4<<endl;
//     cout<<"size of char = "<<sizeof(char)<<" bytes\n"<<endl;

//     bool b1;
//     bool b2 = true;
//     bool b3 = false;
//     cout<<"b1 = "<<b1<<endl;
//     cout<<"b2 = "<<b2<<endl;
//     cout<<"b3 = "<<b3<<endl;
//     cout<<"size of boolean = "<<sizeof(bool)<<" bytes\n"<<endl;
    
//     float f1;       
//     float f2 = 1.056;
//     float f3 = -20.9876;
//     cout<<"f1 = " << f1 << "\nf2 = " << f2 << "\nf3 = " << f3 << endl;
//     cout<<"size of float = "<<sizeof(float)<<" bytes\n"<<endl;

//     double d1;
//     double d2 = 4.345;
//     double d3 = -9.0224;
//     cout<<"b1 = "<<d1<<endl;
//     cout<<"b2 = "<<d2<<endl;
//     cout<<"b3 = "<<d3<<endl;
//     cout<<"size of double = "<<sizeof(double)<<" bytes\n"<<endl;
    

//     float PI1 = 3.14159265358979323846;  // After decimal float carries precision of 7 digits 
//     double PI2 = 3.14159265358979323846;  // After decimal double carries precision of 16 digits
//     cout << setprecision(20) << "PI1 = " << PI1 << endl;
//     cout << setprecision(20) << "PI2 = " << PI2 << endl;


//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter your age : ";
//     cin>>age;
//     cout<<"Your age is "<<age;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     int sum=a+b;
//     int dif=a-b;
//     int prod = a*b;
//     cout<<"a = "<<a <<" & b = "<<b<<endl;
//     cout<<"sum = "<<sum<<endl;
//     cout<<"diff = "<<dif<<endl;
//     cout<<"prod = "<<prod<<endl;
   
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int eng;
//     int sci;
//     int math;
//     cout<<"Enter ur English marks : ";
//     cin>>eng;
//     cout<<"Enter ur Science marks : ";
//     cin>>sci;
//     cout<<"Enter ur Maths marks : ";
//     cin>>math;

//     float avg = (eng+sci+math)/3.0;   // remove 3.0 to 3 and execute to seee the magic
//     cout<<"Average marks : "<<avg<<endl;

//     return 0;
// }



// // Day 2 Ghar k kama
// #include<iostream>
// using namespace std;
// int main()
// {

//     // //Q1.
//     // float side;
    
//     // cout<<"Enter side of Square : ";
//     // cin>>side;
    
//     // float Area=side*side;
//     // cout<<"Area of square having side "<<side<<" is "<<Area<<"\n"<<endl;


//     // //Q2.
//     // float pen, pencil, eraser, cost, gst, total_cost;
    
//     // cout<<"Enter the cost."<<endl;
//     // cout<<"Pencil : ";
//     // cin>>pencil;
//     // cout<<"Pen : ";
//     // cin>>pen;
//     // cout<<"Eraser : ";
//     // cin>>eraser;
    
//     // cost = pen+pencil+eraser;
//     // cout<<"Cost : "<<cost<<endl;

//     // gst=cost*(18.0/100.0);   
//     // total_cost=gst+cost;
//     // cout<<"GST : "<<gst<<"\nTotal Cost : "<<total_cost<<endl;


//     // //Q3. 
//     // float P,R,T,SI;
//     // cout<<"Welcome to Simple Interest Calculator."<<endl;
//     // cout<<"Principal : ";
//     // cin>>P;
//     // cout<<"Rate : ";
//     // cin>>R;
//     // cout<<"Time : ";
//     // cin>>T;
//     // SI=(P*R*T)/100;
//     // cout<<"Simple Internet : "<<SI<<endl;
   

//     //Q4. 
//     float r, Area;
//     cout<<"Area of circle Calculator."<<endl;
//     cout<<"Enter Radius : ";
//     cin>>r;
//     Area=(3.14)*r*r;
//     cout<<"Area of Circle : "<<Area<<endl;

//    return 0;
// }


//----------------------------------

// #include<iostream>
// using namespace std;
// int main()
// {
//  //   const int num1;          // wrong ddefination of constant
//  //   cout<<"num1 : "<<num1<<endl;


//     float num2 = 10;
//     cout<<"num2 : "<<num2<<endl;


//     const int num3 = 26;
//     cout<<"num3 : "<<num3<<endl;

//     num2 = 23; 
//  // num3 = 25;     // can't reassign valur of a constant
//     cout<<"num2 after reinitilizing : "<<num2<<endl;
//     cout<<"num1 after reinitilizing : "<<num3<<endl;

//    return 0;
// }


//------------------------------------------------------------


// #define i int    // working as datatype modifier
// #define ll long long
// #define g 9.8
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a =10;
//     i b=5;
//     long long x = 78;
//     ll y = 4564;
//     cout<<a<<"\n";
//     cout<<b<<"\n";
//     cout<<x<<"\n";
//     cout<<(10/3)<<endl;
//     cout<<(10/3.0)<<endl;   //Implicit conversion
//     cout<<"value of g defined as "<<g<<endl;
    
//     //Implicit Conversion
//     int a1 = 'A';
//     int a2 = 'Z';
//     int a3 = 'a';
//     int a4 = 'z';
//     int a5 = 'A'+1;
//     cout<<"'A' = "<<a1<<endl;
//     cout<<"'Z' = "<<a2<<endl;
//     cout<<"'a' = "<<a3<<endl;
//     cout<<"'z' = "<<a4<<endl;
//     cout<<"'A' + 1 = "<<a5<<endl;       
//     cout<<('A'+1)<<endl;
//     cout<<('f')<<endl;
//     cout<<('f'+1)<<endl;
//     cout<<"ASCI Value of A-Z : "<<('A'+0)<<"-"<<('Z'-0)<<endl;
//     cout<<"ASCI Value of a-z : "<<('a'+0)<<"-"<<('z'+0)<<endl;
//     cout<<"ASCI Value of @ : "<<('@'+0)<<endl;

//    return 0;
// }




//********************************************* *

// #include<iostream>
// # define PI 3.14
// using namespace std;
// int main()
// {
//     // Explicit Type Conversion
//     cout<<(int)'A'<<endl;
//     cout<<"ASCI Values A-Z : "<<(int)('A')<<"-"<<(int)'Z'<<endl;
//     cout<<"ASCI Values a-z : "<<(int)('a')<<"-"<<(int)'z'<<endl; 
//     cout<<"ASCI Values @ and * : "<<(int)('*')<<" and "<<(int)'@'<<endl; 
    
//     cout<<"PI : "<<(int)(PI)<<endl;
//     cout<<((float)10/3)<<endl;   // 3.3333
//     cout<<(char)('A'+1)<<endl;

//     cout<<"(bool)3 : "<<(bool)3<<endl;
//     cout<<(bool)-10<<endl;
//     cout<<(bool)0<<endl; 
//     cout<<(bool)3+2<<endl;

//     return 0;
// }


// +++++++++++++++++++++++++++++++++++++++++++++++


// #include<iostream>
// using namespace std;
// int main()
// {
//     // Arithmetic Operator
//     // Binary Operator
//     int a = 5, b = 3;
//     cout<<"+ : "<<a+b<<endl;
//     cout<<"- : "<<a-b<<endl;
//     cout<<"* : "<<a*b<<endl;
//     cout<<"/ : "<<a/b<<endl;  // Quotient
//     cout<<"% : "<<a%b<<endl;  // remiander

//     // Unary Operator
//     a = 10;
//     cout<<a<<endl;    // 10
//     a++;
//     cout<<a<<endl;    //11
//     cout<<a++<<endl;  //11
//     --a;
//     cout<<++a<<endl;  //12
//     a = 2;
//     b = a++;
//     b = ++a;
//     cout<<a<<"\n"<<endl;    // 4

//     int x = 3;
//     int y = x++;
//     cout<<x<<endl;  // 4
//     cout<<y<<"\n"<<endl;  // 3

//     x = 3;
//     y = ++x;
//     cout<<x<<endl;  // 4
//     cout<<y<<"\n"<<endl;  // 4    

    

//     // Assignemnt/Compound Assignemnt Operator
//     a = 10;
//     a=a+5;
//     cout<<a<<endl;
//     a+=5;
//     cout<<a<<endl;
//     a/=4;
//     cout<<a<<endl;
//     a=50;
//     a%=7;
//     cout<<a<<"\n"<<endl;


//     // Relational Operator
//     a=10;
//     b=4;
//     cout<<(a>b)<<endl;  // TRUE -> 1
//     cout<<(a<b)<<endl;  // False -> 0
//     cout<<(a==b)<<endl;  // 0
//     cout<<(a!=b)<<endl;  // 1
//     cout<<(a>=b)<<endl;  // 1
//     cout<<(a<=b)<<"\n"<<endl;  // 0


//     // Logical Operator
//     a=5, b=3;
//     cout<<((5>3)&&(9<13))<<endl;  // True --> 1
//     cout<<((5<3)&&(9<13))<<endl;  // false --> 0
//     cout<<((5>3)||(9<13))<<endl;  // True --> 1
//     cout<<((5<3)||(9==13))<<endl;  // false --> 0
//     cout<<(5==3)<<endl;  // false --> 0
//     cout<<!(5==3)<<endl;  // True --> 1
//     return 0;
// }


//________________________________________________



// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;

//     // if(0)
//     // {
//     //     cout<<"compiler see 0 in if-else as FALSE"<<endl;
//     // }
//     // if(23)
//     // {
//     //     cout<<"Compiler sees +ve or -ve number as TRUE"<<endl;
//     // }


//     cout<<"Enter Your age : ";
//     cin>>age;
    
//     // if(age>=18){
//     //     cout<<"Can Vote."<<endl;
//     // }
//     // else{
//     //     cout<<"No Vote, No, NO, NO, No"<<endl;
//     // }
    
//     // // Using Ternary Operator
//     // string iseligeble = (age>=18)?"Can Vote":"No No Can't Vote";
//     // cout<<iseligeble<<endl;
//     // string sensi = (age>=45)?"Welcome Super Senior, you can contest, contest, contest, Wow":(age<=15)?"Jaa-kay dudh pe le!!!!!":"";
//     // cout<<sensi<<endl;

//     // if(age>=45)
//     // {
//     //     cout<<"Welcome Super Senior, you can contest, contest, contest, Wow"<<endl;
//     // }
//     // else if (age<=15){
//     //     cout<<"Jaa-kay dudh pe le!!!!!"<<endl;
//     // }

    
//     return 0;
// }


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// #include<iostream>
// using namespace std;
// int main()
// {
//     // Largest of 2 numbers
//     int num1, num2;
//     cout<<"enter 2 numbers : ";
//     cin>>num1>>num2;
    // if(num1>num2)
    // {
    //     cout<<num1<<" is largest."<<endl;
    // }
    // else if (num1<num2)
    // {
    //     cout<<num2<<" is Largest"<<endl; 
    // }
    // else if(num1 == num2 )
    // {
    //     cout<<"both numbers are equal"<<endl;
    // }

    // // Using Ternary Operator
    // int large = (num1>num2)?num1:num2;
    // cout<<"Largest Number : "<<large<<endl;


    // // If a number is odd or even
    // int num3;
    // cout<<"Enter the number : ";
    // cin>>num3;

    // // Using Ternary Operator
    // string nn = (num3%2!=0)?"ODD":"Even";
    // cout<<"Number is "<<nn<<"."<<endl;

    // if(num3%2!=0)
    // {
    //     cout<<"Odd"<<endl;
    // }
    // else 
    // {
    //     cout<<"EVEN"<<endl;
    // }




    
    // int marks;
    // cout<<"Enter Your Marks : ";
    // cin>>marks;
    // if(marks>=33)
    // {
    //     cout<<"Passed"<<endl;
    // }
    // else 
    // {
    //     cout<<"Fail you mental"<<endl;
    // }


    // Using Ternary Operator
    // string ff = (marks>=90)?"Grade A":(marks>=80)?"Grade B":"Grade C";
    // cout<<ff<<endl;

    // //using else-if
    // if(marks>=90)
    // {
    //     cout<<"Grade A"<<endl;
    // }
    // else if(marks>=80)
    // {
    //     cout<<"Grade B"<<endl;
    // }
    // else
    // {
    //     cout<<"Grade C"<<endl;
    // }

//     return 0;
// }




//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// // Income Tax Calculator

// #include<iostream>
// using namespace std;
// int main()
// {
//     float income, tax;
//     cout<<"Enter your income (in Lakh) : ";
//     cin>>income;

//     // Using Ternary Operator
//     tax = (income<=4)?0:(income>=4 && income<=8)?(0.05*income*100000):(income>=8 && income<=12)?(0.10*income*100000):(income>=12 && income<=16)?(0.15*income*100000):(income>=16 && income<=20)?(0.2*income*100000):(income>=20 && income<=24)?(income*0.25*100000):(income>=24)?(income*0.3*100000):0;   
//     cout<<"Rs. "<<tax<<endl;

//     if(income<=4)
//     {
//         cout<<"No Tax, your Income Tax is Nil."<<endl;
//         tax=0;
//     }
//     else if(income>=4 && income<=8)
//     {
//         tax=(5.0/100)*income ;
//         cout<<"Tax applied : 5%"<<endl;
//     }
//     else if(income>=8 && income<=12)
//     {
//         tax=(10.0/100)*income ;
//         cout<<"Tax applied : 10%"<<endl;
//     }
//     else if(income>=12 && income<=16)
//     {
//         tax=(15.0/100)*income ;
//         cout<<"Tax applied : 15%"<<endl;
//     }
//     else if(income>=16 && income<=20)
//     {
//         tax=(20.0/100)*income ;
//         cout<<"Tax applied : 20%"<<endl;
//     }
//     else if(income>=20 && income<=24)
//     {
//         tax=(25.0/100)*income ;
//         cout<<"Tax applied : 25%"<<endl;
//     }
//     else if(income>=24)
//     {
//         tax=(30.0/100)*income ;
//         cout<<"Tax applied : 30%"<<endl;
//     }
//     cout<<"Income Tax = "<<(tax*100000)<<" Rupees"<<endl;

//     return 0;
// }



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// Largest of three numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout<<"Enter 3 numbers : ";
//     cin>>a>>b>>c;

    // // Using Ternary Operator
    // int xyz = (a>=b&&a>=c)?a:(b>=c)?b:c;
    // cout<<xyz<<" is the Largest Number."<<endl;

//     if(a>=b && a>=c)
//     {
//         cout<<"Largest Number : "<<a<<endl;
//     }
//     else if(b>=c)
//     {
//         cout<<"Largest Number : "<<b<<endl;
//     }
//     else
//     {
//         cout<<"Largest Number : "<<c<<endl;
//     }


//     return 0;
// }




//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// // Switch Statement Program
// #include<iostream>
// using namespace std;
// int main()
// {
//     int day;
//     cout<<"Enter the day number : ";
//     cin>>day;

//     switch(day){
//         case 1: cout<<"Monday"<<endl;
//         break;
//         case 2: cout<<"Tuesday"<<endl;
//         break;
//         case 3: cout<<"Wednesday"<<endl;
//         break;
//         case 4: cout<<"Thursday"<<endl;
//         break;
//         case 5: cout<<"Friday"<<endl;
//         break;
//         case 6: cout<<"Saturday"<<endl;
//         break;
//         case 7: cout<<"Sunday"<<endl;
//         break;
//         default: cout<<"Invalid Day!!!!"<<endl;
//     }
//     return 0;
// }



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// // Calculator
// #include<iostream>
// using namespace std;
// int main()
// {
//     float a,b,result; int op;
//     cout<<"Enter 2 numbers : ";
//     cin>>a>>b;
//     cout<<"Enter 1 to perform Addition"<<endl;
//     cout<<"Enter 2 to perform Subtraction"<<endl;
//     cout<<"Enter 3 to perform Multiplication"<<endl;
//     cout<<"Enter 4 to perform Division"<<endl;
//     cout<<"Enter your Operator number between 1 to 4: ";
//     cin>>op;
//     switch(op)
//     {
//         case 1 : result = a+b;
//         break;
//         case 2 : result = a-b;
//         break;
//         case 3 : result = a*b;
//         break;
//         case 4 : result = a/b;
//         break;
//         default: cout<<"Invalid Operator"<<endl;
//     }
//     string op_c = (op==1)?"+":(op==2)?"-":(op==3)?"*":(op==4)?"/":"Invaild";
//     cout<<a<<" "<<op_c<<" "<<b<<" = "<<result<<endl;
//     return 0;
// }




//?????????????????????????????????????????????????????????????????????????????????????????????????


// //  Write a C++ program to get a number from the user and print whether it's positive, negative or zero.

// #include<iostream>
// using namespace std;
// int main()
// {
//     float num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     string C = (num>0)?"Positive":(num<0)?"Negative":(num==0)?"Zero":" ";
//     cout<<C<<endl;
    
//     return 0;
// }




// // Write a C++ program that takes a year from the user and print whether that year is a leap year or not.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int year;
//     cout<<"Enter Year : ";
//     cin>>year;

//     if(year%4==0 && year%100!=0)
//     {
//         cout<<"Leap Year."<<endl;
//     }
//     else if(year%400==0)
//     {
//         cout<<"Leap Year"<<endl;
//     }
//     else{
//         cout<<"Not Leap Year"<<endl;
//     }
//     return 0;
// }




//  For any 3 digit number check whether it’s an Armstrong number or not. 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a_num, num, rem, arm = 0 ;

//     cout<<"enter 3 digit number : ";
//     cin>>a_num;


    // // Method 1
    // num = a_num;

    // int digit1 = num % 10;
    // num  = num/10;

    // int digit2 = num % 10;
    // num=num/10;

    // int digit3 = num % 10;

    // arm = (digit1*digit1*digit1)+(digit2*digit2*digit2)+(digit3*digit3*digit3);

    // if(arm==a_num){
    // cout<<"Armstrong"<<endl;}
    // else{
    // cout<<"No Armstrong"<<endl;}


//  //   Method 2
//     num = a_num;
//     while(num>0)
//     {
//         rem = num % 10;
//         arm = arm + (rem*rem*rem);
//         num = num / 10;
//     }

//     if(arm==a_num)
//     {
//         cout<<a_num<<" is an Armstrong Number"<<endl;
//     }
//     else
//     {
//     cout<<a_num<<" is not an Armstrong Number."<<endl;
//     }

//     return 0;
// }




//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// // For loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     for(num=1;num<=5;num++)
//     {
//         cout<<num<<" ";
//     }
//     cout<<"\nThe Last value of num : "<<num<<endl;
//     return 0;
// }



// // Infinite For loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     for(i=1;i>=0;i++)
//     {
//         cout<<i<<"   ";
//     }
//     return 0;
// }




// // Some Examples on for loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     // Loop 1
//     for (int i = 0 ; i < 5 ; i++  ) 
//     {
//     cout<<(i+1)<<". Apna College "<<endl ;  
//     }
//     cout<<endl;


//     // Loop 2
//     int n;
//     cout<<"Enter Value of n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<" ";
//     }



//     // Loop 3  
//     // Method 1
//     // Sum of first n Natural Numbers
//     int sum = 0;
//     for(int i = 1; i<=n;i++)
//     {
//         sum+=i;
//     }
//     cout<<"\nSum : "<<sum<<endl;


//     // Method 2  
//     // Sum of first n Natural Numbers
//     sum = n*(n+1)/2;
//     cout<<"Sum using Direct formula : "<<sum<<endl;

//     return 0;
// }





// // While Loop examples
// #include<iostream>
// using namespace std;
// int main()
// {
//     int count = 1;
//     while(count<=10)
//     {
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<"\nDone";
//     return 0;
// }



// // Using for loop to print numbers from n to 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     cout<<"The numbers from "<<n<<" to 1 are as follows:"<<endl;
//     for(int i = n; i>=1; i--)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }



// // Pattern 1 using for loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     // Method 1
//     cout<<"Using method 1"<<endl;
//     for(int i=1; i<5; i++)
//     {
//         for(int j=1; j<=4; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     // Method 2
//     cout<<"\nUsing method 2"<<endl;
//     for(int i=1; i<=4;i++)
//     {
//         cout<<"* * * *"<<endl;
//     }    
//     return 0;
// }



// // Operations on a number using while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0, rem;
//     cout<<"Enter n : ";
//     cin>>n;
    
//     // Print Sum of digit of a number 
//     int i = n;
//     while(i>0)
//     {
//         rem = i % 10;
//         sum += rem;    // sum = sum + rem;
//         i = i / 10;
//     }
//     cout<<"Sum of digits of number "<<n<<" is "<<sum<<endl;
    

//     // Print Sum of odd digits of a number using while loop
//     sum=0;
//     i = n;
//     while(i>0)
//     {
//         rem = i % 10;
//         if(rem%2!=0)
//         {
//             sum += rem;
//         }  
//         i = i / 10;
//     }
//     cout<<"Sum of odd digits of number "<<n<<" is "<<sum<<endl;

    
//     // Print Digits of given number in reverse order
//     cout<<"The digits of number "<<n<<" in reverse order are as follows: "<<endl;
//     i = n;
//     while(i>0)
//     {
//         rem = i % 10;
//         cout<<rem<<" ";
//         i = i / 10;
//     }

//     // // ON TRIAL
//     // // Reverse a given number & Print result (Method 1)
//     // cout<<"\nThe digits of number "<<n<<" in reverse order is ";
//     // i = n;
//     // string result="";
//     // int x =0;
//     // while(i>0)
//     // {
//     //     rem = i % 10;
//     //     result[x] = rem; 
//     //     cout<<result<<" lola";
//     //     i = i / 10;
//     //     x++;
//     // }
//     // cout<<endl;


//     // Reverse a given number & Print result (Method #2)
//     i = n;
//     int result = 0;
//     while(i>0)
//     {
//         rem = i % 10;
//         result = (result * 10) + rem;
//         i = i / 10;
//     }
//     cout<<"\nThe number "<<n<<" in reverse order is "<<result<<endl;

//     return 0;
// }




// // do-while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i =1;
//     do {
//         cout<<"Avdhesh in do-while loop";
//         i++;
//     }
//     while(i>5);

//     // while loop
//     while(i>5)
//     {
//         cout<<"Avdhesh in while loop";
//     }
    
//     return 0;
// }



// // break statement
// Example 2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i =1;
//     while(i<=10)
//     {
//         if(i==5){ 
//             break;
//         }
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }



// // Break Example 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     //Method 1
//     while(1)
//     {
//     cout<<"Enter the number : ";
//     cin>>n;
    
//     if (n%10==0)
//     {
//         cout<<"Found, multiple of 10 is "<<n<<endl;
//         break;
//     }
//     cout<<"You entered "<<n<<endl;

//     }

    // // Method 2
    // do
    // {
    //     cout<<"Enter the number : ";
    //     cin>>n;
    //     if(n%10==0)
    //     {
    //         cout<<"Multiple of 10 is found i.e "<<n<<endl;
    //         break;
    //     }
    // cout<<"You Entered "<<n<<endl; 
    // }while(1);

//     return 0;
// }




// // Conutinue Statement
// // Example 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=0; i<=n; i++)
//     {
//         if(i==4)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }


// //  // Example 2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;

//     do
//     {
//         cout<<"Enter the number : ";
//         cin>>n;
//         if(n%10==0)
//         {
//             continue;
//         }
//     cout<<"You Entered "<<n<<endl; 
//     }while(1);

//     return 0;
// }






// // ====================================================================                 Practice Questions                      =============================


// // WAP to find the Factorial of a number entered by the user.
// // Factorial 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num, n, m=1;
//     cout<<"Enter n : ";
//     cin>>num;

//     // Method 1
//     n=num; 
//     if(n>=0)
//     {
//     while(n>=1)
//     {
//         m=m*(n);
//         n=n-1;
//     }
//     cout<<"Factorial of "<<num<<" : "<<m<<endl;
//     }
//     else
//     {
//         cout<<"Factorial can't be found."<<endl;
//     }

//     // Method 2
//     n=num;
//     int fact = 1; 
//     for(int i=1; i<=n; i++) { 
//         fact *= i;
//     }
//     cout << "factorial of " << num << " = " << fact << "\n";

//     return 0;
// }



// // WAP to print the multiplication table of a number, entered by the user.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=10;i++)
//     {
//         cout<<n<<" x "<<i<<" = "<<n*i<<endl;
//     }
//     return 0;
// }



// // // ON TRIAL
// // // WAP to input a number and check whether the number is an Armstrong number or not.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n, num, count=0,arm=0,rem;
//     cout<<"Enter the number : ";
//     cin>>n;
//     num=n;
//     while(num>0)
//     {
//         num=num/10;
//         count++;
//     }

//     num = n;
//     while(num>0)
//     {
//         rem=num%10;
//         cout<<"Reminder = "<<rem<<endl;
//         arm = arm + pow(rem,count);
//         cout<<"arm = "<<arm<<endl;
//         num=num/10;
//         cout<<"num = "<<num<<endl;
//     }

//     if(arm==n)
//     {
//         cout<<"Yes, "<<n<<" is an Armstrong Number"<<endl;
//     }
//     else{
//         cout<<"Not an Armstrong Number"<<endl;
//     }
//     return 0;

// }




// // Check Whether Entered number is Prime or not
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     bool isprime = true;
//     for(int i=2; i<=sqrt(n);i++)   // condition can be i<n or i<=(n-1) but current one is optimized
//     {
//         if(n%i==0)   // i is a factor of n;    i completely divides n;      n is non-prime.
//         {
//             isprime = false;
//             break;
//         }
//     }
//     if(isprime)   // means (isprime == 1)
//     {
//         cout<<"yes, "<<n<<" is a Prime number."<<endl;
//     }
//     else{
//         cout<<"No, "<<n<<" is not prime"<<endl;
//     }
//     return 0;
// }








// // Print Prime numbers from 2 to n
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n;
//     int i,j;

//     cout<<"Enter n (greater than 2) : ";
//     cin>>n;

//     cout<<"Prime numbers are as follows: "<<endl;
//     for(i=2;i<=n;i++)
//     {
//         bool isprime = true;

//         for(j=2;j<=sqrt(i);j++)
//         {
//             if(i%j==0)
//             {
//                 isprime = false;
//             }
//         }
//         if(isprime)
//         {
//             cout<<i<<" ";
//         }
//     }
//     return 0; 
// }






// // Prints the first N Fibonacci numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int p = 0, q = 1;
//     int i = 0, n;
//     int count = 2;
//     cout<<"Enter n (greater than 2) : ";
//     cin>>n;

//     cout<<"The first "<<n<<" Fibonacci numbers are as follows:\n0 1 ";
//     while(count<n)
//     {
//         i=p+q;
//         p=q;
//         q=i;
//         count++;
//         cout<<i<<" ";
//     }
//     return 0;
// }


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Nested Loop
// Done by me itself 

// // Patterns
// #include<iostream>
// using namespace std;
// int main()
// {

//     cout<<"\nPattern 1 :"<<endl;
//     for(int i = 1; i<=4;i++ )
//     {
//         for(int j = 1;j<=4;j++) {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }


//     cout<<"\nPattern 2 : Star Pattern"<<endl;
//     for(int i = 1; i<=4;i++)
//     {
//         for(int j = 1; j<=i;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }


//     cout<<"\nPattern 3 : Inverted Star Pattern"<<endl;
//     for(int i = 4; i>=1; i--)
//     {
//         for(int j = 1; j<=i; j++ ) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }


//     cout<<"\nPattern 4 : Half Pyramid"<<endl;
//     for(int i = 1; i<=4;i++)
//     {
//         for(int j = 1; j<=i;j++) {
//             cout<<j;
//         }
//         cout<<endl;
//     }


//     cout<<"\nPattern 5 :"<<endl;
//     char ch = 'A';
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1; j<=i; j++) {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }


//     cout<<"\nPattern 6 : Hollow Rectangle Pattern\n"<<endl;
//     for(int i = 1; i<=4; i++)
//     {
//         for(int j=1; j<=5; j++) {
//             if((i==2 || i==3) && (j>=2 && j<=4)){
//                 cout<<"   ";
//             }
//             else{
//             cout<<" * ";
//             }
//         }
//         cout<<endl;
//     }   


//     cout<<"\nPattern 7 : Inverted & Rotated Half Pyramid Pattern\n"<<endl;
//     for(int i=4; i>=1; i--)
//     {
//         for(int j=1; j<=4; j++) {
//             if(j<i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
    

//     cout<<"\nPattern 8 : Floyd's Triangle\n"<<endl;
//     int k =1;
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<k<<' ';
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// // Pattern means, a program can be Generalized and all...
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

    // cout<<"\nPattern 1 :"<<endl;
    // for(int i=1; i<=n; i++ )
    // {
    //     for(int j = 1;j<=n;j++) {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }


    // cout<<"\nPattern 2 : Star Pattern"<<endl;
    // for(int i = 1; i<=n; i++)
    // {
    //     for(int j = 1; j<=i; j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    

    // cout<<"\nPattern 3 : Inverted Star Pattern"<<endl;
    // for(int i = 1; i<=n; i++)
    // {
    //     for(int j = 1; j<=(n-i+1); j++ ) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // cout<<"\nPattern 4 : Half Pyramid"<<endl;
    // for(int i = 1; i<=n;i++)
    // {
    //     for(int j = 1; j<=i;j++) {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // cout<<"\nPattern 5 : Character Pyramid Pattern"<<endl;
    // char ch = 'A';   // continous Pattern getting updated
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1; j<=i; j++) {
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl; 
    // }


    // cout<<"\nPattern 6 : Hollow Rectangle Pattern\n"<<endl;
    // for(int i = 1; i<=n; i++)
    // {
    //     cout<<" * ";   // First star
    //     for(int j=1; j<=n-1; j++) {
    //         if(i==1 || i==n){     // For 1st and last Row, it prints '*'
    //             cout<<" * "; 
    //         }
    //         else{            // for rows b/w 1st and last it will print space by the Pattern
    //         cout<<"   ";
    //         }
    //     }
    //     cout<<" * "<<endl;   // Last star
    // }   
    // cout<<endl;


    // cout<<"\nPattern 7 : Inverted & Rotated Half Pyramid Pattern\n"<<endl;
    // for(int i=1; i<=n; i++) {
    //     // spaces
    //     for(int j=1; j<=n-i; j++) {
    //         cout<<" ";
    //     }

    //     // stars
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    

    // cout<<"\nPattern 8 : Floyd's Triangle\n"<<endl;
    // int num=1;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         cout<<num++<<' ';
    //     }
    //     cout<<endl;
    // }

    
    // cout<<"\nPattern 9 : Diamond Pattern\n"<<endl;
    // // 1st Pyramid
    // for(int i=1;i<=n;i++) {
    //     //spaces
    //     for(int j=1; j<=n-i; j++) {
    //         cout<<" ";
    //     }

    //     //Stars
    //     for(int j=1;j<=(2*i-1); j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // // 2nd Pyramid
    // for(int i=n; i>=1; i--) {
    //     //spaces
    //     for(int j=1; j<=n-i; j++) {
    //         cout<<" ";
    //     }

    //     //Stars
    //     for(int j=1; j<=(2*i-1); j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // cout<<"\nPattern 10 : Butterfly Pattern\n"<<endl;
    // // Upper half 
    // for(int i=1;i<=n;i++) {
    //     //stars
    //     for(int j=1; j<=i; j++) {
    //         cout<<"*";
    //     }
    //     // spaces
    //     for(int k=1; k<=2*(n-i); k++) {
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int l=1; l<=i; l++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // // Lower half
    // for(int i=n; i>=1; i--) {
    //     for(int j=1; j<=i; j++) {
    //         cout<<"*";
    //     }
    //     for(int j=1; j<=2*(n-i); j++) {
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    

//     return 0;
// }



// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Day 6 Assignemnt

// // Q1.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     bool num = true;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout<<num<<" ";
//             num=!num;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// //Q2. 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     // Method 1
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n-i; j++) {
//             cout<<" ";
//         }
//         for(int j=1; j<=n; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     // Method 2
//     for(int i=n; i>=1; i--)
//     {
//         for(int j=1; j<=i-1; j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1; j<=n; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }



// // Q3. 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     for(int i=1; i<=n; i++) {
//         //spaces
//         for(int j=1; j<=n-i; j++) {
//             cout<<"  ";
//         }
//         // num backward
//         for(int j=i; j>=1; j--) {
//             cout<<j<<" ";
//         }
//         //num forward
//         for(int j=2; j<=i; j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//separate separateseparate separateseparate separateseparate separateseparate separateseparate separateseparate separateseparate separate


/*

Day 7 starts

*/



// #include<iostream>
// using namespace std;

// void sayHello();     // forward function declaration 
// void assistant();
// int main()
// {
//     cout << "\nUsing Predined function multiple times in main function" << endl;
//     sayHello();     // function call
//     sayHello();
//     assistant();
//     return 0;
// }

// // function defination
// void sayHello()
// {
//     cout<<"Hello :) "<<endl;
// }

// void assistant()
// {
//     cout<<"assistant function controlling sayHello function"<<endl;
//     sayHello();
//     cout<<"\r\rWork Done"<<endl;
// }

////////////////////////////////////////////////////////////////////

// // Default Argument Concept
// #include<iostream>
// using namespace std;

// int sum(int a, int b=1)  // a and b are parameters
// {
//     int z = a + b;
//     return z;
// }

// int diff(int a=7, int b=2)  // x and y are parameters
// {
//     return a-b;
// }
// int main()
// {
//     cout<<"Sum is "<<sum(2,4)<<endl;  // 2,4 are arguments
//     cout<<"Difference is "<<diff()<<endl;
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// // Function to find product of 2 numbers a & b.
// #include<iostream>
// using namespace std;

// void prod(int a, int b)
// {
//     int p =a*b;
//     cout<<"Product of "<<a<<" and "<<b<<" is "<<p<<endl;
// }

// // Function to check for ODD or EVEN
// void evenodd()
// {
//     int num;
//     cout<<"Enter number to check for even or odd : ";
//     cin>>num;
//     if(num%2==0){
//         cout<<num<< " is Even"<<endl;
//     }
//     else{
//         cout<<num<<" is Odd"<<endl;
//     }
// }

// // Function to print Factorial of  a number, n
// int fact(int num)
// {
//     int fact=1;
//     for(int i=1; i<=num; i++)
//     {
//     fact = fact*i; 
//     }
//     return fact;
// }

// int main()
// {
//     // product scene 
//     int a; int b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     prod(a,b);

//     // Even Odd Scene
//     evenodd();

//     // factorial of number n
//     int num;
//     cout<<"Enter number for its factorial value : ";
//     cin>>num;
//     int f = fact(num);
//     cout<<"Factorial of "<<num<<" is "<<f<<endl;
//     cout<<"Factorial of 0 is "<<fact(0)<<endl;
//     cout<<"Factorial of 1 is "<<fact(1)<<endl;
//     cout<<"Factorial of 2 is "<<fact(2)<<endl;
//     cout<<"Factorial of 3 is "<<fact(3)<<endl;
//     cout<<"Factorial of 4 is "<<fact(4)<<endl;
//     cout<<"Factorial of 5 is "<<fact(5)<<endl;
//     cout<<"Factorial of 6 is "<<fact(6)<<endl;

//     return 0; 
// }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// #include<iostream>
// using namespace std;

// void sum(int a, int b);
// int prime(int num);
// void prime2(int num);
// int main()
// {
//     int x = 45;
//     int y= 10;
//     // sum function call
//     sum(x,y);

//     // prime Function call
//     prime(0);
//     prime2(1);
//     prime2(2);
//     prime(3);
//     prime2(4);
//     prime2(5);
//     prime(6);
//     prime2(7);

//     return 0;
// }
// void sum(int a, int b)
// {
//     cout<<a<<" + "<<b<<" = "<<a+b<<endl;
// }

// // Function to print if Number is prime or not
// int prime(int num)
// {
//     if(num<=1) {
//         cout<<num<<" is not Prime"<<endl;
//     }
//     else {
//     bool isprime = true;
//     for(int i=2; i<=num-1; i++) {
//         if(num%i==0) {
//             isprime = false;  // non-Prime
//             break;
//         }
//     }
//     if(isprime==1){
//     cout<<num<<" is "<<"Prime."<<endl;
//     }
//     else{
//         cout<<num<<" is not Prime"<<endl;
//     }
//     return isprime;
// }
// }

// void prime2(int num)
// {
//     bool isprime = 1;
//     if(num<=1){
//         cout<<num<<" is not Prime"<<endl;
//     }
//     else {
//         for(int i=2; i*i<=num; i++) {   // More Efficient Program to check for Prime or not
//             if(num%i==0){
//                 isprime=0;
//                 break;
//             }
//         }
//         if(isprime==1) {
//             cout<<num<<" is Prime"<<endl;
//         }
//         else{
//             cout<<num<<" is not Prime"<<endl;
//         }
//     }
// }



// // Global scope of Variable
// #include<iostream>
// using namespace std;
// int x=10;
// int y;  //initial itself to 0
// int main()
// {
//     cout<<x<<endl;
//     cout<<y<<endl;
//     y=20;
//     {
//         int z=30;
//         cout<<z<<endl; 
//         cout<<y<<endl;
//     }
//     cout<<y<<endl;
//     return 0;
// }


///////////////////##############################################################


// // Binomial Coefficient Function Programs
// #include<iostream>
// using namespace std;
// int n, r;
// int fact(int num)
// {
//     int fact=1;
//     for(int i=1; i<=num; i++)
//     {
//     fact = fact*i; 
//     }
//     return fact;
// }

// void input()
// {
//     cout<<"Enter value of n : ";
//     cin>>n;
//     cout<<"Enter value of r : ";
//     cin>>r;
// }

// void binomial(int n, int r)
// {
//     int val1 = fact(n);
//     int val2 = fact(r);
//     int val3 = fact(n-r);
//     int result = val1 / (val2 * val3);
//     cout<<"The Binomial Cofficient for "<<n<<"C"<<r<<" is "<<result<<endl;

// }

// int main()
// {
//     input();
//     binomial(n,r);
//     binomial(5,2);
//     return 0;
// }


//########################################################################


// // Function Overloading 
// #include<iostream>
// using namespace std;

// int sum(int a, int b) {
//     cout<<(a+b)<<endl;
//     return a+b;
// }

// // Function Overloading Doesn't depends on Return Type but on Parameters only
// // double sum(int a, int b) {
// //     cout<<(a+b)<<endl;
// //     return a+b;
// // }

// double sum(double a, double b) {
//     cout<<(a+b)<<endl;
//     return a+b;
// }

// int main() {
//     sum(2,3);
//     sum(12,13);
//     sum(2.5,7.5); // If double sum() isn't defined then, Compiler Try Implicit Conversion with int sum(), giving wrong output 
//     return 0;
// }


///##############################################################################


// // Print all Primes in the Range of 2 to n.

// Method 1
// #include<iostream>
// using namespace std;

// int prime(int num)
// {
//     cout<<"\nPrime numbers b/w 2 and "<<num<<" are as follows: ";
//     bool isprime = true;
//     if (num<=1){
//         cout<<"Not Found"<<endl;
//     }
//     else {
//         for(int i=2; i<=num; i++) {
//             for(int j=2; j*j<=i; j++) {
//                 isprime = (i % j == 0) ? false : true;
//                 if (!isprime) {
//                     break;
//                 }
//             }
//             if(isprime==1) {
//                 cout<<i<<" ";
//             }
//         }
//     }
//     return 0;
// }

// int main()
// {
//     prime(1);
//     prime(2);
//     prime(17);
//     prime(4);
//     prime(15);
//     prime(6);
// }



// // Method 2
// // Most Important
// #include<iostream>
// using namespace std;

// bool isprime(int num) {
//     if(num<=1) {
//         return false;
//     }

//     for(int i=2; i*i<=num; i++) {
//         if(num%i==0) {
//             return false;
//         }
//     }

//     return true;
// }

// void allprime(int num) {
//     cout<<"the Prime numbers b/w 2 and "<<num<<" are : ";
//     for(int i=2; i<=num; i++) {
//         if(isprime(i)) {  // means if isprime==true then print i
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl; 
// }

// int main() {
//     allprime(0);
//     allprime(1);
//     allprime(2);
//     allprime(3);
//     allprime(12);
//     allprime(19);
//     return 0;
// }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// // Day 7 Assignment Questions


// #include<iostream>
// using namespace std;

// //Q1. 
// bool check_pal(int num) {
//     int rem, rev=0, n;
//     n=num;
//     while(n>=1) {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n=n/10;
//     } 
//     if(rev==num){
//        return true; 
//     }
//     else{
//         return false;
//     }
//     return true;
// }

// //Q2. 
// int sumofdigits(int num)
// {
//     int rem, sum=0;
//     while(num>=1) {
//         rem = num % 10;
//         sum = sum + rem;
//         num=num/10;
//     } 
//     return sum;
// }


// // Q3. 
// int inputsum() {
//     int a, b;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     return (a*a + b*b + 2*a*b);
// }

// //Q4.   
// int larg(int x, int y, int z) {
//     return (x>=y && x>=z)?x:(y>=z)?y:z;
// }

// //Q5.
// char getNextChar() {
//     char ch;
//     cout<<"enter a charcter : ";
//     cin>>ch;

//     if(ch=='z'){
//         return 'a';
//     }
//     else if(ch=='Z'){
//         return 'A';
//     }
//     return (++ch);
// }


// int main()
// {
//     cout<<check_pal(121)<<endl;
//     cout<<check_pal(321)<<endl;
//     cout<<check_pal(2002)<<endl;


//     cout<<sumofdigits(199)<<endl;
//     cout<<sumofdigits(7296)<<endl;


//     cout<<inputsum()<<endl;


//     cout<<larg(2,4,9)<<endl;
//     cout<<larg(12,0,65)<<endl;


//     cout<<getNextChar()<<endl;

//     return 0;
// }



