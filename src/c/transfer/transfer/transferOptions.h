//
//  transferOptions.h
//  transfer
//
//  Created by Matthew Wo on 2/22/15.
//  Copyright (c) 2015 Red Raccoon. All rights reserved.
//

#ifndef __transfer__transferOptions__
#define __transfer__transferOptions__

#include <stdio.h>
#include "transfer.h"

struct RRTransferOption {
   RRTransferOperation operation;
   char *host;
   int port;
   char **files;
   uint n_files;
};

struct RRTransferOption RRTransferOptionMake(int argc, char **argv);

#endif
