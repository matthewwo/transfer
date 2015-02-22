//
//  transfer.c
//  transfer
//
//  Created by Matthew Wo on 2/21/15.
//  Copyright (c) 2015 Red Raccoon. All rights reserved.
//

#include <stdio.h>

#include "transfer.h"
#include "logger.h"

#include "transferOptions.h"

int main (int argc, char* argv[]) {
   
   struct RRTransferOption option = RRTransferOptionMake(argc, argv);
      
   for (int i = 0; i < option.n_files; i++) {
      printf("file: %s\n", option.files[i]);
   }
   
   return 0;
}