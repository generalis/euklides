#include <iostream>

using namespace std;

int nwd(int a, int b) {
	int r;
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(int argc, char** argv) {
	int l,m,ls,ms,cs;
	cout<<"podaj licznik:"<<endl;
	cin>>l;
	cout<<"podaj mianownik:"<<endl;
	cin>>m;
	ls = l/nwd(l,m);
	ms = m/nwd(l,m);
	cout<<"ulamek po skroceniu to: ";
	cout << l << "/" << m << "=" << ls << "/" << ms;
	cout << "=" << (int)ls/ms << " " << ls%ms << "/" << ms << endl;
	return 0;
}


