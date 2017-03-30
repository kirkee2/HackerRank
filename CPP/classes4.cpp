#include<bits/stdc++.h>

using namespace std;

class Box{
  private:
    int l;
    int b;
    int h;
  public:
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }

    Box(int l, int b, int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }

    Box(Box& box){
        l = box.getLength();
        b = box.getBreadth();
        h = box.getHeight();
    }
    bool operator<(Box& b);

    int getLength(){
        return l;
    }

    int getBreadth(){
        return b;
    }

    int getHeight(){
        return h;
    }

    long long CalculateVolume(){
        return 1LL * l * b * h;
    }
};

bool Box::operator<(Box& b){
        bool check = true;
        if(this->l<b.getLength()){

        }else{
            check =false;
        }
        if(this->b<b.getBreadth() && this->l == b.getLength()){

        }else{
            check =false;
        }

        if(this->h<b.getHeight() && this->l == b.getLength() && this->b == b.getBreadth()){

        }else{
            check =false;
        }

        return check;
}

ostream& operator<<(ostream& out, Box& B){
    out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
    return out;
}
//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


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
