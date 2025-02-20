#include <iostream>

using namespace std;
int Min_uploadTime(int n,int k)
{
    int time,Uploads_in_window=0;

    if(n==0)
    {
        return n;
    }
    if(k==1)
    {
        return n;
    }
     while (n > 0) {

        if (Uploads_in_window < k && n > 0) {
            n -= 1;
            Uploads_in_window++;
            time++;
        } else {
            time++;
            Uploads_in_window = 0; // Reset window counter
        }

}
int main()
{
    int t;
    int n,k;
    int s_Ram=0;
    int Ram;
    cin>>t;


    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << minimumUploadTime(n, k) << endl;
    }
    {
        cin>> n >> k;
    }

    return 0;
}
