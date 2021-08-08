 #include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number";
    cin>>number;
    if (number>=0)
    {
        if(number % 2 == 0 )
        {
            cout<<"Number is positive and Even";
        }
        else
        {
            cout<<"Number is positive and Odd";
        }

    }
    else {
        if(number % 2 == 0){
            cout<<"Number is negative and Even";

        }
        else{
            cout<<"Number is negative and Odd";
        }
    }
    return 0;
}