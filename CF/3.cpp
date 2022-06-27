#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int temp;
    while (1)
    {
        temp = a % b;
        if (temp == 0) return b;
        a = b;
        b = temp;
    }
}
int main(){
    cout<<"19DCS046 - Ashish Kachhadiya"<<endl<<endl;
    double p, q, n, z, d = 0, e, i;
    int msg;
    cout << "Enter p(prime number)" << endl;
    cin >> p;
    cout << "Enter q(prime number)" << endl;
    cin >> q;
    cout << "Enter Message: " ;
    cin >> msg;

    n = p * q;
    cout<<"value of n is: "<<n<<endl;
    z = (p - 1) * (q - 1);
    cout << "value of z(phi(n)): " << z <<endl;
    for (e = 2; e < z; e++)
    {
//e for public key if (e == p)
        e = e + 1;

        if (gcd(e, z) == 1) break;
    }
    cout << "value of public key(e): " << e<<endl;
// double k=2;
// d=(1+(k*z))/e;
    for (i = 0; i <= 9; i++)
    {
        double x = 1 + (i * z);

        if (int(x) % int(e) == 0)
        {
            d = x / e;
            break;
        }
    }
    cout << "value of private key d: " << d<<endl;

    double enc = (pow(msg, e));
    double c = int(enc) % int(n);
    cout << "Encrypted message is: " << c <<endl;

    double decry = pow(c,d);
    double m = int(decry)%int(n);
    cout << "Original message is: " << m <<endl;
}
