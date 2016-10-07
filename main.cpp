//
//  main.cpp
//  Grasshopper
//
//  Created by Edward Chu on 5/10/2016.
//  Copyright (c) 2016 Puffins. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    // insert code here...
    int size, currentPos = 0;
    cin >> size;
    string directions;
    bool haveVisited[size];
    int jumpLength[size];
    
    for(int i=1;i<size;i++){
        haveVisited[i]=false;
    }
    cin >> directions;
    
    
    for(int i=0;i<size;i++){
        cin >> jumpLength[i];
    }
    
    haveVisited[0]=true;
    
    while(1){
        
        
        if(directions[currentPos]=='>'){
            currentPos += jumpLength[currentPos];
            
        } else {
            currentPos -= jumpLength[currentPos];
        }
        
        
        
        if(currentPos>=size || currentPos<0){
            cout << "FINITE" <<endl;
            return 0;
        }
        
        if (haveVisited[currentPos]){
            cout << "INFINITE" << endl;
            return 0;
        }
        
        
        
        haveVisited[currentPos]=true;
        
    }
    
    
    return 0;
}
