// https://www.hackerrank.com/challenges/box-it/problem

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
    int l, b, h;
    public:
    Box(){
       this->l = 0;
       this->b = 0;
       this->h = 0; 
    }
    Box(int l, int b, int h){
       this->l = l;
       this->b = b;
       this->h = h; 
    }
    Box(Box& B){
       this->l = B.getLength();
       this->b = B.getBreadth();
       this->h = B.getHeight(); 
    }
    
    int getLength(){
        return this->l;
    }
    int getBreadth(){
        return this->b;
    }
    int getHeight(){
        return this->h;
    }
    long long CalculateVolume(){
        long long volume = getLength();
        volume *= getBreadth();
        volume *= getHeight();
        return volume;
    }
    
    bool operator<(Box& b){
        if(this->l < b.getLength()){
            return true;
        } else if(this->l == b.getLength()) {
            if(this->b < b.getBreadth()){
                return true;
            } else if(this->b == b.getBreadth()){
                if(this->h < b.getHeight())
                    return true;    
            }
        }
        return false;
    }
    
    friend ostream& operator<<(ostream& out, Box& B);
};

ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;     
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}