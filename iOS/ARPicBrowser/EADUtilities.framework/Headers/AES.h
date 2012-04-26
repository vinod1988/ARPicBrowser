//
//  AES.h
//  demosAES2
//
//  Copyright (c) 2012 ARLab. All rights reserved.
//
#pragma once

#ifndef AES_H
#define AES_H

class AES{
    public:        

        AES(void);

        AES(bool _debug);
    
        bool ApiChk(char*_ak, char*_k, char*_d);

        char* base64(const unsigned char *input, int length);
    
    private:
    
        bool _debug;
};

#endif