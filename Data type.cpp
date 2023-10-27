#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin>> p;
    if(p=="Float" || p=="Integer"){
        cout<<4<<endl;
    } else if(p=="Long" || p== "Double")
    {
        cout<<8<<endl;
    }else if(p=="Character"){
        cout<<1<<endl;
    }
}

/*
int dataTypes(string type) {
	// Write your code here

	if (type == "Float" || type == "Integer") {
        return 4;
    } else if (type == "Long" || type == "Double") {
        return 8;
    } else if (type == "Character") {
        return 1;
    } else {

        return -1;
    }
} */
