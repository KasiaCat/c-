#include <cstdlib>
#include <iostream>


using namespace std;


class Kwadrat {
	public:
		Kwadrat(double b);
		~Kwadrat();
		void ustaw_dl_boku(double b);
		double oblicz_pole();
	private:
		double bok;
	};


	Kwadrat::Kwadrat(double b) : bok ( b )
	{}

	Kwadrat::~Kwadrat()
	{}

	void Kwadrat::ustaw_dl_boku(double b) {
		bok = b;
	}

	double Kwadrat::oblicz_pole() {
		return bok * bok;
	}

class Kolo {
	public:
		Kolo(double r);
		~Kolo();
		void ustaw_dl_r(double r);
		float oblicz_pole();

	private:
		double promien;
	};


	Kolo::Kolo(double r ) : promien ( r ) {}
	Kolo::~Kolo() {}

	void Kolo::ustaw_dl_r(double r) {
		promien = r;
	}

	float Kolo::oblicz_pole() {
		return 3.14 * promien * promien ;
	}

class Prostokat {
	public:
		Prostokat(double a, double b);
		void ustaw_dl_a(double a);
		void ustaw_dl_b(double b);
		float oblicz_pole();

	private:
		double dl_a, dl_b;
	};
	//---------------------------------------------

	Prostokat::Prostokat(double a, double b ) : dl_a ( a ), dl_b ( b )
	{}

	void Prostokat::ustaw_dl_a(double a) {
		dl_a = a;
	}

	void Prostokat::ustaw_dl_b(double b) {
		dl_b = b;
	}

	float Prostokat::oblicz_pole() {
		return dl_a * dl_b ;
	}

class trapez {
public:
    trapez(double a, double b, double h);
    void oblicz_bok(double a);
    void oblicz_dr_bok(double b);
    void oblicz_wys(double h);
    float licz_pole();

private:
    double bok, dr_bok, wys;

};
    trapez::trapez(double a, double b, double h) : bok(a), dr_bok(b), wys(h) {}

    void trapez::oblicz_bok(double a)
    {
        bok = a;
    }

    void trapez::oblicz_dr_bok(double b)
    {
        dr_bok = b;
    }

    void trapez::oblicz_wys(double h)
    {
        wys = h;
    }

    float trapez::licz_pole()
    {
        return (((bok + dr_bok)/2)*wys);
    }

class Trojkat {
    public:
        Trojkat(double a, double h);
        void ustaw_dl_boku(double a);
        void ustaw_wys(double h);
        float oblicz_pole();
    private:
        double bok, wys;
};

Trojkat::Trojkat(double a, double h) : bok(a), wys(h) {}

   void Trojkat::ustaw_dl_boku(double a)
   {
       bok = a;
   }

   void Trojkat::ustaw_wys(double h)
   {
       wys = h;
   }

   float Trojkat::oblicz_pole()
   {
       return ((bok * wys)/2);
   }

class Program
{
	public:
		Program();
		~Program();
		void run();

	private:
		void menu();
		void akcja_kwadrat();
		void akcja_kolo();
		void akcja_prostokat();
		void akcja_trojkat();
		void akcja_trapez();
	};

	Program::Program() {
		cout << "witaj" << endl;
	}

	Program::~Program() {
		cout << endl << "Enter... - koniec programu";
		cin.get();
	}


	void Program::menu() {
		cout << "MENU GLOWNE" << endl;
		cout << "--------------" << endl;
		cout << "1. kwadrat" << endl;
		cout << "2. kolo" << endl;
		cout << "3. prostokat" << endl;
		cout << "4. trojkat" << endl;
		cout << "5. trapez" << endl;
		cout << "k. koniec" << endl;
	}

	void Program::akcja_kwadrat() {
		double bok;
		cout << "podaj dlugosc boku: "<< endl;
		cin >> bok;
		Kwadrat k( bok );
		k.ustaw_dl_boku( bok );
		k.oblicz_pole();
		cout << endl << "pole: " << k.oblicz_pole() << endl;
	}

	void Program::akcja_kolo() {
		double promien;
		cout << "podaj dlugosc promienia: " << endl;
		cin >> promien;
		Kolo r ( promien );
		r.ustaw_dl_r( promien );
		r.oblicz_pole();
		cout << endl << "Pole kola = " << r.oblicz_pole() << endl;
	}

	void Program::akcja_trapez()
	{
	    double a, b, h;
	    cout << "Podaj dlugosc pierwszego boku: " << endl;
	    cin >> a;
	    cout << "Podaj dlugosc drugiego boku: " << endl;
	    cin >> b;
	    cout << "Podaj wysokosc: " << endl;
	    cin >> h;

	    trapez t(a, b, h);
	    t.oblicz_bok(a);
	    t.oblicz_dr_bok(b);
	    t.oblicz_wys(h);
	    t.licz_pole();
	    cout << endl << "Pole trapezu wynosi: " << t.licz_pole() << endl;

	}

	void Program::akcja_prostokat() {
		double a,b;
		cout << "podaj dlugosc a: " << endl;
		cin >> a;
		cout << "podaj dlugosc b: " << endl;
		cin >> b;

		Prostokat pr (a, b);
		pr.ustaw_dl_a(a);
		pr.ustaw_dl_b(b);
		pr.oblicz_pole();
		cout << "\nPole Prostokata: " << pr.oblicz_pole() << endl;
	}

	void Program::akcja_trojkat()
	{
	    double a,h;
	    cout << "podaj dlugosc a: " << endl;
		cin >> a;
		cout << "podaj wysokosc b: " << endl;
		cin >> h;

		Trojkat tr(a, h);
		tr.ustaw_dl_boku(a);
		tr.ustaw_wys(h);
		tr.oblicz_pole();
		cout << "\n Pole Trojkata wynosi: " << tr.oblicz_pole() << endl;
	}


	void Program::run() {
		char klawisz;
		do {
			menu();
			cout << "wybierz: ";
			cin >> klawisz;
			switch( klawisz ) {
				case '1' : akcja_kwadrat();
						break;
				case '2' : akcja_kolo();
						break;
				case '3': akcja_prostokat();
						break;
                case '4': akcja_trojkat();
                        break;
                case '5': akcja_trapez();
                        break;
				default : cout << "nieprawidlowy klawisz";
			}
		}
		while ( klawisz != 'k' && klawisz != 'K');
	}

//--------------------------------------------------------------------------
//                  			  MAIN
//--------------------------------------------------------------------------
int main()
{
	Program * prog = 0;
	prog = new Program;
	prog->run();
	delete prog;

	return 0;
}

