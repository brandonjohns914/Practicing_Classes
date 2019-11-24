//
//  deleterepeats.cpp
//  lab_exam_3_practice
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "deleterepeats.hpp"
using namespace std;
#include<iostream>
char *delete_repeats(char *arr, int &size)
{
    char *newarr= new char[size];
    int count =0;
    for(int i=0; i<size; i++)
    {
        int flag=0;
        for(int j=0; j<i; ++j)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            newarr[count++]=arr[i];
        }
    }
    
    size =count;
    
    return newarr;
    
}
void PrintArray(char *arr, int size)
{
    for(int i=0; i< size; ++i)
    {
        cout<< arr[i]<< " " ;
    }
    
    cout<< endl;
}
void deleterepeatsoutput()
{
    char arr[] = "My name is Brandon";
    
    int size = sizeof(arr);
    
    PrintArray(arr, size);
    
    cout << "After deleting the duplicates" << endl;
    
    char *newarr = delete_repeats(arr, size);
    
    PrintArray(newarr, size);

}
