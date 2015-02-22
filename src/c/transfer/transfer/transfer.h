//
//  enums.h
//  transfer
//
//  Created by Matthew Wo on 2/22/15.
//  Copyright (c) 2015 Red Raccoon. All rights reserved.
//

#ifndef TRANSFER_H
#define TRANSFER_H

typedef enum {
   RRTransferTransmit,
   RRTransferReceive,
   RRTransferUndefined
} RRTransferOperation;

typedef enum {
   RRTransferFileError,
   RRTransferMissingArgsError,
   RRTransferUnknownError
} RRTransferError;

#endif