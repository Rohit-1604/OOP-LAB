    #include<iostream>

    using namespace std;  //provides a scope to the identifiers

    int sum(int a , int b){
        int sum = a+b;
         cout<< "Sum of your Two number is ::-> \t"<<sum<<endl;


    }

    int main()
    {
       int x,y;
       cout<<"Enter Two Number X and Y"<<endl;
       cin>>x>>y;
       cout<<"----------------------------------------"<<endl;
       sum(x,y);

       return 0; // end the main function

    }

