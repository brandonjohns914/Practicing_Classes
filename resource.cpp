//
//  resource.cpp
//  lab_exam_3_practice
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "resource.hpp"
#include<iostream>
using namespace std;

Resource:: Resource()
{
    writeTo=0;
    status=0; 
}
Resource::Resource(int write)
{
    writeTo=write;
}

int Resource:: getWrite()
{
    return writeTo;
}

int Resource:: getStatus()
{
    return status;
}

void Resource:: setStatus(int s)
{
    status=s;
}
void Resource:: setWrite(int w)
{
    writeTo=w;
}
void Resource:: output(ostream &out)
{
    out<<" status is: " << status<<endl;
    out<<"Write to is: "<< writeTo<<endl;
}
 bool check_status(Resource& res1, Resource& res2)
{
    if (res1.getStatus()==res2.getWrite())
    {
        res1.setStatus(1);
        res2.setStatus(1);
        cout<<"resource avalible"<<endl;
        return true;
    }
    else
    {
        cout<<"resourse unavalible"<<endl; 
        return false;
    }
}

void resourceoutput()
{
    Resource obj(1);
    obj.setStatus(1);
    obj.setWrite(1);
    obj.output(cout);
    Resource obj1(1);
    obj1.setStatus(1);
    obj1.setWrite(1);
    obj1.output(cout);
    Resource obj3;
    if(check_status(obj,obj1))
    {
        cout<<"Status are equal "<<endl;
    }
    else
    {
        cout<<"Status are not equal "<<endl;
    }
    
}

