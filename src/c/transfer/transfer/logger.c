//
//  logger.c
//  transfer
//
//  Created by Matthew Wo on 2/22/15.
//  Copyright (c) 2015 Red Raccoon. All rights reserved.
//

#include "logger.h"
#include "colors.h"
#include <stdarg.h>

char *transferErrorToStr(RRTransferError err) {
   char *errorType = "";
   switch (err) {
      case RRTransferFileError:
         errorType = "File error";
         break;
      case RRTransferMissingArgsError:
         errorType = "Missing arguments";
         break;
      case RRTransferUnknownError:
         errorType = "Unknown error";
         break;
   }
   return errorType;
}


void logError(RRTransferError domain, uint code, char *message, ...) {
   
   va_list args;
   va_start(args, message);
   vasprintf(&message, message, args);
   
   char *errorType = transferErrorToStr(domain);
   
   printf(KRED"[Error] "KYEL"Code:%d "KBLU"Type:'%s'\n"KNRM"\t- Message:'%s'\n",
          code, errorType, message);
}