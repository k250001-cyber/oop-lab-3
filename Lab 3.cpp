#include <iostream>
using namespace std;

class Book{
	public:
		string author;
		string title;
		float price;
		
		Book(){
			author="anonymous";
			title="unkown";
			price=0.0;
		}
	Book(string t,string a,float p){
			author=a;
			title=t;
			price=p;
		}
		Book(Book& b ){
			author=b.author;
			title=b.title;
			price=b.price;
		}
		Book(string t){
			title=t;
			author="unknown";
			price=0.0;
		}
		void dis(){
			cout<<"author: "<<author<<" Title: "<<title<<" price: "<<price<<endl;
		}


};

int main(){
	Book b1;
	Book b2("lotm","cuttlefish",12.0);
	Book b3(b2);
	Book b4("revrend insanity");
	b1.dis();
	b2.dis();
	b3.dis();
	b4.dis();
return 0;
}
