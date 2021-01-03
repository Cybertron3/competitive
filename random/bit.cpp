
int n = a.size();

vector<long> ans;

for (int j = 0 ; j < n ; j++) {

    unsigned long int A = (a[i] - b[i]) / 2;

    int x = 0, y = 0;


    for (int i = 0; i < 8 * sizeof(S); i++)
    {
        unsigned long int Xi = (X & (1 << i));
        unsigned long int Ai = (A & (1 << i));
        if (Xi == 0 && Ai == 0)
        {
            // Let us leave bits as 0.
        }
        else if (Xi == 0 && Ai > 0)
        {
            a = ((1 << i) | a);
            b = ((1 << i) | b);
        }
        else if (Xi > 0 && Ai == 0)
        {
            a = ((1 << i) | a);

            // We leave i-th bit of b as 0.
        }
        else // (Xi == 1 && Ai == 1)
        {
            std::vector<long> v(1, 0);


            return v;
        }
    }


    ans.pb(2 * x + 3 * y);
}