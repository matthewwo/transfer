//
//  logger.h
//  transfer
//
//  Created by Matthew Wo on 2/22/15.
//  Copyright (c) 2015 Red Raccoon. All rights reserved.
//

#ifndef LOGGER_H
#define LOGGER_H

#include "transfer.h"
#include <stdio.h>

void logError(RRTransferError domain, uint code, char *message, ...);

#endif