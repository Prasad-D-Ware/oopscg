#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    // create a map container using STL 
    map<string,int> state;
    // use insert method to insert pair of States and its population
    state.insert(pair<string,int>("Maharashtra",18710783));
    state.insert(pair<string,int>("Goa",9377132));
    state.insert(pair<string,int>("Karnataka",837203));
    state.insert(pair<string,int>("Jammu",18371));
    state.insert(pair<string,int>("Rajasthan",372938));

    // store string to be searched 
    string search;
    cout<<"Enter the State to be searched : ";
    cin>>search;

    // create a iterator to iterate through the map to search the state
    map<string,int>::iterator i;
    int f;
    for (i = state.begin();i != state.end();i++)
    {
        if(search == i->first)
        { 
            f++;
            cout<<"The population of "<<i->first <<" is "<<i->second<<endl;
        }
    }

    if(f==0){
        cout<<"State not found"<<endl;
    }


    return 0; 
}