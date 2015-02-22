//
//  transferOptions.c
//  transfer
//
//  Created by Matthew Wo on 2/22/15.
//  Copyright (c) 2015 Red Raccoon. All rights reserved.
//

#include "transferOptions.h"

#include "logger.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct RRTransferOption RRTransferOptionMake(int argc, char **argv) {
   struct RRTransferOption option;
   
   option.operation = RRTransferUndefined;
   
   int c;
   while ((c = getopt(argc, argv, "h:p:RTv")) != EOF) {
      switch (c) {
         case 'p':
            option.port = atoi(optarg);
            break;
         case 'R':
            option.operation = RRTransferReceive;
            break;
         case 'T':
            option.operation = RRTransferTransmit;
            break;
         case 'v':
            printf("Transfer v.1.1\n");
            exit(0);
            break;
         case 'h':
            option.host = optarg;
            break;
         case '?': {
            
         }
      }
   }
   
   
   // Parse files' paths
   option.n_files = argc - optind;
   uint n_files = option.n_files;
   option.files =  argv + optind;
   int i = 0;
   for (int index = optind; index < argc; index++) {
      option.files[i++] = argv[index];
   }
   
   if (option.operation == RRTransferUndefined) {
      // User did not define transfer operation, log error, exit failure
      logError(RRTransferMissingArgsError,
               100,
               "Transfer operation not defined, please use flags -R for receive or -T for transmit.");
      
      exit(100);
   } else if (option.operation == RRTransferReceive && n_files != 1) {
      logError(RRTransferMissingArgsError,
               101,
               "Receive operation allows only one file output, got %d instead.", n_files);
      exit(101);
   } else if (option.operation == RRTransferTransmit && n_files < 1) {
      logError(RRTransferMissingArgsError,
               102,
               "Transfer operation requires at least one file output, got %d instead", n_files);
      exit(102);
   }

   
   return option;
}