#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
/*vector <string> vek;
vek.push_back("ddee");

    cout <<vek.at(0)<<endl;
cout << vek.size() <<endl;
*/

struct sms
{
    int numer;
    string tekst;
    bool seen;

};

vector <sms> vekk;


sms d= {555666777,"new messages 1 ar"};
sms e= {222666777,"dew messages 2 ar"};
sms r= {333666777,"bbb messages 3 ar"};
sms g= {444666777,"cow messages 4 ar"};
sms g1= {444666777,"cow messages 5 ar"};
sms g2= {444666777,"cow messages 6 ar"};
sms g3= {444666777,"cow messages 7 "};
sms g4= {444666777,"cow messages 8 "};
sms g5= {444666777,"cow messages 9 ar"};
sms n= {00000000,"new messages come"};

vekk.push_back(d);
vekk.push_back(e);
vekk.push_back(r);
vekk.push_back(g);
vekk.push_back(g1);
vekk.push_back(g2);
vekk.push_back(g3);
vekk.push_back(g4);
vekk.push_back(g5);

while(2014)
{

    int chose;

 cout <<"***********************"<<endl;
 cout<<endl;
 cout<<"select number 1-10"<<endl;
 cout<<"1ALL SMS"<<endl;
 cout<<"2ONE SMS"<<endl;
 cout<<"3NOT SEEN SMS"<<endl;
 cout<<"4ERASE ONE"<<endl;
 cout<<"5ERASE ALL"<<endl;
 cout<<"6BY NUMBER"<<endl;
 cout<<"7BY TEXT"<<endl;
 cout<<"8 NEW NUMBER"<<endl;
 cout<<endl;
 cout <<"***********************"<<endl;
 cin >> chose;


 cout <<"***********************"<<endl;
    switch(chose)
    {
   case 1:
        {cout<<"all messages:"<<endl;
         cout<<endl;
            for (int i=0; i<vekk.size();i++)



            cout <<vekk[i].tekst << " ***** " << vekk[i].numer <<endl;
            for (int i=0; i<vekk.size();i++)
            vekk[i].seen=1;

        break;
        }
    case 2:
        {
            int i;
            cin>> i;
            cout <<vekk[i-1].tekst << " ***** " << vekk[i-1].numer <<endl;
              vekk[i-1].seen=1;

        break;
        }
    case 3:
        {   int i;
            cout << "number not seen"<< endl;

            for (int i=0; i<vekk.size();i++)
            if(vekk[i].seen==0)
            cout <<vekk[i].tekst << " ***** " << vekk[i].numer <<endl;
            for (int i=0; i<vekk.size();i++)
            vekk[i].seen=1;

        break;
        }

        case 4:
        {   int h;
            cin >> h;
            vekk.erase(vekk.begin() + h-1);

        break;
        }

        case 5:
        {
            vekk.clear();

        break;
        }

        case 6:
        {int p;
            cin >>p;
            for (int i=0; i<vekk.size();i++)

                if(vekk[i].numer == p ) cout <<vekk[i].tekst;
        break;
        }

        case 7:
        {   string szukasz;
            cin>>szukasz;

                for (int i=0; i<vekk.size();i++)


                    if (vekk[i].tekst.find(szukasz)!= string::npos)
                        cout << vekk[i].numer<<endl;
        break;
        }
 case 8:
        {   if (vekk.size()< 10)

           vekk.push_back(n);
        break;
        }
    }


}







    return 0;
}
