//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSImageSizeReducer : NSObject
{
}

+ (id)showImageReductionWarningForWindow:(id)arg1 fileSizeDifference:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)showWaitingSheetForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)showUnableToReduceAlert:(id)arg1;
+ (void)setResizedData:(id)arg1 originalData:(id)arg2 forOwners:(id)arg3;
+ (id)largestSizeForImagesMapTableFromOwners:(id)arg1;
+ (void)reduceImageSizeOfLayers:(id)arg1 windowForSheet:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
