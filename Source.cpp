#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	const double H = 1.008;
	const double He = 4.00;
	const double Li = 6.94;
	const double Be = 9.01;
	const double B = 10.81;
	const double C = 12.01;
	const double N = 14.01;
	const double O = 16.00;
	const double F = 19.00;
	const double Ne = 20.18;
	const double Na = 22.99;
	const double Mg = 24.31;
	const double Al = 26.98;
	const double Si = 28.09;
	const double P = 30.97;
	const double S = 32.06;
	const double Cl = 35.45;
	const double Ar = 39.95;
	const double K = 39.10;
	const double Ca = 40.08;
	const double Sc = 44.96;
	const double Ti = 47.87;
	const double V = 50.94;
	const double Cr = 52.00;
	const double Mn = 54.94;
	const double Fe = 55.85;
	const double Co = 58.93;
	const double Ni = 58.69;
	const double Cu = 63.55;
	const double Zn = 65.38;
	const double Ga = 69.72;
	const double Ge = 72.63;
	const double As = 74.92;
	const double Se = 78.97;
	const double Br = 79.90;
	const double Kr = 83.80;
	const double Rb = 85.47;
	const double Sr = 87.62;
	const double Y = 88.91;
	const double Zr = 91.22;
	const double Nb = 92.91;
	const double Mo = 95.95;
	const double Ru = 101.07;
	const double Rh = 102.91;
	const double Pd = 106.42;
	const double Ag = 107.87;
	const double Cd = 112.41;
	const double In = 114.82;
	const double Sn = 118.71;
	const double Sb = 121.76;
	const double Te = 127.60;
	const double I = 126.90;
	const double Xe = 131.29;
	const double Cs = 132.91;
	const double Ba = 137.33;
	const double La = 138.91;
	const double Ce = 140.12;
	const double Pr = 140.91;
	const double Nd = 144.24;
	const double Pm = 145;
	const double Sm = 150.36;
	const double Eu = 151.96;
	const double Gd = 157.25;
	const double Tb = 158.93;
	const double Dy = 162.50;
	const double Ho = 164.93;
	const double Er = 167.26;
	const double Tm = 168.93;
	const double Yb = 173.05;
	const double Lu = 174.97;
	const double Hf = 178.49;
	const double Ta = 180.95;
	const double W = 183.84;
	const double Re = 186.21;
	const double Os = 190.23;
	const double Ir = 192.22;
	const double Pt = 195.08;
	const double Au = 196.97;
	const double Hg = 200.59;
	const double Tl = 204.38;
	const double Pb = 207.2;
	const double Bi = 208.98;
	const double Th = 232.04;
	const double Pa = 231.04;
	const double U = 238.03;
	
	double total = 0;
	int q, count;
	char i1, i2, again;
	do {
		count = 1;
		total = 0;
		system("cls");
		cout << "Enter the quantity of an element then the element symbol" << endl
			<< "for single letter symbols, end in period (ex. for 2 Hydrogen --> 2H.)" << endl
			<< "To exit enter \"0..\"" << endl;
		do {
			cout << "Element " << count << ": ";
			cin >> q >> i1 >> i2;
			switch (i1)
			{
			case 'A':
			case 'a':
				switch (i2)
				{
				case 'l':
					total += q*Al;
					break;
				case 'r':
					total += q*Ar;
					break;
				case 's':
					total += q*As;
					break;
				case 'g':
					total += q*Ag;
					break;
				case 'u':
					total += q*Au;
					break;
				}
				break;
			case 'B':
			case 'b':
				switch (i2)
				{
				case '.':
					total += q*B;
					break;
				case 'e':
					total += q*Be;
					break;
				case 'r':
					total += q*Br;
					break;
				case 'a':
					total += q*Ba;
					break;
				case 'i':
					total += q*Bi;
					break;
				}
				break;
			case 'C':
			case 'c':
				switch (i2)
				{
				case '.':
					total += q*C;
					break;
				case 'l':
					total += q*Cl;
					break;
				case 'a':
					total += q*Ca;
					break;
				case 'r':
					total += q*Cr;
					break;
				case 'o':
					total += q*Co;
					break;
				case 'u':
					total += q*Cu;
					break;
				case 'd':
					total += q*Cd;
					break;
				case 's':
					total += q*Cs;
					break;
				case 'e':
					total += q*Ce;
					break;
				}
				break;
			case 'D':
			case 'd':
				switch (i2)
				{
				case 'y':
					total += q*Dy;
					break;
				}
				break;
			case 'E':
			case 'e':
				switch (i2)
				{
				case 'u':
					total += q*Eu;
					break;
				case 'r':
					total += q*Er;
					break;
				}
				break;
			case 'F':
			case 'f':
				switch (i2)
				{
				case '.':
					total += q*F;
					break;
				case 'e':
					total += q*Fe;
					break;
				}
				break;
			case 'G':
			case 'g':
				switch (i2)
				{
				case 'a':
					total += q*Ga;
					break;
				case 'e':
					total += q*Ge;
					break;
				case 'd':
					total += q*Gd;
					break;
				}
				break;
			case 'H':
			case 'h':
				switch (i2)
				{
				case '.':
					total += q*H;
					break;
				case 'e':
					total += q*He;
					break;
				case 'o':
					total += q*Ho;
					break;
				case 'f':
					total += q*Hf;
					break;
				case 'g':
					total += q*Hg;
					break;
				}
				break;
			case 'I':
			case 'i':
				switch (i2)
				{
				case '.':
					total += q*I;
					break;
				case 'n':
					total += q*In;
					break;
				case 'r':
					total += q*Ir;
					break;
				}
				break;
			case 'K':
			case 'k':
				switch (i2)
				{
				case '.':
					total += q*K;
					break;
				case 'r':
					total += q*Kr;
					break;
				}
				break;
			case 'L':
			case 'l':
				switch (i2)
				{
				case 'i':
					total += q*Li;
					break;
				case 'a':
					total += q*La;
					break;
				case 'u':
					total += q*Lu;
					break;
				}
				break;
			case 'M':
			case 'm':
				switch (i2)
				{
				case 'g':
					total += q*Mg;
					break;
				case 'n':
					total += q*Mn;
					break;
				case 'o':
					total += q*Mo;
					break;
				}
				break;
			case 'N':
			case 'n':
				switch (i2)
				{
				case '.':
					total += q*N;
					break;
				case 'e':
					total += q*Ne;
					break;
				case 'a':
					total += q*Na;
					break;
				case 'i':
					total += q*Ni;
					break;
				case 'b':
					total += q*Nb;
					break;
				case 'd':
					total += q*Nd;
					break;
				}
				break;
			case 'O':
			case 'o':
				switch (i2)
				{
				case '.':
					total += q*O;
					break;
				case 's':
					total += q*Os;
					break;
				}
				break;
			case 'P':
			case 'p':
				switch (i2)
				{
				case '.':
					total += q*P;
					break;
				case 'd':
					total += q*Pd;
					break;
				case 't':
					total += q*Pt;
					break;
				case 'b':
					total += q*Pb;
					break;
				case 'r':
					total += q*Pr;
					break;
				case 'a':
					total += q*Pa;
					break;
				}
				break;
			case 'R':
			case 'r':
				switch (i2)
				{
				case 'b':
					total += q*Rb;
					break;
				case 'u':
					total += q*Ru;
					break;
				case 'h':
					total += q*Rh;
					break;
				case 'e':
					total += q*Re;
					break;
				}
				break;
			case 'S':
			case 's':
				switch (i2)
				{
				case '.':
					total += q*S;
					break;
				case 'i':
					total += q*Si;
					break;
				case 'c':
					total += q*Sc;
					break;
				case 'e':
					total += q*Se;
					break;
				case 'r':
					total += q*Sr;
					break;
				case 'n':
					total += q*Sn;
					break;
				case 'b':
					total += q*Sb;
					break;
				case 'm':
					total += q*Sm;
					break;
				}
				break;
			case 'T':
			case 't':
				switch (i2)
				{
				case 'i':
					total += q*Ti;
					break;
				case 'e':
					total += q*Te;
					break;
				case 'b':
					total += q*Tb;
					break;
				case 'm':
					total += q*Tm;
					break;
				case 'a':
					total += q*Ta;
					break;
				case 'l':
					total += q*Tl;
					break;
				case 'h':
					total += q*Th;
					break;
				}
				break;
			case 'U':
			case 'u':
				switch (i2)
				{
				case '.':
					total += q*U;
					break;
				}
				break;
			case 'V':
			case 'v':
				switch (i2)
				{
				case '.':
					total += q*V;
					break;
				}
				break;
			case 'W':
			case 'w':
				switch (i2)
				{
				case '.':
					total += q*W;
					break;
				}
			case 'X':
			case 'x':
				switch (i2)
				{
				case 'e':
					total += q*Xe;
					break;
				}
				break;
			case 'Y':
			case 'y':
				switch (i2)
				{
				case '.':
					total += q*Y;
					break;
				case 'b':
					total += q*Yb;
					break;
				}
				break;
			case 'Z':
			case 'z':
				switch (i2)
				{
				case 'n':
					total += q*Zn;
					break;
				case 'r':
					total += q*Zr;
					break;
				}
				break;
			}
			count++;
		} while (i1 != '.');
		cout << "The molar mass is: " << total << endl;
		cout << "Do you have any more molecules to find the molar mass of? (y/n): ";
			cin >> again;
	}while (again == 'y' || again == 'Y');
	return 0;
	
}