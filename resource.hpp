//
//  resource.hpp
//  lab_exam_3_practice
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef resource_hpp
#define resource_hpp

#include <stdio.h>

#include<iostream>
using namespace std;

class Resource
{
private:
    int writeTo;
    int status;
public:
    Resource();
    Resource(int write);
    
    int getWrite();
    int getStatus();
    
    void setStatus(int s);
    void setWrite(int w);
    void output(ostream &out);
    friend bool check_status(Resource& res1, Resource& res2);
};

void resourceoutput();

#endif /* resource_hpp */
