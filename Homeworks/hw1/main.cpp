//
//Created by Li on 05/21/2021
//
//liyong1010@sjtu.edu.cn

#include <iostream>
#include <gmpxx.h>  //C++ Interface
#include <ctime>

using namespace std;

pair<mpz_class, pair<mpz_class, mpz_class>> ExtendedEuclideanAlgorithm(const mpz_class &a, const mpz_class &b);

int main()
{
    mpz_class bits = 4096;
    gmp_randclass randMpz(gmp_randinit_default);
    randMpz.seed((unsigned long) time(nullptr));
    mpz_class a = randMpz.get_z_bits(bits);
    mpz_class b = randMpz.get_z_bits(bits);

    mpz_class GMPResult = gcd(a, b);
    mpz_class algoResult = ExtendedEuclideanAlgorithm(a, b).first;

    cout << "Comparsion result: ";
    if (GMPResult == algoResult)
    {
        cout << "Yes.";
    }
    else
    {
        cout << "No.";
    }
    cout << endl;
    return 0;
}

pair<mpz_class, pair<mpz_class, mpz_class>> ExtendedEuclideanAlgorithm(const mpz_class &a, const mpz_class &b)
{
    pair<mpz_class, pair<mpz_class, mpz_class>> result;
    pair<mpz_class, mpz_class> r(b, a);
    pair<mpz_class, mpz_class> s(0, 1);
    pair<mpz_class, mpz_class> t(1, 0);
    while (r.first != 0)
    {
        mpz_class q = r.second / r.first;
        r = make_pair(r.second - q * r.first, r.first);
        s = make_pair(s.second - q * s.first, s.first);
        t = make_pair(t.second - q * t.first, t.first);
    }
    result = make_pair(r.second, make_pair(s.second, t.second));
    return result;
}